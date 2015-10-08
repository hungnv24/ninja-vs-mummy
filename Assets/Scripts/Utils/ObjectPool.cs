using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObjectPool : MonoBehaviour
{
	const string prefabsDir = "Prefabs/";

	Hashtable listTable = new Hashtable();

	public static ObjectPool Instance
	{ get; private set;}

	void Awake()
	{
		Instance = this;
	}

	public Object GetPrefabsByName(string name)
	{
		ObjectList objectList = GetObjectListByName (name);
		Object obj = objectList.GetFirstFree ();
		if (obj == null || obj.Equals (null)) {
			obj = Object.Instantiate (Resources.Load (prefabsDir + name));
			obj.name = name;
		}
		return obj;
	}

	public void StoreFree(Object obj)
	{
		ObjectList objectList = GetObjectListByName (obj.name);
		bool result = objectList.StoreFree (obj);
		if (!result) {
			Object.Destroy(obj);
		}
	}

	private ObjectList GetObjectListByName(string name)
	{
		if (listTable.ContainsKey (name)) {
			return (ObjectList)listTable [name];
		} else {
			listTable.Add(name, new ObjectList());
			return (ObjectList)listTable[name];
		}
	}
}

class ObjectList
{
	const int LIST_SIZE = 10;
	Queue freeQueue = new Queue();	

	public Object GetFirstFree()
	{
		if (freeQueue.Count > 0) {
			return (Object)freeQueue.Dequeue();
		}
		return null;
	}

	public bool StoreFree(Object obj)
	{
		if (freeQueue.Count >= LIST_SIZE) {
			return false;
		}
		freeQueue.Enqueue (obj);
		return true;
	}
}
