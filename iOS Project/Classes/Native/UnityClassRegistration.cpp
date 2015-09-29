struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

}

void RegisterAllClasses()
{
	//Total: 71 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//14. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//15. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//16. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//17. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//18. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//19. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//20. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//21. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//22. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//23. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//24. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//25. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//26. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//27. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//28. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//29. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//30. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//31. CloudServiceHandlerBehaviour
	void RegisterClass_CloudServiceHandlerBehaviour();
	RegisterClass_CloudServiceHandlerBehaviour();

	//32. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//33. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//34. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//35. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//36. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//37. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//40. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//41. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//42. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//43. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//44. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//45. HaloManager
	void RegisterClass_HaloManager();
	RegisterClass_HaloManager();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//48. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//49. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//50. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//51. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//52. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//53. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//54. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//55. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//56. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//57. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//58. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//59. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//60. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//61. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//62. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//63. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//64. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//65. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//66. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//67. NetworkManager
	//Skipping

	//68. MasterServerInterface
	//Skipping

	//69. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//70. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

}
