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

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 75 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//17. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//22. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//23. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//24. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//28. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//29. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//30. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//31. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//32. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//33. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//36. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//37. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//38. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//39. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//40. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//41. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//42. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//43. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//44. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//45. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//46. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//47. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//48. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//49. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//50. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//51. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//52. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//53. AnchoredJoint2D
	void RegisterClass_AnchoredJoint2D();
	RegisterClass_AnchoredJoint2D();

	//54. Joint2D
	void RegisterClass_Joint2D();
	RegisterClass_Joint2D();

	//55. SpringJoint2D
	void RegisterClass_SpringJoint2D();
	RegisterClass_SpringJoint2D();

	//56. HingeJoint2D
	void RegisterClass_HingeJoint2D();
	RegisterClass_HingeJoint2D();

	//57. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//58. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//59. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//60. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//61. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//62. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//63. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//64. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//65. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//70. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//71. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//72. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//73. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//74. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
