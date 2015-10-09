using UnityEngine;
using System.Collections;

public class CommandManager : MonoBehaviour
{
	Queue commandQueue = new Queue();
	public static CommandManager Instance {get; private set;}

	// Use this for initialization
	void Awake ()
	{
		Instance = this;
	}
	
	void FixedUpdate ()
	{
		if (commandQueue.Count > 0) {
			Command command = (Command) commandQueue.Dequeue();
			command.execute();
		}
	}

	public void Add(Command command)
	{
		commandQueue.Enqueue (command);
	}
}
