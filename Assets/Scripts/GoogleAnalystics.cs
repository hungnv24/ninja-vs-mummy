using UnityEngine;
using System.Collections;

public class GoogleAnalystics : MonoBehaviour
{
    public GoogleAnalyticsV3 gav3;
    // Use this for initialization
    void Start()
    {
        gav3.LogScreen(Application.loadedLevelName);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
