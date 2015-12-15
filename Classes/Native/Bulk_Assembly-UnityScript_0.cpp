#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// BasicAIMovement
struct BasicAIMovement_t289;
// BuzzerScript
struct BuzzerScript_t290;
// WinCondition
struct WinCondition_t291;
// UnityEngine.Collider2D
struct Collider2D_t316;
// autoKill
struct autoKill_t292;
// cameraMovement
struct cameraMovement_t294;
// enemyProjectile
struct enemyProjectile_t295;
// UnityEngine.Collision2D
struct Collision2D_t317;
// externturret
struct externturret_t296;
// followCamera
struct followCamera_t297;
// netJs
struct netJs_t298;
// syncPlayer
struct syncPlayer_t299;
// PhotonStream
struct PhotonStream_t85;
// PhotonMessageInfo
struct PhotonMessageInfo_t82;
// truckSynchronize
struct truckSynchronize_t300;
// System.Object
struct Object_t;
// opencontrols
struct opencontrols_t304;
// opencredits
struct opencredits_t305;
// openlevels
struct openlevels_t306;
// playerFriction
struct playerFriction_t307;
// playerMovement
struct playerMovement_t308;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t140;
// projectile
struct projectile_t311;
// returntomenu
struct returntomenu_t312;
// run_game
struct run_game_t313;
// touchpad
struct touchpad_t314;
// truckMove
struct truckMove_t301;
// turretMove
struct turretMove_t315;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_BasicAIMovement.h"
#include "AssemblyU2DUnityScript_BasicAIMovementMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Double.h"
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Object.h"
#include "AssemblyU2DUnityScript_BuzzerScript.h"
#include "AssemblyU2DUnityScript_BuzzerScriptMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonNetworkMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonViewMethodDeclarations.h"
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonView.h"
#include "mscorlib_ArrayTypes.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonTargets.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "AssemblyU2DUnityScript_truckMove.h"
#include "AssemblyU2DUnityScript_WinCondition.h"
#include "AssemblyU2DUnityScript_WinConditionMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "AssemblyU2DUnityScript_autoKill.h"
#include "AssemblyU2DUnityScript_autoKillMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
#include "AssemblyU2DUnityScript_cameraMovement.h"
#include "AssemblyU2DUnityScript_cameraMovementMethodDeclarations.h"
#include "AssemblyU2DUnityScript_enemyProjectile.h"
#include "AssemblyU2DUnityScript_enemyProjectileMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D.h"
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
#include "AssemblyU2DUnityScript_externturret.h"
#include "AssemblyU2DUnityScript_externturretMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "AssemblyU2DUnityScript_followCamera.h"
#include "AssemblyU2DUnityScript_followCameraMethodDeclarations.h"
#include "AssemblyU2DUnityScript_netJs.h"
#include "AssemblyU2DUnityScript_netJsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PeerState.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
#include "AssemblyU2DUnityScript_playerMovement.h"
#include "AssemblyU2DUnityScript_syncPlayer.h"
#include "AssemblyU2DUnityScript_syncPlayerMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonStream.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonMessageInfo.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PhotonStreamMethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
#include "AssemblyU2DUnityScript_truckSynchronize.h"
#include "AssemblyU2DUnityScript_truckSynchronizeMethodDeclarations.h"
#include "mscorlib_System_ArrayMethodDeclarations.h"
#include "AssemblyU2DUnityScript_opencontrols.h"
#include "AssemblyU2DUnityScript_opencontrolsMethodDeclarations.h"
#include "AssemblyU2DUnityScript_opencredits.h"
#include "AssemblyU2DUnityScript_opencreditsMethodDeclarations.h"
#include "AssemblyU2DUnityScript_openlevels.h"
#include "AssemblyU2DUnityScript_openlevelsMethodDeclarations.h"
#include "AssemblyU2DUnityScript_playerFriction.h"
#include "AssemblyU2DUnityScript_playerFrictionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
#include "AssemblyU2DUnityScript_playerMovementMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
#include "UnityEngine_UnityEngine_Sprite.h"
#include "AssemblyU2DUnityScript_turretMove.h"
#include "AssemblyU2DUnityScript_turretMoveMethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_ExtensionsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "AssemblyU2DUnityScript_projectile.h"
#include "AssemblyU2DUnityScript_projectileMethodDeclarations.h"
#include "AssemblyU2DUnityScript_returntomenu.h"
#include "AssemblyU2DUnityScript_returntomenuMethodDeclarations.h"
#include "AssemblyU2DUnityScript_run_game.h"
#include "AssemblyU2DUnityScript_run_gameMethodDeclarations.h"
#include "AssemblyU2DUnityScript_touchpad.h"
#include "AssemblyU2DUnityScript_touchpadMethodDeclarations.h"
#include "AssemblyU2DUnityScript_truckMoveMethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltinsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m1187_gshared (Component_t112 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1187(__this, method) (( Object_t * (*) (Component_t112 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1187_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t140_m1157(__this, method) (( Rigidbody2D_t140 * (*) (Component_t112 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1187_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicAIMovement::.ctor()
extern "C" void BasicAIMovement__ctor_m1279 (BasicAIMovement_t289 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BasicAIMovement::Start()
extern "C" void BasicAIMovement_Start_m1280 (BasicAIMovement_t289 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___fireRate_7);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		__this->___fireRate_7 = ((int32_t)10);
	}

IL_0014:
	{
		int32_t L_1 = (__this->___fireRate_7);
		__this->___fireTimer_8 = L_1;
		double L_2 = (__this->___maxV_4);
		if ((((double)L_2) > ((double)(((double)((double)0))))))
		{
			goto IL_0035;
		}
	}
	{
		__this->___maxV_4 = (((double)((double)1)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void BasicAIMovement::Update()
extern const Il2CppType* Rigidbody2D_t140_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern "C" void BasicAIMovement_Update_m1281 (BasicAIMovement_t289 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rigidbody2D_t140_0_0_0_var = il2cpp_codegen_type_from_index(129);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Rigidbody2D_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t162  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t138  V_2 = {0};
	Quaternion_t154  V_3 = {0};
	Vector3_t138  V_4 = {0};
	Vector3_t138  V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	double V_9 = 0.0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	double V_13 = 0.0;
	double V_14 = 0.0;
	float V_15 = 0.0f;
	Quaternion_t154  V_16 = {0};
	Vector3_t138  V_17 = {0};
	float V_18 = 0.0f;
	Quaternion_t154  V_19 = {0};
	Vector3_t138  V_20 = {0};
	Vector2_t162  V_21 = {0};
	Quaternion_t154  V_22 = {0};
	Vector3_t138  V_23 = {0};
	Quaternion_t154  V_24 = {0};
	Vector3_t138  V_25 = {0};
	float V_26 = 0.0f;
	Vector3_t138  V_27 = {0};
	Quaternion_t154  V_28 = {0};
	Quaternion_t154  V_29 = {0};
	Vector3_t138  V_30 = {0};
	float V_31 = 0.0f;
	Vector3_t138  V_32 = {0};
	Quaternion_t154  V_33 = {0};
	{
		double L_0 = (__this->___relativeXOffset_5);
		double L_1 = (__this->___relativeYOffset_6);
		Vector2_t162  L_2 = {0};
		Vector2__ctor_m1398(&L_2, (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t159 * L_3 = (__this->___player_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Component_t112 * L_5 = GameObject_GetComponent_m1399(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_5, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Vector2_t162  L_6 = Rigidbody2D_get_velocity_m1124(((Rigidbody2D_t140 *)CastclassSealed(L_5, Rigidbody2D_t140_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_21 = L_6;
		float L_7 = Vector2_get_magnitude_m1400((&V_21), /*hidden argument*/NULL);
		V_1 = L_7;
		GameObject_t159 * L_8 = (__this->___player_2);
		NullCheck(L_8);
		Transform_t160 * L_9 = GameObject_get_transform_m1189(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t138  L_10 = Transform_get_position_m1160(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		GameObject_t159 * L_11 = (__this->___player_2);
		NullCheck(L_11);
		Transform_t160 * L_12 = GameObject_get_transform_m1189(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t154  L_13 = Transform_get_rotation_m1271(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Transform_t160 * L_14 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t138  L_15 = Transform_get_position_m1160(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Quaternion_t154  L_16 = V_3;
		Vector2_t162  L_17 = V_0;
		Vector3_t138  L_18 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Vector3_t138  L_19 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20 = ((&V_5)->___x_1);
		V_6 = L_20;
		float L_21 = ((&V_5)->___y_2);
		V_7 = L_21;
		float L_22 = ((&V_2)->___x_1);
		float L_23 = V_6;
		float L_24 = ((&V_4)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_25 = powf(((float)((float)((float)((float)L_22+(float)L_23))-(float)L_24)), (((float)((float)2))));
		float L_26 = ((&V_2)->___y_2);
		float L_27 = V_7;
		float L_28 = ((&V_4)->___y_2);
		float L_29 = powf(((float)((float)((float)((float)L_26+(float)L_27))-(float)L_28)), (((float)((float)2))));
		float L_30 = sqrtf(((float)((float)L_25+(float)L_29)));
		V_8 = L_30;
		double L_31 = (__this->___maxV_4);
		float L_32 = V_8;
		float L_33 = expf(((float)((float)((-L_32))/(float)(((float)((float)5))))));
		V_9 = ((double)((double)((double)((double)L_31*(double)(((double)((double)((float)((float)(((float)((float)1)))-(float)L_33)))))))-(double)(((double)((double)1)))));
		float L_34 = ((&V_2)->___y_2);
		float L_35 = V_7;
		float L_36 = ((&V_4)->___y_2);
		float L_37 = ((&V_2)->___x_1);
		float L_38 = V_6;
		float L_39 = ((&V_4)->___x_1);
		float L_40 = atan2f(((float)((float)((float)((float)L_34+(float)L_35))-(float)L_36)), ((float)((float)((float)((float)L_37+(float)L_38))-(float)L_39)));
		V_10 = ((float)((float)L_40+(float)(3.14159274f)));
		Transform_t160 * L_41 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Quaternion_t154  L_42 = Transform_get_rotation_m1271(L_41, /*hidden argument*/NULL);
		V_22 = L_42;
		Vector3_t138  L_43 = Quaternion_get_eulerAngles_m1401((&V_22), /*hidden argument*/NULL);
		V_23 = L_43;
		float L_44 = ((&V_23)->___z_3);
		V_11 = ((float)((float)((float)((float)(6.28318548f)*(float)L_44))/(float)(((float)((float)((int32_t)360))))));
		float L_45 = V_10;
		float L_46 = V_11;
		float L_47 = Mathf_DeltaAngle_m1402(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)((int32_t)360))))*(float)L_45))/(float)(6.28318548f))), ((float)((float)((float)((float)(((float)((float)((int32_t)360))))*(float)L_46))/(float)(6.28318548f))), /*hidden argument*/NULL);
		V_12 = L_47;
		double L_48 = V_9;
		float L_49 = V_11;
		float L_50 = sinf(L_49);
		V_13 = ((double)((double)L_48*(double)(((double)((double)L_50)))));
		double L_51 = V_9;
		float L_52 = V_11;
		float L_53 = cosf(L_52);
		V_14 = ((double)((double)L_51*(double)(((double)((double)L_53)))));
		float L_54 = V_12;
		if ((((float)L_54) >= ((float)(((float)((float)0))))))
		{
			goto IL_01fc;
		}
	}
	{
		Transform_t160 * L_55 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Quaternion_t154  L_56 = Transform_get_rotation_m1271(L_55, /*hidden argument*/NULL);
		V_24 = L_56;
		Vector3_t138  L_57 = Quaternion_get_eulerAngles_m1401((&V_24), /*hidden argument*/NULL);
		V_25 = L_57;
		float L_58 = ((&V_25)->___z_3);
		float L_59 = (fmodf(((float)((float)L_58-(float)(((float)((float)1))))), (((float)((float)((int32_t)360))))));
		V_15 = L_59;
		Transform_t160 * L_60 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Quaternion_t154  L_61 = Transform_get_rotation_m1271(L_60, /*hidden argument*/NULL);
		Quaternion_t154  L_62 = L_61;
		V_16 = L_62;
		Vector3_t138  L_63 = Quaternion_get_eulerAngles_m1401((&V_16), /*hidden argument*/NULL);
		Vector3_t138  L_64 = L_63;
		V_17 = L_64;
		float L_65 = V_15;
		float L_66 = L_65;
		V_26 = L_66;
		(&V_17)->___z_3 = L_66;
		float L_67 = V_26;
		Vector3_t138  L_68 = V_17;
		Vector3_t138  L_69 = L_68;
		V_27 = L_69;
		Quaternion_set_eulerAngles_m1403((&V_16), L_69, /*hidden argument*/NULL);
		Vector3_t138  L_70 = V_27;
		Transform_t160 * L_71 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_72 = V_16;
		Quaternion_t154  L_73 = L_72;
		V_28 = L_73;
		NullCheck(L_71);
		Transform_set_rotation_m1193(L_71, L_73, /*hidden argument*/NULL);
		Quaternion_t154  L_74 = V_28;
	}

IL_01fc:
	{
		float L_75 = V_12;
		if ((((float)L_75) <= ((float)(((float)((float)0))))))
		{
			goto IL_027b;
		}
	}
	{
		Transform_t160 * L_76 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		Quaternion_t154  L_77 = Transform_get_rotation_m1271(L_76, /*hidden argument*/NULL);
		V_29 = L_77;
		Vector3_t138  L_78 = Quaternion_get_eulerAngles_m1401((&V_29), /*hidden argument*/NULL);
		V_30 = L_78;
		float L_79 = ((&V_30)->___z_3);
		float L_80 = (fmodf(((float)((float)L_79+(float)(((float)((float)1))))), (((float)((float)((int32_t)360))))));
		V_18 = L_80;
		Transform_t160 * L_81 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Quaternion_t154  L_82 = Transform_get_rotation_m1271(L_81, /*hidden argument*/NULL);
		Quaternion_t154  L_83 = L_82;
		V_19 = L_83;
		Vector3_t138  L_84 = Quaternion_get_eulerAngles_m1401((&V_19), /*hidden argument*/NULL);
		Vector3_t138  L_85 = L_84;
		V_20 = L_85;
		float L_86 = V_18;
		float L_87 = L_86;
		V_31 = L_87;
		(&V_20)->___z_3 = L_87;
		float L_88 = V_31;
		Vector3_t138  L_89 = V_20;
		Vector3_t138  L_90 = L_89;
		V_32 = L_90;
		Quaternion_set_eulerAngles_m1403((&V_19), L_90, /*hidden argument*/NULL);
		Vector3_t138  L_91 = V_32;
		Transform_t160 * L_92 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_93 = V_19;
		Quaternion_t154  L_94 = L_93;
		V_33 = L_94;
		NullCheck(L_92);
		Transform_set_rotation_m1193(L_92, L_94, /*hidden argument*/NULL);
		Quaternion_t154  L_95 = V_33;
	}

IL_027b:
	{
		Rigidbody2D_t140 * L_96 = (__this->___body_3);
		double L_97 = V_14;
		double L_98 = V_13;
		Vector2_t162  L_99 = {0};
		Vector2__ctor_m1398(&L_99, (((float)((float)L_97))), (((float)((float)L_98))), /*hidden argument*/NULL);
		NullCheck(L_96);
		Rigidbody2D_set_velocity_m1117(L_96, L_99, /*hidden argument*/NULL);
		int32_t L_100 = (__this->___fireTimer_8);
		__this->___fireTimer_8 = ((int32_t)((int32_t)L_100-(int32_t)1));
		int32_t L_101 = (__this->___fireTimer_8);
		if (L_101)
		{
			goto IL_02ca;
		}
	}
	{
		float L_102 = V_8;
		bool L_103 = (bool)VirtFuncInvoker1< bool, double >::Invoke(6 /* System.Boolean BasicAIMovement::inPosition(System.Double) */, __this, (((double)((double)L_102))));
		if (!L_103)
		{
			goto IL_02be;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void BasicAIMovement::fireProjectile() */, __this);
	}

IL_02be:
	{
		int32_t L_104 = (__this->___fireRate_7);
		__this->___fireTimer_8 = L_104;
	}

IL_02ca:
	{
		return;
	}
}
// System.Boolean BasicAIMovement::inPosition(System.Double)
extern "C" bool BasicAIMovement_inPosition_m1282 (BasicAIMovement_t289 * __this, double ___distance2Player, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		double L_0 = ___distance2Player;
		if ((((double)L_0) >= ((double)(((double)((double)((int32_t)15)))))))
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0015;
	}

IL_000f:
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Void BasicAIMovement::fireProjectile()
extern Il2CppCodeGenString* _stringLiteral451;
extern "C" void BasicAIMovement_fireProjectile_m1283 (BasicAIMovement_t289 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m877(NULL /*static, unused*/, _stringLiteral451, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BasicAIMovement::Main()
extern "C" void BasicAIMovement_Main_m1284 (BasicAIMovement_t289 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BuzzerScript::.ctor()
extern "C" void BuzzerScript__ctor_m1285 (BuzzerScript_t290 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		__this->___health_11 = ((int32_t)100);
		return;
	}
}
// System.Void BuzzerScript::Start()
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral452;
extern "C" void BuzzerScript_Start_m1286 (BuzzerScript_t290 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___health_11);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t159 * L_1 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_Destroy_m519(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		GameObject_t159 * L_2 = GameObject_FindGameObjectWithTag_m1404(NULL /*static, unused*/, _stringLiteral452, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t160 * L_3 = GameObject_get_transform_m1189(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t160 * L_4 = Transform_GetChild_m1405(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_t159 * L_5 = Component_get_gameObject_m959(L_4, /*hidden argument*/NULL);
		__this->___player_2 = L_5;
		int32_t L_6 = (__this->___fireRate_9);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		__this->___fireRate_9 = ((int32_t)10);
	}

IL_004b:
	{
		int32_t L_7 = (__this->___fireRate_9);
		__this->___fireTimer_10 = L_7;
		double L_8 = (__this->___maxV_6);
		if ((((double)L_8) > ((double)(((double)((double)0))))))
		{
			goto IL_006c;
		}
	}
	{
		__this->___maxV_6 = (((double)((double)1)));
	}

IL_006c:
	{
		int32_t L_9 = Random_Range_m1406(NULL /*static, unused*/, 5, ((int32_t)15), /*hidden argument*/NULL);
		__this->___relativeXOffset_7 = (((double)((double)L_9)));
		int32_t L_10 = Random_Range_m1406(NULL /*static, unused*/, ((int32_t)-10), 0, /*hidden argument*/NULL);
		__this->___relativeYOffset_8 = (((double)((double)L_10)));
		int32_t L_11 = Random_Range_m1406(NULL /*static, unused*/, (-1), 1, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		double L_13 = (__this->___relativeXOffset_7);
		__this->___relativeXOffset_7 = ((-L_13));
	}

IL_00a6:
	{
		return;
	}
}
// System.Void BuzzerScript::Update()
extern const Il2CppType* Rigidbody2D_t140_0_0_0_var;
extern const Il2CppType* Collider2D_t316_0_0_0_var;
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t214_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t140_il2cpp_TypeInfo_var;
extern TypeInfo* Collider2D_t316_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t319_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t249_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral454;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral456;
extern "C" void BuzzerScript_Update_m1287 (BuzzerScript_t290 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rigidbody2D_t140_0_0_0_var = il2cpp_codegen_type_from_index(129);
		Collider2D_t316_0_0_0_var = il2cpp_codegen_type_from_index(178);
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Int32_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Rigidbody2D_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		Collider2D_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Physics2D_t319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Single_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t162  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t138  V_2 = {0};
	Quaternion_t154  V_3 = {0};
	Vector3_t138  V_4 = {0};
	Vector3_t138  V_5 = {0};
	Collider2D_t316 * V_6 = {0};
	Vector3_t138  V_7 = {0};
	Vector3_t138  V_8 = {0};
	Vector3_t138  V_9 = {0};
	RaycastHit2D_t318  V_10 = {0};
	RaycastHit2D_t318  V_11 = {0};
	RaycastHit2D_t318  V_12 = {0};
	Vector3_t138  V_13 = {0};
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	double V_18 = 0.0;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	double V_23 = 0.0;
	double V_24 = 0.0;
	float V_25 = 0.0f;
	Vector3_t138  V_26 = {0};
	Vector3_t138  V_27 = {0};
	Vector2_t162  V_28 = {0};
	Quaternion_t154  V_29 = {0};
	Vector3_t138  V_30 = {0};
	Quaternion_t154  V_31 = {0};
	Vector3_t138  V_32 = {0};
	{
		Transform_t160 * L_0 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t138  L_1 = Transform_get_position_m1160(L_0, /*hidden argument*/NULL);
		V_26 = L_1;
		float L_2 = ((&V_26)->___x_1);
		if ((((float)L_2) <= ((float)(((float)((float)((int32_t)116)))))))
		{
			goto IL_0046;
		}
	}
	{
		Transform_t160 * L_3 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Transform_t160 * L_4 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t138  L_5 = Transform_get_position_m1160(L_4, /*hidden argument*/NULL);
		V_27 = L_5;
		float L_6 = ((&V_27)->___z_3);
		Vector3_t138  L_7 = {0};
		Vector3__ctor_m1191(&L_7, (((float)((float)((int32_t)107)))), (((float)((float)((int32_t)-5)))), L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m1192(L_3, L_7, /*hidden argument*/NULL);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKeyDown_m1092(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		PhotonView_t83 * L_9 = (__this->___n_4);
		ObjectU5BU5D_t111* L_10 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 1));
		int32_t L_11 = ((int32_t)100);
		Object_t * L_12 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 0, sizeof(Object_t *))) = (Object_t *)L_12;
		NullCheck(L_9);
		PhotonView_RPC_m596(L_9, _stringLiteral453, 0, L_10, /*hidden argument*/NULL);
	}

IL_0073:
	{
		double L_13 = (__this->___relativeXOffset_7);
		double L_14 = (__this->___relativeYOffset_8);
		Vector2_t162  L_15 = {0};
		Vector2__ctor_m1398(&L_15, (((float)((float)L_13))), (((float)((float)L_14))), /*hidden argument*/NULL);
		V_0 = L_15;
		GameObject_t159 * L_16 = (__this->___player_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		Component_t112 * L_18 = GameObject_GetComponent_m1399(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_18, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Vector2_t162  L_19 = Rigidbody2D_get_velocity_m1124(((Rigidbody2D_t140 *)CastclassSealed(L_18, Rigidbody2D_t140_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_28 = L_19;
		float L_20 = Vector2_get_magnitude_m1400((&V_28), /*hidden argument*/NULL);
		V_1 = L_20;
		GameObject_t159 * L_21 = (__this->___player_2);
		NullCheck(L_21);
		Transform_t160 * L_22 = GameObject_get_transform_m1189(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t138  L_23 = Transform_get_position_m1160(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		GameObject_t159 * L_24 = (__this->___player_2);
		NullCheck(L_24);
		Transform_t160 * L_25 = GameObject_get_transform_m1189(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Quaternion_t154  L_26 = Transform_get_rotation_m1271(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		Transform_t160 * L_27 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t138  L_28 = Transform_get_position_m1160(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		Quaternion_t154  L_29 = V_3;
		Vector2_t162  L_30 = V_0;
		Vector3_t138  L_31 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		Vector3_t138  L_32 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_29, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		Type_t * L_33 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		Component_t112 * L_34 = Component_GetComponent_m1407(__this, L_33, /*hidden argument*/NULL);
		V_6 = ((Collider2D_t316 *)CastclassClass(L_34, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2D_t316 * L_35 = V_6;
		NullCheck(L_35);
		Behaviour_set_enabled_m1268(L_35, 0, /*hidden argument*/NULL);
		Transform_t160 * L_36 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Quaternion_t154  L_37 = Transform_get_rotation_m1271(L_36, /*hidden argument*/NULL);
		Vector2_t162  L_38 = {0};
		Vector2__ctor_m1398(&L_38, (((float)((float)((int32_t)10)))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t138  L_39 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		Vector3_t138  L_40 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		Transform_t160 * L_41 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Quaternion_t154  L_42 = Transform_get_rotation_m1271(L_41, /*hidden argument*/NULL);
		Vector2_t162  L_43 = {0};
		Vector2__ctor_m1398(&L_43, (((float)((float)5))), (((float)((float)1))), /*hidden argument*/NULL);
		Vector3_t138  L_44 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		Vector3_t138  L_45 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_42, L_44, /*hidden argument*/NULL);
		V_8 = L_45;
		Transform_t160 * L_46 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Quaternion_t154  L_47 = Transform_get_rotation_m1271(L_46, /*hidden argument*/NULL);
		Vector2_t162  L_48 = {0};
		Vector2__ctor_m1398(&L_48, (((float)((float)5))), (((float)((float)(-1)))), /*hidden argument*/NULL);
		Vector3_t138  L_49 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Vector3_t138  L_50 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_47, L_49, /*hidden argument*/NULL);
		V_9 = L_50;
		Vector3_t138  L_51 = V_4;
		Vector2_t162  L_52 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		Vector3_t138  L_53 = V_7;
		Vector2_t162  L_54 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t319_il2cpp_TypeInfo_var);
		RaycastHit2D_t318  L_55 = Physics2D_Raycast_m1408(NULL /*static, unused*/, L_52, L_54, (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		V_10 = L_55;
		Vector3_t138  L_56 = V_4;
		Vector2_t162  L_57 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		Vector3_t138  L_58 = V_8;
		Vector2_t162  L_59 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		RaycastHit2D_t318  L_60 = Physics2D_Raycast_m1408(NULL /*static, unused*/, L_57, L_59, (((float)((float)5))), /*hidden argument*/NULL);
		V_11 = L_60;
		Vector3_t138  L_61 = V_4;
		Vector2_t162  L_62 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		Vector3_t138  L_63 = V_9;
		Vector2_t162  L_64 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		RaycastHit2D_t318  L_65 = Physics2D_Raycast_m1408(NULL /*static, unused*/, L_62, L_64, (((float)((float)5))), /*hidden argument*/NULL);
		V_12 = L_65;
		Collider2D_t316 * L_66 = V_6;
		NullCheck(L_66);
		Behaviour_set_enabled_m1268(L_66, 1, /*hidden argument*/NULL);
		Vector3_t138  L_67 = V_7;
		Vector2_t162  L_68 = RaycastHit2D_get_normal_m1409((&V_10), /*hidden argument*/NULL);
		Vector3_t138  L_69 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		Vector3_t138  L_70 = Vector3_Cross_m1410(NULL /*static, unused*/, L_67, L_69, /*hidden argument*/NULL);
		V_13 = L_70;
		float L_71 = ((&V_5)->___x_1);
		V_14 = L_71;
		float L_72 = ((&V_5)->___y_2);
		V_15 = L_72;
		float L_73 = ((&V_2)->___x_1);
		float L_74 = V_14;
		float L_75 = ((&V_4)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_76 = powf(((float)((float)((float)((float)L_73+(float)L_74))-(float)L_75)), (((float)((float)2))));
		float L_77 = ((&V_2)->___y_2);
		float L_78 = V_15;
		float L_79 = ((&V_4)->___y_2);
		float L_80 = powf(((float)((float)((float)((float)L_77+(float)L_78))-(float)L_79)), (((float)((float)2))));
		float L_81 = sqrtf(((float)((float)L_76+(float)L_80)));
		V_16 = L_81;
		V_17 = (((float)((float)0)));
		float L_82 = RaycastHit2D_get_distance_m1411((&V_10), /*hidden argument*/NULL);
		if ((((float)L_82) == ((float)(((float)((float)0))))))
		{
			goto IL_0249;
		}
	}
	{
		float L_83 = RaycastHit2D_get_distance_m1411((&V_10), /*hidden argument*/NULL);
		V_17 = ((float)((float)(((float)((float)((int32_t)10))))/(float)L_83));
		float L_84 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_85 = Mathf_Clamp_m1412(NULL /*static, unused*/, L_84, (((float)((float)0))), (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		V_17 = L_85;
	}

IL_0249:
	{
		double L_86 = (__this->___maxV_6);
		float L_87 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_88 = expf(((float)((float)((-L_87))/(float)(((float)((float)5))))));
		float L_89 = V_17;
		V_18 = ((double)((double)((double)((double)((double)((double)L_86*(double)(((double)((double)((float)((float)(((float)((float)1)))-(float)L_88)))))))-(double)(((double)((double)1)))))-(double)(((double)((double)L_89)))));
		double L_90 = V_18;
		__this->___Velocity_12 = L_90;
		float L_91 = V_17;
		__this->___adj_15 = (((double)((double)L_91)));
		float L_92 = RaycastHit2D_get_distance_m1411((&V_10), /*hidden argument*/NULL);
		__this->___castdist_17 = (((double)((double)L_92)));
		double L_93 = (__this->___maxV_6);
		float L_94 = V_16;
		float L_95 = expf(((float)((float)((-L_94))/(float)(((float)((float)5))))));
		__this->___other_16 = ((double)((double)((double)((double)L_93*(double)(((double)((double)((float)((float)(((float)((float)1)))-(float)L_95)))))))-(double)(((double)((double)1)))));
		float L_96 = ((&V_2)->___y_2);
		float L_97 = V_15;
		float L_98 = ((&V_4)->___y_2);
		float L_99 = ((&V_2)->___x_1);
		float L_100 = V_14;
		float L_101 = ((&V_4)->___x_1);
		float L_102 = atan2f(((float)((float)((float)((float)L_96+(float)L_97))-(float)L_98)), ((float)((float)((float)((float)L_99+(float)L_100))-(float)L_101)));
		V_19 = ((float)((float)L_102+(float)(3.14159274f)));
		Transform_t160 * L_103 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_103);
		Quaternion_t154  L_104 = Transform_get_rotation_m1271(L_103, /*hidden argument*/NULL);
		V_29 = L_104;
		Vector3_t138  L_105 = Quaternion_get_eulerAngles_m1401((&V_29), /*hidden argument*/NULL);
		V_30 = L_105;
		float L_106 = ((&V_30)->___z_3);
		V_20 = ((float)((float)((float)((float)(6.28318548f)*(float)L_106))/(float)(((float)((float)((int32_t)360))))));
		float L_107 = ((&V_2)->___y_2);
		float L_108 = ((&V_4)->___y_2);
		float L_109 = ((&V_2)->___x_1);
		float L_110 = ((&V_4)->___x_1);
		float L_111 = atan2f(((float)((float)L_107-(float)L_108)), ((float)((float)L_109-(float)L_110)));
		V_21 = L_111;
		float L_112 = V_19;
		float L_113 = V_20;
		float L_114 = Mathf_DeltaAngle_m1402(NULL /*static, unused*/, ((float)((float)((float)((float)(((float)((float)((int32_t)360))))*(float)L_112))/(float)(6.28318548f))), ((float)((float)((float)((float)(((float)((float)((int32_t)360))))*(float)L_113))/(float)(6.28318548f))), /*hidden argument*/NULL);
		V_22 = L_114;
		float L_115 = V_22;
		__this->___Angle_13 = (((double)((double)L_115)));
		double L_116 = V_18;
		float L_117 = V_20;
		float L_118 = sinf(L_117);
		V_23 = ((double)((double)L_116*(double)(((double)((double)L_118)))));
		double L_119 = V_18;
		float L_120 = V_20;
		float L_121 = cosf(L_120);
		V_24 = ((double)((double)L_119*(double)(((double)((double)L_121)))));
		Transform_t160 * L_122 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_122);
		Quaternion_t154  L_123 = Transform_get_rotation_m1271(L_122, /*hidden argument*/NULL);
		V_31 = L_123;
		Vector3_t138  L_124 = Quaternion_get_eulerAngles_m1401((&V_31), /*hidden argument*/NULL);
		V_32 = L_124;
		float L_125 = ((&V_32)->___z_3);
		V_25 = L_125;
		float L_126 = ((&V_13)->___z_3);
		if ((((float)L_126) <= ((float)(((float)((float)0))))))
		{
			goto IL_03ab;
		}
	}
	{
		float L_127 = RaycastHit2D_get_distance_m1411((&V_10), /*hidden argument*/NULL);
		if ((!(((float)L_127) == ((float)(((float)((float)0)))))))
		{
			goto IL_03b9;
		}
	}

IL_03ab:
	{
		float L_128 = RaycastHit2D_get_distance_m1411((&V_12), /*hidden argument*/NULL);
		if ((((float)L_128) == ((float)(((float)((float)0))))))
		{
			goto IL_03d4;
		}
	}

IL_03b9:
	{
		Transform_t160 * L_129 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Vector3_t138  L_130 = {0};
		Vector3__ctor_m1191(&L_130, (((float)((float)0))), (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_Rotate_m1413(L_129, L_130, /*hidden argument*/NULL);
		goto IL_0470;
	}

IL_03d4:
	{
		float L_131 = ((&V_13)->___z_3);
		if ((((float)L_131) >= ((float)(((float)((float)0))))))
		{
			goto IL_03f0;
		}
	}
	{
		float L_132 = RaycastHit2D_get_distance_m1411((&V_10), /*hidden argument*/NULL);
		if ((!(((float)L_132) == ((float)(((float)((float)0)))))))
		{
			goto IL_03fe;
		}
	}

IL_03f0:
	{
		float L_133 = RaycastHit2D_get_distance_m1411((&V_11), /*hidden argument*/NULL);
		if ((((float)L_133) == ((float)(((float)((float)0))))))
		{
			goto IL_0419;
		}
	}

IL_03fe:
	{
		Transform_t160 * L_134 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Vector3_t138  L_135 = {0};
		Vector3__ctor_m1191(&L_135, (((float)((float)0))), (((float)((float)0))), (((float)((float)(-1)))), /*hidden argument*/NULL);
		NullCheck(L_134);
		Transform_Rotate_m1413(L_134, L_135, /*hidden argument*/NULL);
		goto IL_0470;
	}

IL_0419:
	{
		float L_136 = V_22;
		if ((((float)L_136) >= ((float)(((float)((float)0))))))
		{
			goto IL_0447;
		}
	}
	{
		Transform_t160 * L_137 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Vector3_t138  L_138 = {0};
		Vector3__ctor_m1191(&L_138, (((float)((float)0))), (((float)((float)0))), (((float)((float)(-1)))), /*hidden argument*/NULL);
		NullCheck(L_137);
		Transform_Rotate_m1413(L_137, L_138, /*hidden argument*/NULL);
		Debug_Log_m877(NULL /*static, unused*/, _stringLiteral454, /*hidden argument*/NULL);
		goto IL_0470;
	}

IL_0447:
	{
		float L_139 = V_22;
		if ((((float)L_139) < ((float)(((float)((float)0))))))
		{
			goto IL_0470;
		}
	}
	{
		Debug_Log_m877(NULL /*static, unused*/, _stringLiteral455, /*hidden argument*/NULL);
		Transform_t160 * L_140 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Vector3_t138  L_141 = {0};
		Vector3__ctor_m1191(&L_141, (((float)((float)0))), (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		NullCheck(L_140);
		Transform_Rotate_m1413(L_140, L_141, /*hidden argument*/NULL);
	}

IL_0470:
	{
		float L_142 = V_25;
		__this->___prevRotation_14 = (((double)((double)L_142)));
		Rigidbody2D_t140 * L_143 = (__this->___body_3);
		double L_144 = V_24;
		double L_145 = V_23;
		Vector2_t162  L_146 = {0};
		Vector2__ctor_m1398(&L_146, (((float)((float)L_144))), (((float)((float)L_145))), /*hidden argument*/NULL);
		NullCheck(L_143);
		Rigidbody2D_set_velocity_m1117(L_143, L_146, /*hidden argument*/NULL);
		int32_t L_147 = (__this->___fireTimer_10);
		__this->___fireTimer_10 = ((int32_t)((int32_t)L_147-(int32_t)1));
		int32_t L_148 = (__this->___fireTimer_10);
		if (L_148)
		{
			goto IL_0513;
		}
	}
	{
		float L_149 = ((&V_2)->___x_1);
		float L_150 = ((&V_4)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_151 = powf(((float)((float)L_149-(float)L_150)), (((float)((float)2))));
		float L_152 = ((&V_2)->___y_2);
		float L_153 = ((&V_4)->___y_2);
		float L_154 = powf(((float)((float)L_152-(float)L_153)), (((float)((float)2))));
		float L_155 = sqrtf(((float)((float)L_151+(float)L_154)));
		bool L_156 = (bool)VirtFuncInvoker1< bool, double >::Invoke(6 /* System.Boolean BuzzerScript::inPosition(System.Double) */, __this, (((double)((double)L_155))));
		if (!L_156)
		{
			goto IL_0507;
		}
	}
	{
		PhotonView_t83 * L_157 = (__this->___n_4);
		ObjectU5BU5D_t111* L_158 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 1));
		float L_159 = V_21;
		float L_160 = L_159;
		Object_t * L_161 = Box(Single_t249_il2cpp_TypeInfo_var, &L_160);
		NullCheck(L_158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_158, 0);
		ArrayElementTypeCheck (L_158, L_161);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_158, 0, sizeof(Object_t *))) = (Object_t *)L_161;
		NullCheck(L_157);
		PhotonView_RPC_m596(L_157, _stringLiteral456, 0, L_158, /*hidden argument*/NULL);
	}

IL_0507:
	{
		int32_t L_162 = (__this->___fireRate_9);
		__this->___fireTimer_10 = L_162;
	}

IL_0513:
	{
		return;
	}
}
// System.Boolean BuzzerScript::inPosition(System.Double)
extern "C" bool BuzzerScript_inPosition_m1288 (BuzzerScript_t290 * __this, double ___distance2Player, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		double L_0 = ___distance2Player;
		if ((((double)L_0) >= ((double)(((double)((double)((int32_t)15)))))))
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0015;
	}

IL_000f:
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Void BuzzerScript::fireProjectile(System.Single)
extern const Il2CppType* Rigidbody2D_t140_0_0_0_var;
extern TypeInfo* GameObject_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t140_il2cpp_TypeInfo_var;
extern "C" void BuzzerScript_fireProjectile_m1289 (BuzzerScript_t290 * __this, float ___angle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rigidbody2D_t140_0_0_0_var = il2cpp_codegen_type_from_index(129);
		GameObject_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Rigidbody2D_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	{
		GameObject_t159 * L_0 = (__this->___enemyBullet_5);
		Transform_t160 * L_1 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t138  L_2 = Transform_get_position_m1160(L_1, /*hidden argument*/NULL);
		Transform_t160 * L_3 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t154  L_4 = Transform_get_rotation_m1271(L_3, /*hidden argument*/NULL);
		Object_t238 * L_5 = Object_Instantiate_m1001(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_5, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t160 * L_7 = GameObject_get_transform_m1189(L_6, /*hidden argument*/NULL);
		float L_8 = ___angle;
		Quaternion_t154  L_9 = Quaternion_EulerAngles_m1414(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1193(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t159 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t160 * L_11 = GameObject_get_transform_m1189(L_10, /*hidden argument*/NULL);
		int32_t L_12 = Random_Range_m1406(NULL /*static, unused*/, ((int32_t)-15), ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_m1415(L_11, (((float)((float)0))), (((float)((float)0))), (((float)((float)L_12))), /*hidden argument*/NULL);
		GameObject_t159 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		Component_t112 * L_15 = GameObject_GetComponent_m1399(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t159 * L_16 = V_0;
		NullCheck(L_16);
		Transform_t160 * L_17 = GameObject_get_transform_m1189(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t154  L_18 = Transform_get_rotation_m1271(L_17, /*hidden argument*/NULL);
		Vector2_t162  L_19 = Vector2_get_right_m1416(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_20 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector3_t138  L_21 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		Vector3_t138  L_22 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_21, (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_23 = (__this->___body_3);
		NullCheck(L_23);
		Vector2_t162  L_24 = Rigidbody2D_get_velocity_m1124(L_23, /*hidden argument*/NULL);
		Vector3_t138  L_25 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector3_t138  L_26 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_22, L_25, /*hidden argument*/NULL);
		Vector2_t162  L_27 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_15, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Rigidbody2D_set_velocity_m1117(((Rigidbody2D_t140 *)CastclassSealed(L_15, Rigidbody2D_t140_il2cpp_TypeInfo_var)), L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuzzerScript::damage(System.Int32)
extern const Il2CppType* truckMove_t301_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* truckMove_t301_il2cpp_TypeInfo_var;
extern "C" void BuzzerScript_damage_m1290 (BuzzerScript_t290 * __this, int32_t ___d, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		truckMove_t301_0_0_0_var = il2cpp_codegen_type_from_index(180);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		truckMove_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___health_11);
		int32_t L_1 = ___d;
		__this->___health_11 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		int32_t L_2 = (__this->___health_11);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		GameObject_t159 * L_3 = (__this->___player_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(truckMove_t301_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Component_t112 * L_5 = GameObject_GetComponent_m1399(L_3, L_4, /*hidden argument*/NULL);
		GameObject_t159 * L_6 = (__this->___player_2);
		Type_t * L_7 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(truckMove_t301_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Component_t112 * L_8 = GameObject_GetComponent_m1399(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(((truckMove_t301 *)CastclassClass(L_8, truckMove_t301_il2cpp_TypeInfo_var)));
		int32_t L_9 = (((truckMove_t301 *)CastclassClass(L_8, truckMove_t301_il2cpp_TypeInfo_var))->___enemyCount_6);
		NullCheck(((truckMove_t301 *)CastclassClass(L_5, truckMove_t301_il2cpp_TypeInfo_var)));
		((truckMove_t301 *)CastclassClass(L_5, truckMove_t301_il2cpp_TypeInfo_var))->___enemyCount_6 = ((int32_t)((int32_t)L_9-(int32_t)1));
		GameObject_t159 * L_10 = (__this->___splode_18);
		Transform_t160 * L_11 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t138  L_12 = Transform_get_position_m1160(L_11, /*hidden argument*/NULL);
		Transform_t160 * L_13 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t154  L_14 = Transform_get_rotation_m1271(L_13, /*hidden argument*/NULL);
		Object_Instantiate_m1001(NULL /*static, unused*/, L_10, L_12, L_14, /*hidden argument*/NULL);
		GameObject_t159 * L_15 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Void BuzzerScript::Main()
extern "C" void BuzzerScript_Main_m1291 (BuzzerScript_t290 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WinCondition::.ctor()
extern "C" void WinCondition__ctor_m1292 (WinCondition_t291 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinCondition::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral457;
extern Il2CppCodeGenString* _stringLiteral458;
extern "C" void WinCondition_OnTriggerEnter2D_m1293 (WinCondition_t291 * __this, Collider2D_t316 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t316 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m1417(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m881(NULL /*static, unused*/, L_1, _stringLiteral457, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_Disconnect_m486(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		bool L_3 = PhotonNetwork_get_connected_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral458, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WinCondition::Main()
extern "C" void WinCondition_Main_m1294 (WinCondition_t291 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void autoKill::.ctor()
extern "C" void autoKill__ctor_m1295 (autoKill_t292 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void autoKill::Start()
extern const Il2CppType* ParticleSystem_t293_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ParticleSystem_t293_il2cpp_TypeInfo_var;
extern "C" void autoKill_Start_m1296 (autoKill_t292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParticleSystem_t293_0_0_0_var = il2cpp_codegen_type_from_index(181);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		ParticleSystem_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(ParticleSystem_t293_0_0_0_var), /*hidden argument*/NULL);
		Component_t112 * L_1 = Component_GetComponent_m1407(__this, L_0, /*hidden argument*/NULL);
		__this->___ps_2 = ((ParticleSystem_t293 *)CastclassSealed(L_1, ParticleSystem_t293_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void autoKill::Update()
extern "C" void autoKill_Update_m1297 (autoKill_t292 * __this, const MethodInfo* method)
{
	{
		ParticleSystem_t293 * L_0 = (__this->___ps_2);
		bool L_1 = Object_op_Implicit_m1418(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ParticleSystem_t293 * L_2 = (__this->___ps_2);
		NullCheck(L_2);
		bool L_3 = ParticleSystem_IsAlive_m1419(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t159 * L_4 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void autoKill::Main()
extern "C" void autoKill_Main_m1298 (autoKill_t292 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cameraMovement::.ctor()
extern "C" void cameraMovement__ctor_m1299 (cameraMovement_t294 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cameraMovement::Start()
extern "C" void cameraMovement_Start_m1300 (cameraMovement_t294 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cameraMovement::Update()
extern "C" void cameraMovement_Update_m1301 (cameraMovement_t294 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cameraMovement::Main()
extern "C" void cameraMovement_Main_m1302 (cameraMovement_t294 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void enemyProjectile::.ctor()
extern "C" void enemyProjectile__ctor_m1303 (enemyProjectile_t295 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		__this->___age_3 = ((int32_t)100);
		return;
	}
}
// System.Void enemyProjectile::Start()
extern "C" void enemyProjectile_Start_m1304 (enemyProjectile_t295 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void enemyProjectile::Update()
extern "C" void enemyProjectile_Update_m1305 (enemyProjectile_t295 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___age_3);
		__this->___age_3 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = (__this->___age_3);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t159 * L_2 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void enemyProjectile::OnCollisionEnter2D(UnityEngine.Collision2D)
extern const Il2CppType* PhotonView_t83_0_0_0_var;
extern const Il2CppType* truckMove_t301_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonView_t83_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t214_il2cpp_TypeInfo_var;
extern TypeInfo* truckMove_t301_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral459;
extern Il2CppCodeGenString* _stringLiteral453;
extern "C" void enemyProjectile_OnCollisionEnter2D_m1306 (enemyProjectile_t295 * __this, Collision2D_t317 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonView_t83_0_0_0_var = il2cpp_codegen_type_from_index(34);
		truckMove_t301_0_0_0_var = il2cpp_codegen_type_from_index(180);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GameObject_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		PhotonView_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Int32_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		truckMove_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	{
		Collision2D_t317 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t159 * L_1 = Collision2D_get_gameObject_m1420(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m1421(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m881(NULL /*static, unused*/, L_2, _stringLiteral459, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00fe;
		}
	}
	{
		GameObject_t159 * L_4 = (__this->___splode_4);
		Transform_t160 * L_5 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t138  L_6 = Transform_get_position_m1160(L_5, /*hidden argument*/NULL);
		Quaternion_t154  L_7 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m1001(NULL /*static, unused*/, L_4, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = Random_Range_m1406(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)8)))
		{
			goto IL_0076;
		}
	}
	{
		GameObject_t159 * L_9 = (__this->___fire_5);
		Transform_t160 * L_10 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t138  L_11 = Transform_get_position_m1160(L_10, /*hidden argument*/NULL);
		Quaternion_t154  L_12 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t238 * L_13 = Object_Instantiate_m1001(NULL /*static, unused*/, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_13, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_14 = V_0;
		NullCheck(L_14);
		Transform_t160 * L_15 = GameObject_get_transform_m1189(L_14, /*hidden argument*/NULL);
		Collision2D_t317 * L_16 = ___col;
		NullCheck(L_16);
		Transform_t160 * L_17 = Collision2D_get_transform_m1422(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_parent_m1190(L_15, L_17, /*hidden argument*/NULL);
	}

IL_0076:
	{
		GameObject_t159 * L_18 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Collision2D_t317 * L_19 = ___col;
		NullCheck(L_19);
		Transform_t160 * L_20 = Collision2D_get_transform_m1422(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_t160 * L_21 = Transform_get_parent_m1423(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t160 * L_22 = Transform_GetChild_m1405(L_21, 0, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_t159 * L_23 = Component_get_gameObject_m959(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		Component_t112 * L_25 = GameObject_GetComponent_m1399(L_23, L_24, /*hidden argument*/NULL);
		ObjectU5BU5D_t111* L_26 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 1));
		int32_t L_27 = 1;
		Object_t * L_28 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, L_28);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 0, sizeof(Object_t *))) = (Object_t *)L_28;
		NullCheck(((PhotonView_t83 *)CastclassClass(L_25, PhotonView_t83_il2cpp_TypeInfo_var)));
		PhotonView_RPC_m596(((PhotonView_t83 *)CastclassClass(L_25, PhotonView_t83_il2cpp_TypeInfo_var)), _stringLiteral453, 0, L_26, /*hidden argument*/NULL);
		Collision2D_t317 * L_29 = ___col;
		NullCheck(L_29);
		Transform_t160 * L_30 = Collision2D_get_transform_m1422(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_t160 * L_31 = Transform_get_parent_m1423(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_t160 * L_32 = Transform_GetChild_m1405(L_31, 0, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_t159 * L_33 = Component_get_gameObject_m959(L_32, /*hidden argument*/NULL);
		Type_t * L_34 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(truckMove_t301_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_33);
		Component_t112 * L_35 = GameObject_GetComponent_m1399(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(((truckMove_t301 *)CastclassClass(L_35, truckMove_t301_il2cpp_TypeInfo_var)));
		int32_t L_36 = (((truckMove_t301 *)CastclassClass(L_35, truckMove_t301_il2cpp_TypeInfo_var))->___truckHealth_12);
		int32_t L_37 = L_36;
		Object_t * L_38 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_37);
		MonoBehaviour_print_m1424(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		return;
	}
}
// System.Void enemyProjectile::Main()
extern "C" void enemyProjectile_Main_m1307 (enemyProjectile_t295 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void externturret::.ctor()
extern "C" void externturret__ctor_m1308 (externturret_t296 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void externturret::Start()
extern "C" void externturret_Start_m1309 (externturret_t296 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void externturret::Update()
extern const Il2CppType* Rigidbody2D_t140_0_0_0_var;
extern TypeInfo* Vector3_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t249_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t140_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" void externturret_Update_m1310 (externturret_t296 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rigidbody2D_t140_0_0_0_var = il2cpp_codegen_type_from_index(129);
		Vector3_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Single_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		GameObject_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Rigidbody2D_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t138  V_0 = {0};
	Transform_t160 * V_1 = {0};
	float V_2 = 0.0f;
	GameObject_t159 * V_3 = {0};
	Vector3_t138  V_4 = {0};
	Vector3_t138  V_5 = {0};
	{
		Initobj (Vector3_t138_il2cpp_TypeInfo_var, (&V_0));
		V_1 = (Transform_t160 *)NULL;
		Initobj (Single_t249_il2cpp_TypeInfo_var, (&V_2));
		Camera_t165 * L_0 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		Vector3_t138  L_1 = Input_get_mousePosition_m1211(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t138  L_2 = Camera_ScreenToWorldPoint_m1426(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		(&V_0)->___z_3 = (5.23f);
		float L_3 = ((&V_0)->___x_1);
		Transform_t160 * L_4 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t138  L_5 = Transform_get_position_m1160(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		float L_6 = ((&V_4)->___x_1);
		(&V_0)->___x_1 = ((float)((float)L_3-(float)L_6));
		float L_7 = ((&V_0)->___y_2);
		Transform_t160 * L_8 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t138  L_9 = Transform_get_position_m1160(L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		float L_10 = ((&V_5)->___y_2);
		(&V_0)->___y_2 = ((float)((float)L_7-(float)L_10));
		float L_11 = ((&V_0)->___y_2);
		float L_12 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_13 = atan2f(L_11, L_12);
		V_2 = ((float)((float)L_13*(float)(57.29578f)));
		Transform_t160 * L_14 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Transform_t160 * L_15 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t154  L_16 = Transform_get_rotation_m1271(L_15, /*hidden argument*/NULL);
		float L_17 = V_2;
		Vector3_t138  L_18 = {0};
		Vector3__ctor_m1191(&L_18, (((float)((float)0))), (((float)((float)0))), L_17, /*hidden argument*/NULL);
		Quaternion_t154  L_19 = Quaternion_Euler_m1427(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Quaternion_t154  L_20 = Quaternion_RotateTowards_m1181(NULL /*static, unused*/, L_16, L_19, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m1193(L_14, L_20, /*hidden argument*/NULL);
		bool L_21 = Input_GetButtonDown_m1428(NULL /*static, unused*/, _stringLiteral460, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0165;
		}
	}
	{
		GameObject_t159 * L_22 = (__this->___Bullet_2);
		Transform_t160 * L_23 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t138  L_24 = Transform_get_position_m1160(L_23, /*hidden argument*/NULL);
		Transform_t160 * L_25 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t138  L_26 = Transform_get_forward_m1429(L_25, /*hidden argument*/NULL);
		Vector3_t138  L_27 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		Transform_t160 * L_28 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Quaternion_t154  L_29 = Transform_get_rotation_m1271(L_28, /*hidden argument*/NULL);
		Object_t238 * L_30 = Object_Instantiate_m1001(NULL /*static, unused*/, L_22, L_27, L_29, /*hidden argument*/NULL);
		V_3 = ((GameObject_t159 *)IsInstSealed(((GameObject_t159 *)CastclassSealed(L_30, GameObject_t159_il2cpp_TypeInfo_var)), GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_31);
		Component_t112 * L_33 = GameObject_GetComponent_m1399(L_31, L_32, /*hidden argument*/NULL);
		GameObject_t159 * L_34 = V_3;
		Type_t * L_35 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_34);
		Component_t112 * L_36 = GameObject_GetComponent_m1399(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_36, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Vector2_t162  L_37 = Rigidbody2D_get_velocity_m1124(((Rigidbody2D_t140 *)CastclassSealed(L_36, Rigidbody2D_t140_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Transform_t160 * L_38 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Quaternion_t154  L_39 = Transform_get_rotation_m1271(L_38, /*hidden argument*/NULL);
		Vector2_t162  L_40 = Vector2_get_right_m1416(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_41 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Vector3_t138  L_42 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_39, L_41, /*hidden argument*/NULL);
		Vector3_t138  L_43 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_42, (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		Vector2_t162  L_44 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		Vector2_t162  L_45 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_37, L_44, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_33, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Rigidbody2D_set_velocity_m1117(((Rigidbody2D_t140 *)CastclassSealed(L_33, Rigidbody2D_t140_il2cpp_TypeInfo_var)), L_45, /*hidden argument*/NULL);
	}

IL_0165:
	{
		return;
	}
}
// System.Void externturret::move()
extern "C" void externturret_move_m1311 (externturret_t296 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void externturret::Main()
extern "C" void externturret_Main_m1312 (externturret_t296 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void followCamera::.ctor()
extern "C" void followCamera__ctor_m1313 (followCamera_t297 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void followCamera::Start()
extern "C" void followCamera_Start_m1314 (followCamera_t297 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void followCamera::Update()
extern const Il2CppType* followCamera_t297_0_0_0_var;
extern TypeInfo* GameObject_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* followCamera_t297_il2cpp_TypeInfo_var;
extern "C" void followCamera_Update_m1315 (followCamera_t297 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		followCamera_t297_0_0_0_var = il2cpp_codegen_type_from_index(182);
		GameObject_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		followCamera_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	followCamera_t297 * V_1 = {0};
	Vector3_t138  V_2 = {0};
	Vector3_t138  V_3 = {0};
	Vector3_t138  V_4 = {0};
	Vector3_t138  V_5 = {0};
	Vector3_t138  V_6 = {0};
	Vector3_t138  V_7 = {0};
	Vector3_t138  V_8 = {0};
	Vector3_t138  V_9 = {0};
	{
		V_0 = (GameObject_t159 *)NULL;
		V_1 = (followCamera_t297 *)NULL;
		Camera_t165 * L_0 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t160 * L_1 = Component_get_transform_m1159(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t138  L_2 = Transform_get_position_m1160(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->___y_2);
		Transform_t160 * L_4 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t138  L_5 = Transform_get_position_m1160(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = ((&V_3)->___y_2);
		if ((((float)((float)((float)L_3-(float)L_6))) <= ((float)(((float)((float)5))))))
		{
			goto IL_00c1;
		}
	}
	{
		bool L_7 = (__this->___up_3);
		if (L_7)
		{
			goto IL_00c1;
		}
	}
	{
		__this->___up_3 = 1;
		GameObject_t159 * L_8 = (__this->___bkg_2);
		Transform_t160 * L_9 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t138  L_10 = Transform_get_position_m1160(L_9, /*hidden argument*/NULL);
		Vector3_t138  L_11 = Vector3_get_up_m1163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_12 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_11, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_13 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		Quaternion_t154  L_14 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t238 * L_15 = Object_Instantiate_m1001(NULL /*static, unused*/, L_8, L_13, L_14, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_15, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(followCamera_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		Component_t112 * L_18 = GameObject_GetComponent_m1399(L_16, L_17, /*hidden argument*/NULL);
		V_1 = ((followCamera_t297 *)CastclassClass(L_18, followCamera_t297_il2cpp_TypeInfo_var));
		followCamera_t297 * L_19 = V_1;
		NullCheck(L_19);
		L_19->___down_6 = 1;
		followCamera_t297 * L_20 = V_1;
		bool L_21 = (__this->___left_4);
		NullCheck(L_20);
		L_20->___left_4 = L_21;
		followCamera_t297 * L_22 = V_1;
		bool L_23 = (__this->___right_5);
		NullCheck(L_22);
		L_22->___right_5 = L_23;
		followCamera_t297 * L_24 = V_1;
		GameObject_t159 * L_25 = (__this->___bkg_2);
		NullCheck(L_24);
		L_24->___bkg_2 = L_25;
		goto IL_02fb;
	}

IL_00c1:
	{
		Camera_t165 * L_26 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_t160 * L_27 = Component_get_transform_m1159(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t138  L_28 = Transform_get_position_m1160(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29 = ((&V_4)->___y_2);
		Transform_t160 * L_30 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t138  L_31 = Transform_get_position_m1160(L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		float L_32 = ((&V_5)->___y_2);
		if ((((float)((float)((float)L_29-(float)L_32))) >= ((float)(((float)((float)((int32_t)-5)))))))
		{
			goto IL_0181;
		}
	}
	{
		bool L_33 = (__this->___down_6);
		if (L_33)
		{
			goto IL_0181;
		}
	}
	{
		__this->___down_6 = 1;
		GameObject_t159 * L_34 = (__this->___bkg_2);
		Transform_t160 * L_35 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t138  L_36 = Transform_get_position_m1160(L_35, /*hidden argument*/NULL);
		Vector3_t138  L_37 = Vector3_get_up_m1163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_38 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_37, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_39 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		Quaternion_t154  L_40 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t238 * L_41 = Object_Instantiate_m1001(NULL /*static, unused*/, L_34, L_39, L_40, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_41, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(followCamera_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		Component_t112 * L_44 = GameObject_GetComponent_m1399(L_42, L_43, /*hidden argument*/NULL);
		V_1 = ((followCamera_t297 *)CastclassClass(L_44, followCamera_t297_il2cpp_TypeInfo_var));
		followCamera_t297 * L_45 = V_1;
		NullCheck(L_45);
		L_45->___up_3 = 1;
		followCamera_t297 * L_46 = V_1;
		bool L_47 = (__this->___left_4);
		NullCheck(L_46);
		L_46->___left_4 = L_47;
		followCamera_t297 * L_48 = V_1;
		bool L_49 = (__this->___right_5);
		NullCheck(L_48);
		L_48->___right_5 = L_49;
		followCamera_t297 * L_50 = V_1;
		GameObject_t159 * L_51 = (__this->___bkg_2);
		NullCheck(L_50);
		L_50->___bkg_2 = L_51;
		goto IL_02fb;
	}

IL_0181:
	{
		Camera_t165 * L_52 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_t160 * L_53 = Component_get_transform_m1159(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t138  L_54 = Transform_get_position_m1160(L_53, /*hidden argument*/NULL);
		V_6 = L_54;
		float L_55 = ((&V_6)->___x_1);
		Transform_t160 * L_56 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t138  L_57 = Transform_get_position_m1160(L_56, /*hidden argument*/NULL);
		V_7 = L_57;
		float L_58 = ((&V_7)->___x_1);
		if ((((float)((float)((float)L_55-(float)L_58))) <= ((float)(((float)((float)5))))))
		{
			goto IL_0240;
		}
	}
	{
		bool L_59 = (__this->___right_5);
		if (L_59)
		{
			goto IL_0240;
		}
	}
	{
		__this->___right_5 = 1;
		GameObject_t159 * L_60 = (__this->___bkg_2);
		Transform_t160 * L_61 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t138  L_62 = Transform_get_position_m1160(L_61, /*hidden argument*/NULL);
		Vector3_t138  L_63 = Vector3_get_right_m1228(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_64 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_63, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_65 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_62, L_64, /*hidden argument*/NULL);
		Quaternion_t154  L_66 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t238 * L_67 = Object_Instantiate_m1001(NULL /*static, unused*/, L_60, L_65, L_66, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_67, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_68 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(followCamera_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		Component_t112 * L_70 = GameObject_GetComponent_m1399(L_68, L_69, /*hidden argument*/NULL);
		V_1 = ((followCamera_t297 *)CastclassClass(L_70, followCamera_t297_il2cpp_TypeInfo_var));
		followCamera_t297 * L_71 = V_1;
		NullCheck(L_71);
		L_71->___left_4 = 1;
		followCamera_t297 * L_72 = V_1;
		bool L_73 = (__this->___up_3);
		NullCheck(L_72);
		L_72->___up_3 = L_73;
		followCamera_t297 * L_74 = V_1;
		bool L_75 = (__this->___down_6);
		NullCheck(L_74);
		L_74->___down_6 = L_75;
		followCamera_t297 * L_76 = V_1;
		GameObject_t159 * L_77 = (__this->___bkg_2);
		NullCheck(L_76);
		L_76->___bkg_2 = L_77;
		goto IL_02fb;
	}

IL_0240:
	{
		Camera_t165 * L_78 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_t160 * L_79 = Component_get_transform_m1159(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Vector3_t138  L_80 = Transform_get_position_m1160(L_79, /*hidden argument*/NULL);
		V_8 = L_80;
		float L_81 = ((&V_8)->___x_1);
		Transform_t160 * L_82 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t138  L_83 = Transform_get_position_m1160(L_82, /*hidden argument*/NULL);
		V_9 = L_83;
		float L_84 = ((&V_9)->___x_1);
		if ((((float)((float)((float)L_81-(float)L_84))) >= ((float)(((float)((float)((int32_t)-5)))))))
		{
			goto IL_02fb;
		}
	}
	{
		bool L_85 = (__this->___left_4);
		if (L_85)
		{
			goto IL_02fb;
		}
	}
	{
		__this->___left_4 = 1;
		GameObject_t159 * L_86 = (__this->___bkg_2);
		Transform_t160 * L_87 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t138  L_88 = Transform_get_position_m1160(L_87, /*hidden argument*/NULL);
		Vector3_t138  L_89 = Vector3_get_right_m1228(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_90 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_89, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_91 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_88, L_90, /*hidden argument*/NULL);
		Quaternion_t154  L_92 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t238 * L_93 = Object_Instantiate_m1001(NULL /*static, unused*/, L_86, L_91, L_92, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)CastclassSealed(L_93, GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_94 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(followCamera_t297_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_94);
		Component_t112 * L_96 = GameObject_GetComponent_m1399(L_94, L_95, /*hidden argument*/NULL);
		V_1 = ((followCamera_t297 *)CastclassClass(L_96, followCamera_t297_il2cpp_TypeInfo_var));
		followCamera_t297 * L_97 = V_1;
		NullCheck(L_97);
		L_97->___right_5 = 1;
		followCamera_t297 * L_98 = V_1;
		bool L_99 = (__this->___up_3);
		NullCheck(L_98);
		L_98->___up_3 = L_99;
		followCamera_t297 * L_100 = V_1;
		bool L_101 = (__this->___down_6);
		NullCheck(L_100);
		L_100->___down_6 = L_101;
		followCamera_t297 * L_102 = V_1;
		GameObject_t159 * L_103 = (__this->___bkg_2);
		NullCheck(L_102);
		L_102->___bkg_2 = L_103;
	}

IL_02fb:
	{
		return;
	}
}
// System.Void followCamera::Main()
extern "C" void followCamera_Main_m1316 (followCamera_t297 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void netJs::.ctor()
extern "C" void netJs__ctor_m1317 (netJs_t298 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::Start()
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral461;
extern "C" void netJs_Start_m1318 (netJs_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_ConnectUsingSettings_m476(NULL /*static, unused*/, _stringLiteral461, /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::Update()
extern "C" void netJs_Update_m1319 (netJs_t298 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void netJs::OnGUI()
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern TypeInfo* PeerState_t29_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t256_il2cpp_TypeInfo_var;
extern "C" void netJs_OnGUI_m1320 (netJs_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		PeerState_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(68);
		GUILayoutOptionU5BU5D_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(114);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		int32_t L_0 = PhotonNetwork_get_connectionStateDetailed_m417(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(PeerState_t29_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		GUILayout_Label_m1047(NULL /*static, unused*/, L_3, ((GUILayoutOptionU5BU5D_t256*)SZArrayNew(GUILayoutOptionU5BU5D_t256_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::OnJoinedLobby()
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern "C" void netJs_OnJoinedLobby_m1321 (netJs_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_JoinRandomRoom_m493(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::OnJoinedRoom()
extern const Il2CppType* playerMovement_t308_0_0_0_var;
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* playerMovement_t308_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern "C" void netJs_OnJoinedRoom_m1322 (netJs_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		playerMovement_t308_0_0_0_var = il2cpp_codegen_type_from_index(183);
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		playerMovement_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(183);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	{
		Vector3_t138  L_0 = Vector3_get_zero_m994(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_1 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		GameObject_t159 * L_2 = PhotonNetwork_Instantiate_m510(NULL /*static, unused*/, _stringLiteral462, L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t159 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(playerMovement_t308_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Component_t112 * L_5 = GameObject_GetComponent_m1399(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(((playerMovement_t308 *)CastclassClass(L_5, playerMovement_t308_il2cpp_TypeInfo_var)));
		Behaviour_set_enabled_m1268(((playerMovement_t308 *)CastclassClass(L_5, playerMovement_t308_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::OnPhotonRandomJoinFailed()
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern "C" void netJs_OnPhotonRandomJoinFailed_m1323 (netJs_t298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_CreateRoom_m488(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void netJs::Main()
extern "C" void netJs_Main_m1324 (netJs_t298 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void syncPlayer::.ctor()
extern "C" void syncPlayer__ctor_m1325 (syncPlayer_t299 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void syncPlayer::Update()
extern "C" void syncPlayer_Update_m1326 (syncPlayer_t299 * __this, const MethodInfo* method)
{
	{
		PhotonView_t83 * L_0 = (__this->___pv_5);
		NullCheck(L_0);
		bool L_1 = PhotonView_get_isMine_m584(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		Transform_t160 * L_2 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Transform_t160 * L_3 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t138  L_4 = Transform_get_localPosition_m1119(L_3, /*hidden argument*/NULL);
		Vector3_t138  L_5 = (__this->___targetPos_3);
		Vector3_t138  L_6 = Vector3_Lerp_m1173(NULL /*static, unused*/, L_4, L_5, (0.1f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_m1112(L_2, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void syncPlayer::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Vector3_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t162_il2cpp_TypeInfo_var;
extern TypeInfo* Quaternion_t154_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t320_il2cpp_TypeInfo_var;
extern "C" void syncPlayer_OnPhotonSerializeView_m1327 (syncPlayer_t299 * __this, PhotonStream_t85 * ___stream, PhotonMessageInfo_t82 * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Vector3_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Vector2_t162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Quaternion_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		RuntimeServices_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B4_0 = {0};
	Transform_t160 * G_B4_1 = {0};
	Object_t * G_B3_0 = {0};
	Transform_t160 * G_B3_1 = {0};
	{
		PhotonStream_t85 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m348(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		PhotonStream_t85 * L_2 = ___stream;
		Transform_t160 * L_3 = (__this->___pa_4);
		NullCheck(L_3);
		String_t* L_4 = Object_get_name_m1002(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		PhotonStream_SendNext_m353(L_2, L_4, /*hidden argument*/NULL);
		PhotonStream_t85 * L_5 = ___stream;
		Transform_t160 * L_6 = (__this->___pa_4);
		NullCheck(L_6);
		Quaternion_t154  L_7 = Transform_get_rotation_m1271(L_6, /*hidden argument*/NULL);
		Quaternion_t154  L_8 = Quaternion_Inverse_m1431(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Transform_t160 * L_9 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t138  L_10 = Transform_get_position_m1160(L_9, /*hidden argument*/NULL);
		Transform_t160 * L_11 = (__this->___pa_4);
		NullCheck(L_11);
		Vector3_t138  L_12 = Transform_get_position_m1160(L_11, /*hidden argument*/NULL);
		Vector3_t138  L_13 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		Vector3_t138  L_14 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_8, L_13, /*hidden argument*/NULL);
		Vector3_t138  L_15 = L_14;
		Object_t * L_16 = Box(Vector3_t138_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_5);
		PhotonStream_SendNext_m353(L_5, L_16, /*hidden argument*/NULL);
		PhotonStream_t85 * L_17 = ___stream;
		Rigidbody2D_t140 * L_18 = (__this->___rb_2);
		NullCheck(L_18);
		Vector2_t162  L_19 = Rigidbody2D_get_velocity_m1124(L_18, /*hidden argument*/NULL);
		Vector2_t162  L_20 = L_19;
		Object_t * L_21 = Box(Vector2_t162_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		PhotonStream_SendNext_m353(L_17, L_21, /*hidden argument*/NULL);
		PhotonStream_t85 * L_22 = ___stream;
		Transform_t160 * L_23 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t160 * L_24 = Transform_GetChild_m1405(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t154  L_25 = Transform_get_rotation_m1271(L_24, /*hidden argument*/NULL);
		Quaternion_t154  L_26 = L_25;
		Object_t * L_27 = Box(Quaternion_t154_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_22);
		PhotonStream_SendNext_m353(L_22, L_27, /*hidden argument*/NULL);
		goto IL_011a;
	}

IL_008e:
	{
		Transform_t160 * L_28 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		PhotonStream_t85 * L_29 = ___stream;
		NullCheck(L_29);
		Object_t * L_30 = PhotonStream_ReceiveNext_m351(L_29, /*hidden argument*/NULL);
		Object_t * L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_28;
		if (((String_t*)IsInstSealed(L_31, String_t_il2cpp_TypeInfo_var)))
		{
			G_B4_0 = L_31;
			G_B4_1 = L_28;
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t320_il2cpp_TypeInfo_var);
		Object_t * L_33 = RuntimeServices_Coerce_m1432(NULL /*static, unused*/, G_B3_0, L_32, /*hidden argument*/NULL);
		G_B4_0 = L_33;
		G_B4_1 = G_B3_1;
	}

IL_00b4:
	{
		GameObject_t159 * L_34 = GameObject_Find_m1272(NULL /*static, unused*/, ((String_t*)CastclassSealed(G_B4_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_t160 * L_35 = GameObject_get_transform_m1189(L_34, /*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Transform_set_parent_m1190(G_B4_1, L_35, /*hidden argument*/NULL);
		PhotonStream_t85 * L_36 = ___stream;
		NullCheck(L_36);
		Object_t * L_37 = PhotonStream_ReceiveNext_m351(L_36, /*hidden argument*/NULL);
		__this->___targetPos_3 = (*(Vector3_t138 *)((Vector3_t138 *)UnBox (L_37, Vector3_t138_il2cpp_TypeInfo_var)));
		Rigidbody2D_t140 * L_38 = (__this->___rb_2);
		PhotonStream_t85 * L_39 = ___stream;
		NullCheck(L_39);
		Object_t * L_40 = PhotonStream_ReceiveNext_m351(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Rigidbody2D_set_velocity_m1117(L_38, (*(Vector2_t162 *)((Vector2_t162 *)UnBox (L_40, Vector2_t162_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
		Transform_t160 * L_41 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_t160 * L_42 = Transform_GetChild_m1405(L_41, 0, /*hidden argument*/NULL);
		PhotonStream_t85 * L_43 = ___stream;
		NullCheck(L_43);
		Object_t * L_44 = PhotonStream_ReceiveNext_m351(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_rotation_m1193(L_42, (*(Quaternion_t154 *)((Quaternion_t154 *)UnBox (L_44, Quaternion_t154_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
// System.Void syncPlayer::Main()
extern "C" void syncPlayer_Main_m1328 (syncPlayer_t299 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void truckSynchronize::.ctor()
extern "C" void truckSynchronize__ctor_m1329 (truckSynchronize_t300 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void truckSynchronize::OnPhotonSerializeView(PhotonStream,System.Object)
extern TypeInfo* Vector2_t162_il2cpp_TypeInfo_var;
extern TypeInfo* Vector3_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Quaternion_t154_il2cpp_TypeInfo_var;
extern "C" void truckSynchronize_OnPhotonSerializeView_m1330 (truckSynchronize_t300 * __this, PhotonStream_t85 * ___stream, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Vector3_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Quaternion_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Rigidbody2D_t140 * V_0 = {0};
	Transform_t160 * V_1 = {0};
	Rigidbody2D_t140 * V_2 = {0};
	Transform_t160 * V_3 = {0};
	int32_t V_4 = 0;
	Rigidbody2DU5BU5D_t302* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	TransformU5BU5D_t303* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Rigidbody2DU5BU5D_t302* V_11 = {0};
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	TransformU5BU5D_t303* V_14 = {0};
	int32_t V_15 = 0;
	{
		PhotonStream_t85 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m348(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		V_4 = 0;
		Rigidbody2DU5BU5D_t302* L_2 = (__this->___rbs_3);
		V_5 = L_2;
		Rigidbody2DU5BU5D_t302* L_3 = V_5;
		NullCheck(L_3);
		int32_t L_4 = Array_get_Length_m1433(L_3, /*hidden argument*/NULL);
		V_6 = L_4;
		goto IL_003f;
	}

IL_0024:
	{
		PhotonStream_t85 * L_5 = ___stream;
		Rigidbody2DU5BU5D_t302* L_6 = V_5;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(Rigidbody2D_t140 **)(Rigidbody2D_t140 **)SZArrayLdElema(L_6, L_8, sizeof(Rigidbody2D_t140 *))));
		Vector2_t162  L_9 = Rigidbody2D_get_velocity_m1124((*(Rigidbody2D_t140 **)(Rigidbody2D_t140 **)SZArrayLdElema(L_6, L_8, sizeof(Rigidbody2D_t140 *))), /*hidden argument*/NULL);
		Vector2_t162  L_10 = L_9;
		Object_t * L_11 = Box(Vector2_t162_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_5);
		PhotonStream_SendNext_m353(L_5, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_6;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		V_7 = 0;
		TransformU5BU5D_t303* L_15 = (__this->___transforms_4);
		V_8 = L_15;
		TransformU5BU5D_t303* L_16 = V_8;
		NullCheck(L_16);
		int32_t L_17 = Array_get_Length_m1433(L_16, /*hidden argument*/NULL);
		V_9 = L_17;
		goto IL_0091;
	}

IL_0061:
	{
		PhotonStream_t85 * L_18 = ___stream;
		TransformU5BU5D_t303* L_19 = V_8;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_19, L_21, sizeof(Transform_t160 *))));
		Vector3_t138  L_22 = Transform_get_position_m1160((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_19, L_21, sizeof(Transform_t160 *))), /*hidden argument*/NULL);
		Vector3_t138  L_23 = L_22;
		Object_t * L_24 = Box(Vector3_t138_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_18);
		PhotonStream_SendNext_m353(L_18, L_24, /*hidden argument*/NULL);
		PhotonStream_t85 * L_25 = ___stream;
		TransformU5BU5D_t303* L_26 = V_8;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		NullCheck((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_26, L_28, sizeof(Transform_t160 *))));
		Quaternion_t154  L_29 = Transform_get_rotation_m1271((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_26, L_28, sizeof(Transform_t160 *))), /*hidden argument*/NULL);
		Quaternion_t154  L_30 = L_29;
		Object_t * L_31 = Box(Quaternion_t154_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_25);
		PhotonStream_SendNext_m353(L_25, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = V_9;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_013d;
	}

IL_009f:
	{
		V_10 = 0;
		Rigidbody2DU5BU5D_t302* L_35 = (__this->___rbs_3);
		V_11 = L_35;
		Rigidbody2DU5BU5D_t302* L_36 = V_11;
		NullCheck(L_36);
		int32_t L_37 = Array_get_Length_m1433(L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		goto IL_00d8;
	}

IL_00b8:
	{
		Rigidbody2DU5BU5D_t302* L_38 = V_11;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		PhotonStream_t85 * L_41 = ___stream;
		NullCheck(L_41);
		Object_t * L_42 = PhotonStream_ReceiveNext_m351(L_41, /*hidden argument*/NULL);
		NullCheck((*(Rigidbody2D_t140 **)(Rigidbody2D_t140 **)SZArrayLdElema(L_38, L_40, sizeof(Rigidbody2D_t140 *))));
		Rigidbody2D_set_velocity_m1117((*(Rigidbody2D_t140 **)(Rigidbody2D_t140 **)SZArrayLdElema(L_38, L_40, sizeof(Rigidbody2D_t140 *))), (*(Vector2_t162 *)((Vector2_t162 *)UnBox (L_42, Vector2_t162_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
		int32_t L_43 = V_10;
		V_10 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_44 = V_10;
		int32_t L_45 = V_12;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00b8;
		}
	}
	{
		V_13 = 0;
		TransformU5BU5D_t303* L_46 = (__this->___transforms_4);
		V_14 = L_46;
		TransformU5BU5D_t303* L_47 = V_14;
		NullCheck(L_47);
		int32_t L_48 = Array_get_Length_m1433(L_47, /*hidden argument*/NULL);
		V_15 = L_48;
		goto IL_0134;
	}

IL_00fa:
	{
		TransformU5BU5D_t303* L_49 = V_14;
		int32_t L_50 = V_13;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		PhotonStream_t85 * L_52 = ___stream;
		NullCheck(L_52);
		Object_t * L_53 = PhotonStream_ReceiveNext_m351(L_52, /*hidden argument*/NULL);
		NullCheck((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_49, L_51, sizeof(Transform_t160 *))));
		Transform_set_position_m1192((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_49, L_51, sizeof(Transform_t160 *))), (*(Vector3_t138 *)((Vector3_t138 *)UnBox (L_53, Vector3_t138_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
		TransformU5BU5D_t303* L_54 = V_14;
		int32_t L_55 = V_13;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		int32_t L_56 = L_55;
		PhotonStream_t85 * L_57 = ___stream;
		NullCheck(L_57);
		Object_t * L_58 = PhotonStream_ReceiveNext_m351(L_57, /*hidden argument*/NULL);
		NullCheck((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_54, L_56, sizeof(Transform_t160 *))));
		Transform_set_rotation_m1193((*(Transform_t160 **)(Transform_t160 **)SZArrayLdElema(L_54, L_56, sizeof(Transform_t160 *))), (*(Quaternion_t154 *)((Quaternion_t154 *)UnBox (L_58, Quaternion_t154_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
		int32_t L_59 = V_13;
		V_13 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_0134:
	{
		int32_t L_60 = V_13;
		int32_t L_61 = V_15;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00fa;
		}
	}

IL_013d:
	{
		return;
	}
}
// System.Void truckSynchronize::Main()
extern "C" void truckSynchronize_Main_m1331 (truckSynchronize_t300 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencontrols::.ctor()
extern "C" void opencontrols__ctor_m1332 (opencontrols_t304 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void opencontrols::onClick()
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" void opencontrols_onClick_m1333 (opencontrols_t304 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral463, /*hidden argument*/NULL);
		return;
	}
}
// System.Void opencontrols::Start()
extern "C" void opencontrols_Start_m1334 (opencontrols_t304 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencontrols::Update()
extern "C" void opencontrols_Update_m1335 (opencontrols_t304 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencontrols::Main()
extern "C" void opencontrols_Main_m1336 (opencontrols_t304 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencredits::.ctor()
extern "C" void opencredits__ctor_m1337 (opencredits_t305 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void opencredits::onClick()
extern Il2CppCodeGenString* _stringLiteral464;
extern "C" void opencredits_onClick_m1338 (opencredits_t305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral464, /*hidden argument*/NULL);
		return;
	}
}
// System.Void opencredits::Start()
extern "C" void opencredits_Start_m1339 (opencredits_t305 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencredits::Update()
extern "C" void opencredits_Update_m1340 (opencredits_t305 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void opencredits::Main()
extern "C" void opencredits_Main_m1341 (opencredits_t305 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void openlevels::.ctor()
extern "C" void openlevels__ctor_m1342 (openlevels_t306 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void openlevels::onClick()
extern Il2CppCodeGenString* _stringLiteral465;
extern "C" void openlevels_onClick_m1343 (openlevels_t306 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral465, /*hidden argument*/NULL);
		return;
	}
}
// System.Void openlevels::Start()
extern "C" void openlevels_Start_m1344 (openlevels_t306 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void openlevels::Update()
extern "C" void openlevels_Update_m1345 (openlevels_t306 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void openlevels::Main()
extern "C" void openlevels_Main_m1346 (openlevels_t306 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void playerFriction::.ctor()
extern "C" void playerFriction__ctor_m1347 (playerFriction_t307 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void playerFriction::Start()
extern "C" void playerFriction_Start_m1348 (playerFriction_t307 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void playerFriction::Update()
extern "C" void playerFriction_Update_m1349 (playerFriction_t307 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void playerFriction::OnTriggerStay2D(UnityEngine.Collider2D)
extern const Il2CppType* syncPlayer_t299_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* syncPlayer_t299_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern "C" void playerFriction_OnTriggerStay2D_m1350 (playerFriction_t307 * __this, Collider2D_t316 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		syncPlayer_t299_0_0_0_var = il2cpp_codegen_type_from_index(185);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		syncPlayer_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t316 * L_0 = ___col;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m1417(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m881(NULL /*static, unused*/, L_1, _stringLiteral462, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Collider2D_t316 * L_3 = ___col;
		NullCheck(L_3);
		Rigidbody2D_t140 * L_4 = Collider2D_get_attachedRigidbody_m1434(L_3, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_5 = (__this->___rigidBody_2);
		Collider2D_t316 * L_6 = ___col;
		NullCheck(L_6);
		Transform_t160 * L_7 = Component_get_transform_m1159(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t138  L_8 = Transform_get_position_m1160(L_7, /*hidden argument*/NULL);
		Vector2_t162  L_9 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector2_t162  L_10 = Rigidbody2D_GetPointVelocity_m1435(L_5, L_9, /*hidden argument*/NULL);
		Collider2D_t316 * L_11 = ___col;
		NullCheck(L_11);
		Rigidbody2D_t140 * L_12 = Collider2D_get_attachedRigidbody_m1434(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector2_t162  L_13 = Rigidbody2D_get_velocity_m1124(L_12, /*hidden argument*/NULL);
		Vector2_t162  L_14 = Vector2_op_Subtraction_m921(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		Vector2_t162  L_15 = Vector2_op_Multiply_m1230(NULL /*static, unused*/, L_14, (0.0005f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody2D_AddForce_m1231(L_4, L_15, /*hidden argument*/NULL);
		Collider2D_t316 * L_16 = ___col;
		NullCheck(L_16);
		Transform_t160 * L_17 = Component_get_transform_m1159(L_16, /*hidden argument*/NULL);
		Transform_t160 * L_18 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t154  L_19 = Transform_get_rotation_m1271(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_rotation_m1193(L_17, L_19, /*hidden argument*/NULL);
		Collider2D_t316 * L_20 = ___col;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(syncPlayer_t299_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		Component_t112 * L_22 = Component_GetComponent_m1407(L_20, L_21, /*hidden argument*/NULL);
		Transform_t160 * L_23 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(((syncPlayer_t299 *)CastclassClass(L_22, syncPlayer_t299_il2cpp_TypeInfo_var)));
		((syncPlayer_t299 *)CastclassClass(L_22, syncPlayer_t299_il2cpp_TypeInfo_var))->___pa_4 = L_23;
	}

IL_008b:
	{
		return;
	}
}
// System.Void playerFriction::Main()
extern "C" void playerFriction_Main_m1351 (playerFriction_t307 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void playerMovement::.ctor()
extern "C" void playerMovement__ctor_m1352 (playerMovement_t308 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		__this->___station_15 = (-1);
		return;
	}
}
// System.Void playerMovement::Start()
extern const Il2CppType* SpriteRenderer_t281_0_0_0_var;
extern const Il2CppType* PhotonView_t83_0_0_0_var;
extern const Il2CppType* Collider2D_t316_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpriteRenderer_t281_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonView_t83_il2cpp_TypeInfo_var;
extern TypeInfo* Collider2D_t316_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t140_m1157_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral466;
extern Il2CppCodeGenString* _stringLiteral467;
extern Il2CppCodeGenString* _stringLiteral468;
extern "C" void playerMovement_Start_m1353 (playerMovement_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpriteRenderer_t281_0_0_0_var = il2cpp_codegen_type_from_index(165);
		PhotonView_t83_0_0_0_var = il2cpp_codegen_type_from_index(34);
		Collider2D_t316_0_0_0_var = il2cpp_codegen_type_from_index(178);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		SpriteRenderer_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		PhotonView_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		Collider2D_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Component_GetComponent_TisRigidbody2D_t140_m1157_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		_stringLiteral467 = il2cpp_codegen_string_literal_from_index(467);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_set_tag_m1436(__this, _stringLiteral462, /*hidden argument*/NULL);
		GameObject_t159 * L_0 = (__this->___sprite_22);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t281_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_t112 * L_2 = GameObject_GetComponent_m1399(L_0, L_1, /*hidden argument*/NULL);
		Sprite_t310 * L_3 = (__this->___me_21);
		NullCheck(((SpriteRenderer_t281 *)CastclassSealed(L_2, SpriteRenderer_t281_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_sprite_m1437(((SpriteRenderer_t281 *)CastclassSealed(L_2, SpriteRenderer_t281_il2cpp_TypeInfo_var)), L_3, /*hidden argument*/NULL);
		Camera_t165 * L_4 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t160 * L_5 = Component_get_transform_m1159(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t160 * L_6 = Transform_GetChild_m1405(L_5, 0, /*hidden argument*/NULL);
		__this->___pad_12 = L_6;
		Camera_t165 * L_7 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t160 * L_8 = Component_get_transform_m1159(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t160 * L_9 = Transform_GetChild_m1405(L_8, 1, /*hidden argument*/NULL);
		__this->___knob_11 = L_9;
		Camera_t165 * L_10 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t160 * L_11 = Component_get_transform_m1159(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t160 * L_12 = Transform_GetChild_m1405(L_11, 2, /*hidden argument*/NULL);
		__this->___greenBttn_13 = L_12;
		Camera_t165 * L_13 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_t160 * L_14 = Component_get_transform_m1159(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t160 * L_15 = Transform_GetChild_m1405(L_14, 3, /*hidden argument*/NULL);
		__this->___redBttn_14 = L_15;
		GameObject_t159 * L_16 = GameObject_FindGameObjectWithTag_m1404(NULL /*static, unused*/, _stringLiteral452, /*hidden argument*/NULL);
		__this->___truck_2 = L_16;
		GameObject_t159 * L_17 = (__this->___truck_2);
		NullCheck(L_17);
		Transform_t160 * L_18 = GameObject_get_transform_m1189(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t160 * L_19 = Transform_GetChild_m1405(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody2D_t140 * L_20 = Component_GetComponent_TisRigidbody2D_t140_m1157(L_19, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t140_m1157_MethodInfo_var);
		__this->___cabin_7 = L_20;
		GameObject_t159 * L_21 = (__this->___truck_2);
		NullCheck(L_21);
		Transform_t160 * L_22 = GameObject_get_transform_m1189(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t160 * L_23 = Transform_GetChild_m1405(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_23);
		Rigidbody2D_t140 * L_24 = Component_GetComponent_TisRigidbody2D_t140_m1157(L_23, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t140_m1157_MethodInfo_var);
		__this->___left_5 = L_24;
		GameObject_t159 * L_25 = (__this->___truck_2);
		NullCheck(L_25);
		Transform_t160 * L_26 = GameObject_get_transform_m1189(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_t160 * L_27 = Transform_GetChild_m1405(L_26, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		Rigidbody2D_t140 * L_28 = Component_GetComponent_TisRigidbody2D_t140_m1157(L_27, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t140_m1157_MethodInfo_var);
		__this->___right_6 = L_28;
		Rigidbody2D_t140 * L_29 = (__this->___cabin_7);
		Type_t * L_30 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		Component_t112 * L_31 = Component_GetComponent_m1407(L_29, L_30, /*hidden argument*/NULL);
		__this->___engine_4 = ((PhotonView_t83 *)CastclassClass(L_31, PhotonView_t83_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_32 = (__this->___stations_8);
		Rigidbody2D_t140 * L_33 = (__this->___cabin_7);
		NullCheck(L_33);
		Transform_t160 * L_34 = Component_get_transform_m1159(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_t160 * L_35 = Transform_GetChild_m1405(L_34, 0, /*hidden argument*/NULL);
		Type_t * L_36 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_35);
		Component_t112 * L_37 = Component_GetComponent_m1407(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, ((Collider2D_t316 *)CastclassClass(L_37, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_32, 0, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_37, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_38 = (__this->___stations_8);
		Rigidbody2D_t140 * L_39 = (__this->___cabin_7);
		NullCheck(L_39);
		Transform_t160 * L_40 = Component_get_transform_m1159(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_t160 * L_41 = Transform_GetChild_m1405(L_40, 1, /*hidden argument*/NULL);
		Type_t * L_42 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_41);
		Component_t112 * L_43 = Component_GetComponent_m1407(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, ((Collider2D_t316 *)CastclassClass(L_43, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_38, 1, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_43, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_44 = (__this->___stations_8);
		Rigidbody2D_t140 * L_45 = (__this->___right_6);
		NullCheck(L_45);
		Transform_t160 * L_46 = Component_get_transform_m1159(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_t160 * L_47 = Transform_GetChild_m1405(L_46, 0, /*hidden argument*/NULL);
		Type_t * L_48 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_47);
		Component_t112 * L_49 = Component_GetComponent_m1407(L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 2);
		ArrayElementTypeCheck (L_44, ((Collider2D_t316 *)CastclassClass(L_49, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_44, 2, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_49, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_50 = (__this->___stations_8);
		Rigidbody2D_t140 * L_51 = (__this->___left_5);
		NullCheck(L_51);
		Transform_t160 * L_52 = Component_get_transform_m1159(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_t160 * L_53 = Transform_GetChild_m1405(L_52, 0, /*hidden argument*/NULL);
		Type_t * L_54 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_53);
		Component_t112 * L_55 = Component_GetComponent_m1407(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 3);
		ArrayElementTypeCheck (L_50, ((Collider2D_t316 *)CastclassClass(L_55, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_50, 3, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_55, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_56 = (__this->___stations_8);
		Rigidbody2D_t140 * L_57 = (__this->___right_6);
		NullCheck(L_57);
		Transform_t160 * L_58 = Component_get_transform_m1159(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_t160 * L_59 = Transform_GetChild_m1405(L_58, 1, /*hidden argument*/NULL);
		Type_t * L_60 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_59);
		Component_t112 * L_61 = Component_GetComponent_m1407(L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 4);
		ArrayElementTypeCheck (L_56, ((Collider2D_t316 *)CastclassClass(L_61, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_56, 4, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_61, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_62 = (__this->___stations_8);
		Rigidbody2D_t140 * L_63 = (__this->___left_5);
		NullCheck(L_63);
		Transform_t160 * L_64 = Component_get_transform_m1159(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_t160 * L_65 = Transform_GetChild_m1405(L_64, 1, /*hidden argument*/NULL);
		Type_t * L_66 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_65);
		Component_t112 * L_67 = Component_GetComponent_m1407(L_65, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 5);
		ArrayElementTypeCheck (L_62, ((Collider2D_t316 *)CastclassClass(L_67, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_62, 5, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_67, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_68 = (__this->___overlaps_9);
		GameObject_t159 * L_69 = (__this->___truck_2);
		NullCheck(L_69);
		Transform_t160 * L_70 = GameObject_get_transform_m1189(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_t160 * L_71 = Transform_GetChild_m1405(L_70, 0, /*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_t160 * L_72 = Component_get_transform_m1159(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Transform_t160 * L_73 = Transform_FindChild_m1438(L_72, _stringLiteral466, /*hidden argument*/NULL);
		Type_t * L_74 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_73);
		Component_t112 * L_75 = Component_GetComponent_m1407(L_73, L_74, /*hidden argument*/NULL);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 0);
		ArrayElementTypeCheck (L_68, ((Collider2D_t316 *)CastclassClass(L_75, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_68, 0, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_75, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_76 = (__this->___overlaps_9);
		GameObject_t159 * L_77 = (__this->___truck_2);
		NullCheck(L_77);
		Transform_t160 * L_78 = GameObject_get_transform_m1189(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_t160 * L_79 = Transform_GetChild_m1405(L_78, 1, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_t160 * L_80 = Component_get_transform_m1159(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_t160 * L_81 = Transform_FindChild_m1438(L_80, _stringLiteral467, /*hidden argument*/NULL);
		Type_t * L_82 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_81);
		Component_t112 * L_83 = Component_GetComponent_m1407(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 1);
		ArrayElementTypeCheck (L_76, ((Collider2D_t316 *)CastclassClass(L_83, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_76, 1, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_83, Collider2D_t316_il2cpp_TypeInfo_var));
		Collider2DU5BU5D_t309* L_84 = (__this->___overlaps_9);
		GameObject_t159 * L_85 = (__this->___truck_2);
		NullCheck(L_85);
		Transform_t160 * L_86 = GameObject_get_transform_m1189(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_t160 * L_87 = Transform_GetChild_m1405(L_86, 2, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_t160 * L_88 = Component_get_transform_m1159(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_t160 * L_89 = Transform_FindChild_m1438(L_88, _stringLiteral468, /*hidden argument*/NULL);
		Type_t * L_90 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Collider2D_t316_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_89);
		Component_t112 * L_91 = Component_GetComponent_m1407(L_89, L_90, /*hidden argument*/NULL);
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 2);
		ArrayElementTypeCheck (L_84, ((Collider2D_t316 *)CastclassClass(L_91, Collider2D_t316_il2cpp_TypeInfo_var)));
		*((Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_84, 2, sizeof(Collider2D_t316 *))) = (Collider2D_t316 *)((Collider2D_t316 *)CastclassClass(L_91, Collider2D_t316_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void playerMovement::Update()
extern const Il2CppType* turretMove_t315_0_0_0_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Vector2_t162_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t215_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* turretMove_t315_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral469;
extern "C" void playerMovement_Update_m1354 (playerMovement_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		turretMove_t315_0_0_0_var = il2cpp_codegen_type_from_index(186);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Vector2_t162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Boolean_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		turretMove_t315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		_stringLiteral469 = il2cpp_codegen_string_literal_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t162  V_0 = {0};
	{
		Rigidbody2D_t140 * L_0 = (__this->___rigidBody_3);
		Collider2DU5BU5D_t309* L_1 = (__this->___overlaps_9);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		NullCheck(L_0);
		bool L_3 = Rigidbody2D_IsTouching_m1439(L_0, (*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_1, L_2, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0065;
		}
	}
	{
		Rigidbody2D_t140 * L_4 = (__this->___rigidBody_3);
		Collider2DU5BU5D_t309* L_5 = (__this->___overlaps_9);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		NullCheck(L_4);
		bool L_7 = Rigidbody2D_IsTouching_m1439(L_4, (*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_5, L_6, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0065;
		}
	}
	{
		Rigidbody2D_t140 * L_8 = (__this->___rigidBody_3);
		Collider2DU5BU5D_t309* L_9 = (__this->___overlaps_9);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		int32_t L_10 = 2;
		NullCheck(L_8);
		bool L_11 = Rigidbody2D_IsTouching_m1439(L_8, (*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_9, L_10, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		Transform_t160 * L_12 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Collider2DU5BU5D_t309* L_13 = (__this->___stations_8);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		int32_t L_14 = 0;
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_13, L_14, sizeof(Collider2D_t316 *))));
		Transform_t160 * L_15 = Component_get_transform_m1159((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_13, L_14, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t138  L_16 = Transform_get_position_m1160(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_m1192(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0065:
	{
		Vector2_t162  L_17 = (Vector2_t162 )VirtFuncInvoker0< Vector2_t162  >::Invoke(8 /* UnityEngine.Vector2 playerMovement::getMovement() */, __this);
		V_0 = L_17;
		VirtActionInvoker0::Invoke(6 /* System.Void playerMovement::enterStation() */, __this);
		VirtActionInvoker0::Invoke(9 /* System.Void playerMovement::moveCamera() */, __this);
		int32_t L_18 = (__this->___station_15);
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0090;
		}
	}
	{
		Vector2_t162  L_19 = V_0;
		VirtActionInvoker1< Vector2_t162  >::Invoke(10 /* System.Void playerMovement::playerMove(UnityEngine.Vector2) */, __this, L_19);
		goto IL_012e;
	}

IL_0090:
	{
		Transform_t160 * L_20 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Collider2DU5BU5D_t309* L_21 = (__this->___stations_8);
		int32_t L_22 = (__this->___station_15);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_21, L_23, sizeof(Collider2D_t316 *))));
		Transform_t160 * L_24 = Component_get_transform_m1159((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_21, L_23, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t138  L_25 = Transform_get_position_m1160(L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m1192(L_20, L_25, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___station_15);
		if (L_26)
		{
			goto IL_00f0;
		}
	}
	{
		PhotonView_t83 * L_27 = (__this->___engine_4);
		ObjectU5BU5D_t111* L_28 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 2));
		Vector2_t162  L_29 = V_0;
		Vector2_t162  L_30 = L_29;
		Object_t * L_31 = Box(Vector2_t162_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 0, sizeof(Object_t *))) = (Object_t *)L_31;
		ObjectU5BU5D_t111* L_32 = L_28;
		bool L_33 = (__this->___green_20);
		bool L_34 = L_33;
		Object_t * L_35 = Box(Boolean_t215_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1, sizeof(Object_t *))) = (Object_t *)L_35;
		NullCheck(L_27);
		PhotonView_RPC_m596(L_27, _stringLiteral469, 0, L_32, /*hidden argument*/NULL);
		goto IL_012e;
	}

IL_00f0:
	{
		int32_t L_36 = (__this->___station_15);
		if ((((int32_t)L_36) <= ((int32_t)1)))
		{
			goto IL_012e;
		}
	}
	{
		Collider2DU5BU5D_t309* L_37 = (__this->___stations_8);
		int32_t L_38 = (__this->___station_15);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(turretMove_t315_0_0_0_var), /*hidden argument*/NULL);
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_37, L_39, sizeof(Collider2D_t316 *))));
		Component_t112 * L_41 = Component_GetComponent_m1407((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_37, L_39, sizeof(Collider2D_t316 *))), L_40, /*hidden argument*/NULL);
		Vector2_t162  L_42 = V_0;
		bool L_43 = (__this->___green_20);
		bool L_44 = L_43;
		Object_t * L_45 = Box(Boolean_t215_il2cpp_TypeInfo_var, &L_44);
		NullCheck(((turretMove_t315 *)CastclassClass(L_41, turretMove_t315_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< Vector2_t162 , Object_t * >::Invoke(6 /* System.Void turretMove::move(UnityEngine.Vector2,System.Object) */, ((turretMove_t315 *)CastclassClass(L_41, turretMove_t315_il2cpp_TypeInfo_var)), L_42, L_45);
	}

IL_012e:
	{
		return;
	}
}
// System.Void playerMovement::enterStation()
extern const Il2CppType* truckMove_t301_0_0_0_var;
extern const Il2CppType* turretMove_t315_0_0_0_var;
extern const Il2CppType* PhotonView_t83_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* truckMove_t301_il2cpp_TypeInfo_var;
extern TypeInfo* turretMove_t315_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonView_t83_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern Il2CppCodeGenString* _stringLiteral471;
extern "C" void playerMovement_enterStation_m1355 (playerMovement_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		truckMove_t301_0_0_0_var = il2cpp_codegen_type_from_index(180);
		turretMove_t315_0_0_0_var = il2cpp_codegen_type_from_index(186);
		PhotonView_t83_0_0_0_var = il2cpp_codegen_type_from_index(34);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		truckMove_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		turretMove_t315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		PhotonView_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___green_20);
		if (!L_0)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_1 = (__this->___station_15);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0120;
		}
	}
	{
		V_0 = 0;
		goto IL_010f;
	}

IL_001e:
	{
		Rigidbody2D_t140 * L_2 = (__this->___rigidBody_3);
		Collider2DU5BU5D_t309* L_3 = (__this->___stations_8);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		bool L_6 = Rigidbody2D_IsTouching_m1439(L_2, (*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_3, L_5, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0070;
		}
	}
	{
		GameObject_t159 * L_8 = (__this->___truck_2);
		NullCheck(L_8);
		Transform_t160 * L_9 = GameObject_get_transform_m1189(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t160 * L_10 = Transform_GetChild_m1405(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_t159 * L_11 = Component_get_gameObject_m959(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(truckMove_t301_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		Component_t112 * L_13 = GameObject_GetComponent_m1399(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(((truckMove_t301 *)CastclassClass(L_13, truckMove_t301_il2cpp_TypeInfo_var)));
		bool L_14 = (((truckMove_t301 *)CastclassClass(L_13, truckMove_t301_il2cpp_TypeInfo_var))->___isOccupied_16);
		if (!L_14)
		{
			goto IL_00a9;
		}
	}

IL_0070:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		Collider2DU5BU5D_t309* L_16 = (__this->___stations_8);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_16, L_18, sizeof(Collider2D_t316 *))));
		GameObject_t159 * L_19 = Component_get_gameObject_m959((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_16, L_18, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(turretMove_t315_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		Component_t112 * L_21 = GameObject_GetComponent_m1399(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(((turretMove_t315 *)CastclassClass(L_21, turretMove_t315_il2cpp_TypeInfo_var)));
		bool L_22 = (((turretMove_t315 *)CastclassClass(L_21, turretMove_t315_il2cpp_TypeInfo_var))->___isOccupied_10);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}

IL_00a2:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00b0;
		}
	}

IL_00a9:
	{
		int32_t L_24 = V_0;
		__this->___station_15 = L_24;
	}

IL_00b0:
	{
		int32_t L_25 = V_0;
		if (L_25)
		{
			goto IL_00d2;
		}
	}
	{
		PhotonView_t83 * L_26 = (__this->___engine_4);
		NullCheck(L_26);
		PhotonView_RPC_m596(L_26, _stringLiteral470, 0, ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		goto IL_010b;
	}

IL_00d2:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)1)))
		{
			goto IL_010b;
		}
	}
	{
		Collider2DU5BU5D_t309* L_28 = (__this->___stations_8);
		int32_t L_29 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		int32_t L_30 = L_29;
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_28, L_30, sizeof(Collider2D_t316 *))));
		GameObject_t159 * L_31 = Component_get_gameObject_m959((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_28, L_30, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_31);
		Component_t112 * L_33 = GameObject_GetComponent_m1399(L_31, L_32, /*hidden argument*/NULL);
		NullCheck(((PhotonView_t83 *)CastclassClass(L_33, PhotonView_t83_il2cpp_TypeInfo_var)));
		PhotonView_RPC_m596(((PhotonView_t83 *)CastclassClass(L_33, PhotonView_t83_il2cpp_TypeInfo_var)), _stringLiteral470, 0, ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_010b:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_010f:
	{
		int32_t L_35 = V_0;
		Collider2DU5BU5D_t309* L_36 = (__this->___stations_8);
		int32_t L_37 = Extensions_get_length_m1440(NULL /*static, unused*/, (Array_t *)(Array_t *)L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_001e;
		}
	}

IL_0120:
	{
		bool L_38 = (__this->___red_19);
		if (!L_38)
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_39 = (__this->___station_15);
		if ((((int32_t)L_39) <= ((int32_t)1)))
		{
			goto IL_0173;
		}
	}
	{
		Collider2DU5BU5D_t309* L_40 = (__this->___stations_8);
		int32_t L_41 = (__this->___station_15);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		NullCheck((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_40, L_42, sizeof(Collider2D_t316 *))));
		GameObject_t159 * L_43 = Component_get_gameObject_m959((*(Collider2D_t316 **)(Collider2D_t316 **)SZArrayLdElema(L_40, L_42, sizeof(Collider2D_t316 *))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_43);
		Component_t112 * L_45 = GameObject_GetComponent_m1399(L_43, L_44, /*hidden argument*/NULL);
		NullCheck(((PhotonView_t83 *)CastclassClass(L_45, PhotonView_t83_il2cpp_TypeInfo_var)));
		PhotonView_RPC_m596(((PhotonView_t83 *)CastclassClass(L_45, PhotonView_t83_il2cpp_TypeInfo_var)), _stringLiteral471, 0, ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		goto IL_0195;
	}

IL_0173:
	{
		int32_t L_46 = (__this->___station_15);
		if (L_46)
		{
			goto IL_0195;
		}
	}
	{
		PhotonView_t83 * L_47 = (__this->___engine_4);
		NullCheck(L_47);
		PhotonView_RPC_m596(L_47, _stringLiteral471, 0, ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0195:
	{
		__this->___station_15 = (-1);
	}

IL_019c:
	{
		return;
	}
}
// System.Void playerMovement::redAndGreen(System.Int32)
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern "C" void playerMovement_redAndGreen_m1356 (playerMovement_t308 * __this, int32_t ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t162  V_0 = {0};
	Vector2_t162  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_0 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___t;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		Vector2_t162  L_2 = Touch_get_position_m1215(((Touch_t278 *)(Touch_t278 *)SZArrayLdElema(L_0, L_1, sizeof(Touch_t278 ))), /*hidden argument*/NULL);
		Camera_t165 * L_3 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t160 * L_4 = (__this->___greenBttn_13);
		NullCheck(L_4);
		Vector3_t138  L_5 = Transform_get_position_m1160(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t138  L_6 = Camera_WorldToScreenPoint_m1442(L_3, L_5, /*hidden argument*/NULL);
		Vector2_t162  L_7 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Vector2_t162  L_8 = Vector2_op_Subtraction_m921(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = Vector2_get_magnitude_m1400((&V_0), /*hidden argument*/NULL);
		if ((((float)L_9) >= ((float)(((float)((float)((int32_t)30)))))))
		{
			goto IL_0046;
		}
	}
	{
		__this->___green_20 = 1;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_10 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = ___t;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		Vector2_t162  L_12 = Touch_get_position_m1215(((Touch_t278 *)(Touch_t278 *)SZArrayLdElema(L_10, L_11, sizeof(Touch_t278 ))), /*hidden argument*/NULL);
		Camera_t165 * L_13 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t160 * L_14 = (__this->___redBttn_14);
		NullCheck(L_14);
		Vector3_t138  L_15 = Transform_get_position_m1160(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t138  L_16 = Camera_WorldToScreenPoint_m1442(L_13, L_15, /*hidden argument*/NULL);
		Vector2_t162  L_17 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector2_t162  L_18 = Vector2_op_Subtraction_m921(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19 = Vector2_get_magnitude_m1400((&V_1), /*hidden argument*/NULL);
		if ((((float)L_19) >= ((float)(((float)((float)((int32_t)30)))))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___red_19 = 1;
	}

IL_008c:
	{
		return;
	}
}
// UnityEngine.Vector2 playerMovement::getMovement()
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern "C" Vector2_t162  playerMovement_getMovement_m1357 (playerMovement_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t162  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector2_t162  L_0 = Vector2_get_zero_m1194(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___isInTouch_16);
		__this->___wasInTouch_17 = L_1;
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)101), /*hidden argument*/NULL);
		__this->___green_20 = L_2;
		bool L_3 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		__this->___red_19 = L_3;
		V_2 = 0;
		goto IL_008d;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_4 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		Vector2_t162  L_6 = Touch_get_position_m1215(((Touch_t278 *)(Touch_t278 *)SZArrayLdElema(L_4, L_5, sizeof(Touch_t278 ))), /*hidden argument*/NULL);
		Camera_t165 * L_7 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t160 * L_8 = (__this->___pad_12);
		NullCheck(L_8);
		Vector3_t138  L_9 = Transform_get_position_m1160(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t138  L_10 = Camera_WorldToScreenPoint_m1442(L_7, L_9, /*hidden argument*/NULL);
		Vector2_t162  L_11 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Vector2_t162  L_12 = Vector2_op_Subtraction_m921(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		Vector2_t162  L_13 = Vector2_op_Division_m1443(NULL /*static, unused*/, L_12, (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		V_0 = L_13;
		float L_14 = Vector2_get_magnitude_m1400((&V_0), /*hidden argument*/NULL);
		if ((((float)L_14) >= ((float)(((float)((float)5))))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_15 = V_2;
		V_1 = L_15;
		goto IL_0089;
	}

IL_0082:
	{
		int32_t L_16 = V_2;
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void playerMovement::redAndGreen(System.Int32) */, __this, L_16);
	}

IL_0089:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_008d:
	{
		int32_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_19 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_20 = Extensions_get_length_m1440(NULL /*static, unused*/, (Array_t *)(Array_t *)L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_22 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Vector2_t162  L_24 = Touch_get_position_m1215(((Touch_t278 *)(Touch_t278 *)SZArrayLdElema(L_22, L_23, sizeof(Touch_t278 ))), /*hidden argument*/NULL);
		Camera_t165 * L_25 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t160 * L_26 = (__this->___pad_12);
		NullCheck(L_26);
		Vector3_t138  L_27 = Transform_get_position_m1160(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t138  L_28 = Camera_WorldToScreenPoint_m1442(L_25, L_27, /*hidden argument*/NULL);
		Vector2_t162  L_29 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		Vector2_t162  L_30 = Vector2_op_Subtraction_m921(NULL /*static, unused*/, L_24, L_29, /*hidden argument*/NULL);
		Vector2_t162  L_31 = Vector2_op_Division_m1443(NULL /*static, unused*/, L_30, (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		V_0 = L_31;
		goto IL_00e7;
	}

IL_00e1:
	{
		Vector2_t162  L_32 = Vector2_get_zero_m1194(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_00e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_33 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ff;
		}
	}
	{
		Vector2_t162  L_34 = V_0;
		Vector2_t162  L_35 = Vector2_get_up_m1229(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t162  L_36 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_00ff:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_37 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0117;
		}
	}
	{
		Vector2_t162  L_38 = V_0;
		Vector2_t162  L_39 = Vector2_get_left_m1444(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t162  L_40 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_0117:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_41 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_012f;
		}
	}
	{
		Vector2_t162  L_42 = V_0;
		Vector2_t162  L_43 = Vector2_get_down_m1445(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t162  L_44 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_45 = Input_GetKey_m1093(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0147;
		}
	}
	{
		Vector2_t162  L_46 = V_0;
		Vector2_t162  L_47 = Vector2_get_right_m1416(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t162  L_48 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
	}

IL_0147:
	{
		float L_49 = Vector2_get_magnitude_m1400((&V_0), /*hidden argument*/NULL);
		if ((((float)L_49) <= ((float)(((float)((float)1))))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t162  L_50 = Vector2_get_normalized_m1446((&V_0), /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_015d:
	{
		Transform_t160 * L_51 = (__this->___knob_11);
		Transform_t160 * L_52 = (__this->___pad_12);
		NullCheck(L_52);
		Vector3_t138  L_53 = Transform_get_position_m1160(L_52, /*hidden argument*/NULL);
		Transform_t160 * L_54 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Quaternion_t154  L_55 = Transform_get_rotation_m1271(L_54, /*hidden argument*/NULL);
		Vector2_t162  L_56 = V_0;
		Vector3_t138  L_57 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		Vector3_t138  L_58 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_55, L_57, /*hidden argument*/NULL);
		Vector3_t138  L_59 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_53, L_58, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_m1192(L_51, L_59, /*hidden argument*/NULL);
		Vector2_t162  L_60 = V_0;
		return L_60;
	}
}
// System.Void playerMovement::moveCamera()
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern "C" void playerMovement_moveCamera_m1358 (playerMovement_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t138  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t138  V_2 = {0};
	float V_3 = 0.0f;
	Vector3_t138  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t138  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t138  V_8 = {0};
	float V_9 = 0.0f;
	Vector3_t138  V_10 = {0};
	float V_11 = 0.0f;
	Vector3_t138  V_12 = {0};
	float V_13 = 0.0f;
	Vector3_t138  V_14 = {0};
	float V_15 = 0.0f;
	Vector3_t138  V_16 = {0};
	float V_17 = 0.0f;
	Vector3_t138  V_18 = {0};
	float V_19 = 0.0f;
	Vector3_t138  V_20 = {0};
	float V_21 = 0.0f;
	Vector3_t138  V_22 = {0};
	float V_23 = 0.0f;
	Vector3_t138  V_24 = {0};
	float V_25 = 0.0f;
	Vector3_t138  V_26 = {0};
	float V_27 = 0.0f;
	Vector3_t138  V_28 = {0};
	float V_29 = 0.0f;
	Vector3_t138  V_30 = {0};
	float V_31 = 0.0f;
	Vector3_t138  V_32 = {0};
	float V_33 = 0.0f;
	Vector3_t138  V_34 = {0};
	float V_35 = 0.0f;
	Vector3_t138  V_36 = {0};
	float V_37 = 0.0f;
	Vector3_t138  V_38 = {0};
	float V_39 = 0.0f;
	Vector3_t138  V_40 = {0};
	float V_41 = 0.0f;
	Vector3_t138  V_42 = {0};
	float V_43 = 0.0f;
	Vector3_t138  V_44 = {0};
	float V_45 = 0.0f;
	Vector3_t138  V_46 = {0};
	float V_47 = 0.0f;
	Vector3_t138  V_48 = {0};
	float V_49 = 0.0f;
	Vector3_t138  V_50 = {0};
	float V_51 = 0.0f;
	Vector3_t138  V_52 = {0};
	Vector3_t138  V_53 = {0};
	Vector2_t162  V_54 = {0};
	Vector2_t162  V_55 = {0};
	Vector2_t162  V_56 = {0};
	float V_57 = 0.0f;
	Vector3_t138  V_58 = {0};
	Vector3_t138  V_59 = {0};
	Vector2_t162  V_60 = {0};
	Vector2_t162  V_61 = {0};
	Vector2_t162  V_62 = {0};
	float V_63 = 0.0f;
	Vector3_t138  V_64 = {0};
	Vector3_t138  V_65 = {0};
	Vector2_t162  V_66 = {0};
	float V_67 = 0.0f;
	Vector3_t138  V_68 = {0};
	Vector3_t138  V_69 = {0};
	Vector2_t162  V_70 = {0};
	float V_71 = 0.0f;
	Vector3_t138  V_72 = {0};
	Vector3_t138  V_73 = {0};
	Vector2_t162  V_74 = {0};
	float V_75 = 0.0f;
	Vector3_t138  V_76 = {0};
	Vector3_t138  V_77 = {0};
	Vector2_t162  V_78 = {0};
	float V_79 = 0.0f;
	Vector3_t138  V_80 = {0};
	Vector3_t138  V_81 = {0};
	Vector2_t162  V_82 = {0};
	float V_83 = 0.0f;
	Vector3_t138  V_84 = {0};
	Vector3_t138  V_85 = {0};
	Vector2_t162  V_86 = {0};
	float V_87 = 0.0f;
	Vector3_t138  V_88 = {0};
	Vector3_t138  V_89 = {0};
	Vector2_t162  V_90 = {0};
	float V_91 = 0.0f;
	Vector3_t138  V_92 = {0};
	Vector3_t138  V_93 = {0};
	Vector2_t162  V_94 = {0};
	float V_95 = 0.0f;
	Vector3_t138  V_96 = {0};
	Vector3_t138  V_97 = {0};
	Vector2_t162  V_98 = {0};
	float V_99 = 0.0f;
	Vector3_t138  V_100 = {0};
	Vector3_t138  V_101 = {0};
	Vector2_t162  V_102 = {0};
	float V_103 = 0.0f;
	Vector3_t138  V_104 = {0};
	float V_105 = 0.0f;
	Vector3_t138  V_106 = {0};
	float V_107 = 0.0f;
	Vector3_t138  V_108 = {0};
	float V_109 = 0.0f;
	Vector3_t138  V_110 = {0};
	float V_111 = 0.0f;
	Vector3_t138  V_112 = {0};
	float V_113 = 0.0f;
	Vector3_t138  V_114 = {0};
	float V_115 = 0.0f;
	Vector3_t138  V_116 = {0};
	float V_117 = 0.0f;
	Vector3_t138  V_118 = {0};
	float V_119 = 0.0f;
	Vector3_t138  V_120 = {0};
	float V_121 = 0.0f;
	Vector3_t138  V_122 = {0};
	float V_123 = 0.0f;
	Vector3_t138  V_124 = {0};
	float V_125 = 0.0f;
	Vector3_t138  V_126 = {0};
	float V_127 = 0.0f;
	Vector3_t138  V_128 = {0};
	float V_129 = 0.0f;
	Vector3_t138  V_130 = {0};
	float V_131 = 0.0f;
	Vector3_t138  V_132 = {0};
	{
		int32_t L_0 = (__this->___station_15);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_01c1;
		}
	}
	{
		Camera_t165 * L_1 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t165 * L_2 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_orthographicSize_m1447(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_3, (((float)((float)((int32_t)10)))), (0.3f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_orthographicSize_m1449(L_1, L_4, /*hidden argument*/NULL);
		Camera_t165 * L_5 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t160 * L_6 = Component_get_transform_m1159(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t138  L_7 = Transform_get_position_m1160(L_6, /*hidden argument*/NULL);
		V_53 = L_7;
		float L_8 = ((&V_53)->___x_1);
		Rigidbody2D_t140 * L_9 = (__this->___left_5);
		NullCheck(L_9);
		Vector2_t162  L_10 = Rigidbody2D_get_position_m1450(L_9, /*hidden argument*/NULL);
		V_54 = L_10;
		float L_11 = ((&V_54)->___x_1);
		Rigidbody2D_t140 * L_12 = (__this->___right_6);
		NullCheck(L_12);
		Vector2_t162  L_13 = Rigidbody2D_get_position_m1450(L_12, /*hidden argument*/NULL);
		V_55 = L_13;
		float L_14 = ((&V_55)->___x_1);
		Rigidbody2D_t140 * L_15 = (__this->___cabin_7);
		NullCheck(L_15);
		Vector2_t162  L_16 = Rigidbody2D_get_position_m1450(L_15, /*hidden argument*/NULL);
		V_56 = L_16;
		float L_17 = ((&V_56)->___x_1);
		float L_18 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_8, ((float)((float)((float)((float)((float)((float)L_11+(float)L_14))+(float)((float)((float)L_17*(float)(0.5f)))))/(float)(2.5f))), (0.9f), /*hidden argument*/NULL);
		float L_19 = L_18;
		V_1 = L_19;
		Camera_t165 * L_20 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_t160 * L_21 = Component_get_transform_m1159(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t138  L_22 = Transform_get_position_m1160(L_21, /*hidden argument*/NULL);
		Vector3_t138  L_23 = L_22;
		V_2 = L_23;
		float L_24 = V_1;
		float L_25 = L_24;
		V_57 = L_25;
		(&V_2)->___x_1 = L_25;
		float L_26 = V_57;
		Camera_t165 * L_27 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_t160 * L_28 = Component_get_transform_m1159(L_27, /*hidden argument*/NULL);
		Vector3_t138  L_29 = V_2;
		Vector3_t138  L_30 = L_29;
		V_58 = L_30;
		NullCheck(L_28);
		Transform_set_position_m1192(L_28, L_30, /*hidden argument*/NULL);
		Vector3_t138  L_31 = V_58;
		Camera_t165 * L_32 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_t160 * L_33 = Component_get_transform_m1159(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t138  L_34 = Transform_get_position_m1160(L_33, /*hidden argument*/NULL);
		V_59 = L_34;
		float L_35 = ((&V_59)->___y_2);
		Rigidbody2D_t140 * L_36 = (__this->___left_5);
		NullCheck(L_36);
		Vector2_t162  L_37 = Rigidbody2D_get_position_m1450(L_36, /*hidden argument*/NULL);
		V_60 = L_37;
		float L_38 = ((&V_60)->___y_2);
		Rigidbody2D_t140 * L_39 = (__this->___right_6);
		NullCheck(L_39);
		Vector2_t162  L_40 = Rigidbody2D_get_position_m1450(L_39, /*hidden argument*/NULL);
		V_61 = L_40;
		float L_41 = ((&V_61)->___y_2);
		Rigidbody2D_t140 * L_42 = (__this->___cabin_7);
		NullCheck(L_42);
		Vector2_t162  L_43 = Rigidbody2D_get_position_m1450(L_42, /*hidden argument*/NULL);
		V_62 = L_43;
		float L_44 = ((&V_62)->___y_2);
		float L_45 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_35, ((float)((float)((float)((float)((float)((float)L_38+(float)L_41))+(float)((float)((float)L_44*(float)(0.5f)))))/(float)(2.5f))), (0.9f), /*hidden argument*/NULL);
		float L_46 = L_45;
		V_3 = L_46;
		Camera_t165 * L_47 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_t160 * L_48 = Component_get_transform_m1159(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t138  L_49 = Transform_get_position_m1160(L_48, /*hidden argument*/NULL);
		Vector3_t138  L_50 = L_49;
		V_4 = L_50;
		float L_51 = V_3;
		float L_52 = L_51;
		V_63 = L_52;
		(&V_4)->___y_2 = L_52;
		float L_53 = V_63;
		Camera_t165 * L_54 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_t160 * L_55 = Component_get_transform_m1159(L_54, /*hidden argument*/NULL);
		Vector3_t138  L_56 = V_4;
		Vector3_t138  L_57 = L_56;
		V_64 = L_57;
		NullCheck(L_55);
		Transform_set_position_m1192(L_55, L_57, /*hidden argument*/NULL);
		Vector3_t138  L_58 = V_64;
		Camera_t165 * L_59 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_t160 * L_60 = Component_get_transform_m1159(L_59, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_61 = (__this->___left_5);
		NullCheck(L_61);
		float L_62 = Rigidbody2D_get_rotation_m1451(L_61, /*hidden argument*/NULL);
		Vector3_t138  L_63 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_64 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_65 = (__this->___right_6);
		NullCheck(L_65);
		float L_66 = Rigidbody2D_get_rotation_m1451(L_65, /*hidden argument*/NULL);
		Vector3_t138  L_67 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_68 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		Quaternion_t154  L_69 = Quaternion_Lerp_m1182(NULL /*static, unused*/, L_64, L_68, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m1193(L_60, L_69, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_01c1:
	{
		int32_t L_70 = (__this->___station_15);
		if (L_70)
		{
			goto IL_028c;
		}
	}
	{
		Camera_t165 * L_71 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t165 * L_72 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_72);
		float L_73 = Camera_get_orthographicSize_m1447(L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_74 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_73, (((float)((float)((int32_t)12)))), (0.3f), /*hidden argument*/NULL);
		NullCheck(L_71);
		Camera_set_orthographicSize_m1449(L_71, L_74, /*hidden argument*/NULL);
		Camera_t165 * L_75 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_t160 * L_76 = Component_get_transform_m1159(L_75, /*hidden argument*/NULL);
		Camera_t165 * L_77 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_t160 * L_78 = Component_get_transform_m1159(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		Quaternion_t154  L_79 = Transform_get_rotation_m1271(L_78, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_80 = (__this->___cabin_7);
		NullCheck(L_80);
		float L_81 = Rigidbody2D_get_rotation_m1451(L_80, /*hidden argument*/NULL);
		Vector3_t138  L_82 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_83 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_81, L_82, /*hidden argument*/NULL);
		Quaternion_t154  L_84 = Quaternion_Lerp_m1182(NULL /*static, unused*/, L_79, L_83, (0.2f), /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_set_rotation_m1193(L_76, L_84, /*hidden argument*/NULL);
		Camera_t165 * L_85 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_t160 * L_86 = Component_get_transform_m1159(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_t138  L_87 = Transform_get_position_m1160(L_86, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_88 = (__this->___cabin_7);
		NullCheck(L_88);
		Vector2_t162  L_89 = Rigidbody2D_get_position_m1450(L_88, /*hidden argument*/NULL);
		Camera_t165 * L_90 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_t160 * L_91 = Component_get_transform_m1159(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t138  L_92 = Transform_get_up_m1453(L_91, /*hidden argument*/NULL);
		Vector2_t162  L_93 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		Vector2_t162  L_94 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_89, L_93, /*hidden argument*/NULL);
		Vector3_t138  L_95 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		Vector3_t138  L_96 = Vector3_Lerp_m1173(NULL /*static, unused*/, L_87, L_95, (0.9f), /*hidden argument*/NULL);
		V_0 = L_96;
		(&V_0)->___z_3 = (((float)((float)((int32_t)-10))));
		Camera_t165 * L_97 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_97);
		Transform_t160 * L_98 = Component_get_transform_m1159(L_97, /*hidden argument*/NULL);
		Vector3_t138  L_99 = V_0;
		NullCheck(L_98);
		Transform_set_position_m1192(L_98, L_99, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_028c:
	{
		int32_t L_100 = (__this->___station_15);
		if ((!(((uint32_t)L_100) == ((uint32_t)1))))
		{
			goto IL_03c8;
		}
	}
	{
		Camera_t165 * L_101 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_t160 * L_102 = Component_get_transform_m1159(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t138  L_103 = Transform_get_position_m1160(L_102, /*hidden argument*/NULL);
		V_65 = L_103;
		float L_104 = ((&V_65)->___x_1);
		Rigidbody2D_t140 * L_105 = (__this->___cabin_7);
		NullCheck(L_105);
		Vector2_t162  L_106 = Rigidbody2D_get_position_m1450(L_105, /*hidden argument*/NULL);
		V_66 = L_106;
		float L_107 = ((&V_66)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_108 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_104, L_107, (0.9f), /*hidden argument*/NULL);
		float L_109 = L_108;
		V_5 = L_109;
		Camera_t165 * L_110 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_110);
		Transform_t160 * L_111 = Component_get_transform_m1159(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		Vector3_t138  L_112 = Transform_get_position_m1160(L_111, /*hidden argument*/NULL);
		Vector3_t138  L_113 = L_112;
		V_6 = L_113;
		float L_114 = V_5;
		float L_115 = L_114;
		V_67 = L_115;
		(&V_6)->___x_1 = L_115;
		float L_116 = V_67;
		Camera_t165 * L_117 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_117);
		Transform_t160 * L_118 = Component_get_transform_m1159(L_117, /*hidden argument*/NULL);
		Vector3_t138  L_119 = V_6;
		Vector3_t138  L_120 = L_119;
		V_68 = L_120;
		NullCheck(L_118);
		Transform_set_position_m1192(L_118, L_120, /*hidden argument*/NULL);
		Vector3_t138  L_121 = V_68;
		Camera_t165 * L_122 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_122);
		Transform_t160 * L_123 = Component_get_transform_m1159(L_122, /*hidden argument*/NULL);
		NullCheck(L_123);
		Vector3_t138  L_124 = Transform_get_position_m1160(L_123, /*hidden argument*/NULL);
		V_69 = L_124;
		float L_125 = ((&V_69)->___y_2);
		Rigidbody2D_t140 * L_126 = (__this->___cabin_7);
		NullCheck(L_126);
		Vector2_t162  L_127 = Rigidbody2D_get_position_m1450(L_126, /*hidden argument*/NULL);
		V_70 = L_127;
		float L_128 = ((&V_70)->___y_2);
		float L_129 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_125, L_128, (0.9f), /*hidden argument*/NULL);
		float L_130 = L_129;
		V_7 = L_130;
		Camera_t165 * L_131 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_t160 * L_132 = Component_get_transform_m1159(L_131, /*hidden argument*/NULL);
		NullCheck(L_132);
		Vector3_t138  L_133 = Transform_get_position_m1160(L_132, /*hidden argument*/NULL);
		Vector3_t138  L_134 = L_133;
		V_8 = L_134;
		float L_135 = V_7;
		float L_136 = L_135;
		V_71 = L_136;
		(&V_8)->___y_2 = L_136;
		float L_137 = V_71;
		Camera_t165 * L_138 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_138);
		Transform_t160 * L_139 = Component_get_transform_m1159(L_138, /*hidden argument*/NULL);
		Vector3_t138  L_140 = V_8;
		Vector3_t138  L_141 = L_140;
		V_72 = L_141;
		NullCheck(L_139);
		Transform_set_position_m1192(L_139, L_141, /*hidden argument*/NULL);
		Vector3_t138  L_142 = V_72;
		Camera_t165 * L_143 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t165 * L_144 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_144);
		float L_145 = Camera_get_orthographicSize_m1447(L_144, /*hidden argument*/NULL);
		float L_146 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_145, (((float)((float)((int32_t)50)))), (0.05f), /*hidden argument*/NULL);
		NullCheck(L_143);
		Camera_set_orthographicSize_m1449(L_143, L_146, /*hidden argument*/NULL);
		Camera_t165 * L_147 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_147);
		Transform_t160 * L_148 = Component_get_transform_m1159(L_147, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_149 = (__this->___cabin_7);
		NullCheck(L_149);
		float L_150 = Rigidbody2D_get_rotation_m1451(L_149, /*hidden argument*/NULL);
		Vector3_t138  L_151 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_152 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_150, L_151, /*hidden argument*/NULL);
		NullCheck(L_148);
		Transform_set_rotation_m1193(L_148, L_152, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_03c8:
	{
		int32_t L_153 = (__this->___station_15);
		if ((!(((uint32_t)L_153) == ((uint32_t)2))))
		{
			goto IL_051d;
		}
	}
	{
		Camera_t165 * L_154 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_154);
		Transform_t160 * L_155 = Component_get_transform_m1159(L_154, /*hidden argument*/NULL);
		NullCheck(L_155);
		Vector3_t138  L_156 = Transform_get_position_m1160(L_155, /*hidden argument*/NULL);
		V_73 = L_156;
		float L_157 = ((&V_73)->___x_1);
		Rigidbody2D_t140 * L_158 = (__this->___right_6);
		NullCheck(L_158);
		Vector2_t162  L_159 = Rigidbody2D_get_position_m1450(L_158, /*hidden argument*/NULL);
		V_74 = L_159;
		float L_160 = ((&V_74)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_161 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_157, L_160, (0.9f), /*hidden argument*/NULL);
		float L_162 = L_161;
		V_9 = L_162;
		Camera_t165 * L_163 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_163);
		Transform_t160 * L_164 = Component_get_transform_m1159(L_163, /*hidden argument*/NULL);
		NullCheck(L_164);
		Vector3_t138  L_165 = Transform_get_position_m1160(L_164, /*hidden argument*/NULL);
		Vector3_t138  L_166 = L_165;
		V_10 = L_166;
		float L_167 = V_9;
		float L_168 = L_167;
		V_75 = L_168;
		(&V_10)->___x_1 = L_168;
		float L_169 = V_75;
		Camera_t165 * L_170 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_170);
		Transform_t160 * L_171 = Component_get_transform_m1159(L_170, /*hidden argument*/NULL);
		Vector3_t138  L_172 = V_10;
		Vector3_t138  L_173 = L_172;
		V_76 = L_173;
		NullCheck(L_171);
		Transform_set_position_m1192(L_171, L_173, /*hidden argument*/NULL);
		Vector3_t138  L_174 = V_76;
		Camera_t165 * L_175 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_175);
		Transform_t160 * L_176 = Component_get_transform_m1159(L_175, /*hidden argument*/NULL);
		NullCheck(L_176);
		Vector3_t138  L_177 = Transform_get_position_m1160(L_176, /*hidden argument*/NULL);
		V_77 = L_177;
		float L_178 = ((&V_77)->___y_2);
		Rigidbody2D_t140 * L_179 = (__this->___right_6);
		NullCheck(L_179);
		Vector2_t162  L_180 = Rigidbody2D_get_position_m1450(L_179, /*hidden argument*/NULL);
		V_78 = L_180;
		float L_181 = ((&V_78)->___y_2);
		float L_182 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_178, L_181, (0.9f), /*hidden argument*/NULL);
		float L_183 = L_182;
		V_11 = L_183;
		Camera_t165 * L_184 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_184);
		Transform_t160 * L_185 = Component_get_transform_m1159(L_184, /*hidden argument*/NULL);
		NullCheck(L_185);
		Vector3_t138  L_186 = Transform_get_position_m1160(L_185, /*hidden argument*/NULL);
		Vector3_t138  L_187 = L_186;
		V_12 = L_187;
		float L_188 = V_11;
		float L_189 = L_188;
		V_79 = L_189;
		(&V_12)->___y_2 = L_189;
		float L_190 = V_79;
		Camera_t165 * L_191 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_191);
		Transform_t160 * L_192 = Component_get_transform_m1159(L_191, /*hidden argument*/NULL);
		Vector3_t138  L_193 = V_12;
		Vector3_t138  L_194 = L_193;
		V_80 = L_194;
		NullCheck(L_192);
		Transform_set_position_m1192(L_192, L_194, /*hidden argument*/NULL);
		Vector3_t138  L_195 = V_80;
		Camera_t165 * L_196 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_196);
		Transform_t160 * L_197 = Component_get_transform_m1159(L_196, /*hidden argument*/NULL);
		Camera_t165 * L_198 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_198);
		Transform_t160 * L_199 = Component_get_transform_m1159(L_198, /*hidden argument*/NULL);
		NullCheck(L_199);
		Vector3_t138  L_200 = Transform_get_position_m1160(L_199, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_201 = (__this->___right_6);
		NullCheck(L_201);
		Transform_t160 * L_202 = Component_get_transform_m1159(L_201, /*hidden argument*/NULL);
		NullCheck(L_202);
		Vector3_t138  L_203 = Transform_get_up_m1453(L_202, /*hidden argument*/NULL);
		Vector3_t138  L_204 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_203, (((float)((float)5))), /*hidden argument*/NULL);
		Vector3_t138  L_205 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_200, L_204, /*hidden argument*/NULL);
		NullCheck(L_197);
		Transform_set_position_m1192(L_197, L_205, /*hidden argument*/NULL);
		Camera_t165 * L_206 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_206);
		Transform_t160 * L_207 = Component_get_transform_m1159(L_206, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_208 = (__this->___right_6);
		NullCheck(L_208);
		float L_209 = Rigidbody2D_get_rotation_m1451(L_208, /*hidden argument*/NULL);
		Vector3_t138  L_210 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_211 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_209, L_210, /*hidden argument*/NULL);
		NullCheck(L_207);
		Transform_set_rotation_m1193(L_207, L_211, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_051d:
	{
		int32_t L_212 = (__this->___station_15);
		if ((!(((uint32_t)L_212) == ((uint32_t)3))))
		{
			goto IL_0672;
		}
	}
	{
		Camera_t165 * L_213 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_213);
		Transform_t160 * L_214 = Component_get_transform_m1159(L_213, /*hidden argument*/NULL);
		NullCheck(L_214);
		Vector3_t138  L_215 = Transform_get_position_m1160(L_214, /*hidden argument*/NULL);
		V_81 = L_215;
		float L_216 = ((&V_81)->___x_1);
		Rigidbody2D_t140 * L_217 = (__this->___left_5);
		NullCheck(L_217);
		Vector2_t162  L_218 = Rigidbody2D_get_position_m1450(L_217, /*hidden argument*/NULL);
		V_82 = L_218;
		float L_219 = ((&V_82)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_220 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_216, L_219, (0.9f), /*hidden argument*/NULL);
		float L_221 = L_220;
		V_13 = L_221;
		Camera_t165 * L_222 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_222);
		Transform_t160 * L_223 = Component_get_transform_m1159(L_222, /*hidden argument*/NULL);
		NullCheck(L_223);
		Vector3_t138  L_224 = Transform_get_position_m1160(L_223, /*hidden argument*/NULL);
		Vector3_t138  L_225 = L_224;
		V_14 = L_225;
		float L_226 = V_13;
		float L_227 = L_226;
		V_83 = L_227;
		(&V_14)->___x_1 = L_227;
		float L_228 = V_83;
		Camera_t165 * L_229 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_229);
		Transform_t160 * L_230 = Component_get_transform_m1159(L_229, /*hidden argument*/NULL);
		Vector3_t138  L_231 = V_14;
		Vector3_t138  L_232 = L_231;
		V_84 = L_232;
		NullCheck(L_230);
		Transform_set_position_m1192(L_230, L_232, /*hidden argument*/NULL);
		Vector3_t138  L_233 = V_84;
		Camera_t165 * L_234 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_234);
		Transform_t160 * L_235 = Component_get_transform_m1159(L_234, /*hidden argument*/NULL);
		NullCheck(L_235);
		Vector3_t138  L_236 = Transform_get_position_m1160(L_235, /*hidden argument*/NULL);
		V_85 = L_236;
		float L_237 = ((&V_85)->___y_2);
		Rigidbody2D_t140 * L_238 = (__this->___left_5);
		NullCheck(L_238);
		Vector2_t162  L_239 = Rigidbody2D_get_position_m1450(L_238, /*hidden argument*/NULL);
		V_86 = L_239;
		float L_240 = ((&V_86)->___y_2);
		float L_241 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_237, L_240, (0.9f), /*hidden argument*/NULL);
		float L_242 = L_241;
		V_15 = L_242;
		Camera_t165 * L_243 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_243);
		Transform_t160 * L_244 = Component_get_transform_m1159(L_243, /*hidden argument*/NULL);
		NullCheck(L_244);
		Vector3_t138  L_245 = Transform_get_position_m1160(L_244, /*hidden argument*/NULL);
		Vector3_t138  L_246 = L_245;
		V_16 = L_246;
		float L_247 = V_15;
		float L_248 = L_247;
		V_87 = L_248;
		(&V_16)->___y_2 = L_248;
		float L_249 = V_87;
		Camera_t165 * L_250 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_250);
		Transform_t160 * L_251 = Component_get_transform_m1159(L_250, /*hidden argument*/NULL);
		Vector3_t138  L_252 = V_16;
		Vector3_t138  L_253 = L_252;
		V_88 = L_253;
		NullCheck(L_251);
		Transform_set_position_m1192(L_251, L_253, /*hidden argument*/NULL);
		Vector3_t138  L_254 = V_88;
		Camera_t165 * L_255 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_255);
		Transform_t160 * L_256 = Component_get_transform_m1159(L_255, /*hidden argument*/NULL);
		Camera_t165 * L_257 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_257);
		Transform_t160 * L_258 = Component_get_transform_m1159(L_257, /*hidden argument*/NULL);
		NullCheck(L_258);
		Vector3_t138  L_259 = Transform_get_position_m1160(L_258, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_260 = (__this->___left_5);
		NullCheck(L_260);
		Transform_t160 * L_261 = Component_get_transform_m1159(L_260, /*hidden argument*/NULL);
		NullCheck(L_261);
		Vector3_t138  L_262 = Transform_get_right_m1454(L_261, /*hidden argument*/NULL);
		Vector3_t138  L_263 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_262, (((float)((float)3))), /*hidden argument*/NULL);
		Vector3_t138  L_264 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_259, L_263, /*hidden argument*/NULL);
		NullCheck(L_256);
		Transform_set_position_m1192(L_256, L_264, /*hidden argument*/NULL);
		Camera_t165 * L_265 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_265);
		Transform_t160 * L_266 = Component_get_transform_m1159(L_265, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_267 = (__this->___left_5);
		NullCheck(L_267);
		float L_268 = Rigidbody2D_get_rotation_m1451(L_267, /*hidden argument*/NULL);
		Vector3_t138  L_269 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_270 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_268, L_269, /*hidden argument*/NULL);
		NullCheck(L_266);
		Transform_set_rotation_m1193(L_266, L_270, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_0672:
	{
		int32_t L_271 = (__this->___station_15);
		if ((!(((uint32_t)L_271) == ((uint32_t)5))))
		{
			goto IL_07c7;
		}
	}
	{
		Camera_t165 * L_272 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_272);
		Transform_t160 * L_273 = Component_get_transform_m1159(L_272, /*hidden argument*/NULL);
		NullCheck(L_273);
		Vector3_t138  L_274 = Transform_get_position_m1160(L_273, /*hidden argument*/NULL);
		V_89 = L_274;
		float L_275 = ((&V_89)->___x_1);
		Rigidbody2D_t140 * L_276 = (__this->___left_5);
		NullCheck(L_276);
		Vector2_t162  L_277 = Rigidbody2D_get_position_m1450(L_276, /*hidden argument*/NULL);
		V_90 = L_277;
		float L_278 = ((&V_90)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_279 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_275, L_278, (0.9f), /*hidden argument*/NULL);
		float L_280 = L_279;
		V_17 = L_280;
		Camera_t165 * L_281 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_281);
		Transform_t160 * L_282 = Component_get_transform_m1159(L_281, /*hidden argument*/NULL);
		NullCheck(L_282);
		Vector3_t138  L_283 = Transform_get_position_m1160(L_282, /*hidden argument*/NULL);
		Vector3_t138  L_284 = L_283;
		V_18 = L_284;
		float L_285 = V_17;
		float L_286 = L_285;
		V_91 = L_286;
		(&V_18)->___x_1 = L_286;
		float L_287 = V_91;
		Camera_t165 * L_288 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_288);
		Transform_t160 * L_289 = Component_get_transform_m1159(L_288, /*hidden argument*/NULL);
		Vector3_t138  L_290 = V_18;
		Vector3_t138  L_291 = L_290;
		V_92 = L_291;
		NullCheck(L_289);
		Transform_set_position_m1192(L_289, L_291, /*hidden argument*/NULL);
		Vector3_t138  L_292 = V_92;
		Camera_t165 * L_293 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_293);
		Transform_t160 * L_294 = Component_get_transform_m1159(L_293, /*hidden argument*/NULL);
		NullCheck(L_294);
		Vector3_t138  L_295 = Transform_get_position_m1160(L_294, /*hidden argument*/NULL);
		V_93 = L_295;
		float L_296 = ((&V_93)->___y_2);
		Rigidbody2D_t140 * L_297 = (__this->___left_5);
		NullCheck(L_297);
		Vector2_t162  L_298 = Rigidbody2D_get_position_m1450(L_297, /*hidden argument*/NULL);
		V_94 = L_298;
		float L_299 = ((&V_94)->___y_2);
		float L_300 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_296, L_299, (0.9f), /*hidden argument*/NULL);
		float L_301 = L_300;
		V_19 = L_301;
		Camera_t165 * L_302 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_302);
		Transform_t160 * L_303 = Component_get_transform_m1159(L_302, /*hidden argument*/NULL);
		NullCheck(L_303);
		Vector3_t138  L_304 = Transform_get_position_m1160(L_303, /*hidden argument*/NULL);
		Vector3_t138  L_305 = L_304;
		V_20 = L_305;
		float L_306 = V_19;
		float L_307 = L_306;
		V_95 = L_307;
		(&V_20)->___y_2 = L_307;
		float L_308 = V_95;
		Camera_t165 * L_309 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_309);
		Transform_t160 * L_310 = Component_get_transform_m1159(L_309, /*hidden argument*/NULL);
		Vector3_t138  L_311 = V_20;
		Vector3_t138  L_312 = L_311;
		V_96 = L_312;
		NullCheck(L_310);
		Transform_set_position_m1192(L_310, L_312, /*hidden argument*/NULL);
		Vector3_t138  L_313 = V_96;
		Camera_t165 * L_314 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_314);
		Transform_t160 * L_315 = Component_get_transform_m1159(L_314, /*hidden argument*/NULL);
		Camera_t165 * L_316 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_316);
		Transform_t160 * L_317 = Component_get_transform_m1159(L_316, /*hidden argument*/NULL);
		NullCheck(L_317);
		Vector3_t138  L_318 = Transform_get_position_m1160(L_317, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_319 = (__this->___left_5);
		NullCheck(L_319);
		Transform_t160 * L_320 = Component_get_transform_m1159(L_319, /*hidden argument*/NULL);
		NullCheck(L_320);
		Vector3_t138  L_321 = Transform_get_up_m1453(L_320, /*hidden argument*/NULL);
		Vector3_t138  L_322 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_321, (((float)((float)5))), /*hidden argument*/NULL);
		Vector3_t138  L_323 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_318, L_322, /*hidden argument*/NULL);
		NullCheck(L_315);
		Transform_set_position_m1192(L_315, L_323, /*hidden argument*/NULL);
		Camera_t165 * L_324 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_324);
		Transform_t160 * L_325 = Component_get_transform_m1159(L_324, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_326 = (__this->___right_6);
		NullCheck(L_326);
		float L_327 = Rigidbody2D_get_rotation_m1451(L_326, /*hidden argument*/NULL);
		Vector3_t138  L_328 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_329 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_327, L_328, /*hidden argument*/NULL);
		NullCheck(L_325);
		Transform_set_rotation_m1193(L_325, L_329, /*hidden argument*/NULL);
		goto IL_0917;
	}

IL_07c7:
	{
		int32_t L_330 = (__this->___station_15);
		if ((!(((uint32_t)L_330) == ((uint32_t)4))))
		{
			goto IL_0917;
		}
	}
	{
		Camera_t165 * L_331 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_331);
		Transform_t160 * L_332 = Component_get_transform_m1159(L_331, /*hidden argument*/NULL);
		NullCheck(L_332);
		Vector3_t138  L_333 = Transform_get_position_m1160(L_332, /*hidden argument*/NULL);
		V_97 = L_333;
		float L_334 = ((&V_97)->___x_1);
		Rigidbody2D_t140 * L_335 = (__this->___right_6);
		NullCheck(L_335);
		Vector2_t162  L_336 = Rigidbody2D_get_position_m1450(L_335, /*hidden argument*/NULL);
		V_98 = L_336;
		float L_337 = ((&V_98)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_338 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_334, L_337, (0.9f), /*hidden argument*/NULL);
		float L_339 = L_338;
		V_21 = L_339;
		Camera_t165 * L_340 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_340);
		Transform_t160 * L_341 = Component_get_transform_m1159(L_340, /*hidden argument*/NULL);
		NullCheck(L_341);
		Vector3_t138  L_342 = Transform_get_position_m1160(L_341, /*hidden argument*/NULL);
		Vector3_t138  L_343 = L_342;
		V_22 = L_343;
		float L_344 = V_21;
		float L_345 = L_344;
		V_99 = L_345;
		(&V_22)->___x_1 = L_345;
		float L_346 = V_99;
		Camera_t165 * L_347 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_347);
		Transform_t160 * L_348 = Component_get_transform_m1159(L_347, /*hidden argument*/NULL);
		Vector3_t138  L_349 = V_22;
		Vector3_t138  L_350 = L_349;
		V_100 = L_350;
		NullCheck(L_348);
		Transform_set_position_m1192(L_348, L_350, /*hidden argument*/NULL);
		Vector3_t138  L_351 = V_100;
		Camera_t165 * L_352 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_352);
		Transform_t160 * L_353 = Component_get_transform_m1159(L_352, /*hidden argument*/NULL);
		NullCheck(L_353);
		Vector3_t138  L_354 = Transform_get_position_m1160(L_353, /*hidden argument*/NULL);
		V_101 = L_354;
		float L_355 = ((&V_101)->___y_2);
		Rigidbody2D_t140 * L_356 = (__this->___right_6);
		NullCheck(L_356);
		Vector2_t162  L_357 = Rigidbody2D_get_position_m1450(L_356, /*hidden argument*/NULL);
		V_102 = L_357;
		float L_358 = ((&V_102)->___y_2);
		float L_359 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_355, L_358, (0.9f), /*hidden argument*/NULL);
		float L_360 = L_359;
		V_23 = L_360;
		Camera_t165 * L_361 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_361);
		Transform_t160 * L_362 = Component_get_transform_m1159(L_361, /*hidden argument*/NULL);
		NullCheck(L_362);
		Vector3_t138  L_363 = Transform_get_position_m1160(L_362, /*hidden argument*/NULL);
		Vector3_t138  L_364 = L_363;
		V_24 = L_364;
		float L_365 = V_23;
		float L_366 = L_365;
		V_103 = L_366;
		(&V_24)->___y_2 = L_366;
		float L_367 = V_103;
		Camera_t165 * L_368 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_368);
		Transform_t160 * L_369 = Component_get_transform_m1159(L_368, /*hidden argument*/NULL);
		Vector3_t138  L_370 = V_24;
		Vector3_t138  L_371 = L_370;
		V_104 = L_371;
		NullCheck(L_369);
		Transform_set_position_m1192(L_369, L_371, /*hidden argument*/NULL);
		Vector3_t138  L_372 = V_104;
		Camera_t165 * L_373 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_373);
		Transform_t160 * L_374 = Component_get_transform_m1159(L_373, /*hidden argument*/NULL);
		Camera_t165 * L_375 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_375);
		Transform_t160 * L_376 = Component_get_transform_m1159(L_375, /*hidden argument*/NULL);
		NullCheck(L_376);
		Vector3_t138  L_377 = Transform_get_position_m1160(L_376, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_378 = (__this->___right_6);
		NullCheck(L_378);
		Transform_t160 * L_379 = Component_get_transform_m1159(L_378, /*hidden argument*/NULL);
		NullCheck(L_379);
		Vector3_t138  L_380 = Transform_get_right_m1454(L_379, /*hidden argument*/NULL);
		Vector3_t138  L_381 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_380, (((float)((float)3))), /*hidden argument*/NULL);
		Vector3_t138  L_382 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_377, L_381, /*hidden argument*/NULL);
		NullCheck(L_374);
		Transform_set_position_m1192(L_374, L_382, /*hidden argument*/NULL);
		Camera_t165 * L_383 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_383);
		Transform_t160 * L_384 = Component_get_transform_m1159(L_383, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_385 = (__this->___left_5);
		NullCheck(L_385);
		float L_386 = Rigidbody2D_get_rotation_m1451(L_385, /*hidden argument*/NULL);
		Vector3_t138  L_387 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_388 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_386, L_387, /*hidden argument*/NULL);
		NullCheck(L_384);
		Transform_set_rotation_m1193(L_384, L_388, /*hidden argument*/NULL);
	}

IL_0917:
	{
		Camera_t165 * L_389 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_389);
		float L_390 = Camera_get_orthographicSize_m1447(L_389, /*hidden argument*/NULL);
		float L_391 = ((float)((float)L_390*(float)(((float)((float)2)))));
		V_25 = L_391;
		Transform_t160 * L_392 = (__this->___pad_12);
		NullCheck(L_392);
		Vector3_t138  L_393 = Transform_get_localScale_m1121(L_392, /*hidden argument*/NULL);
		Vector3_t138  L_394 = L_393;
		V_26 = L_394;
		float L_395 = V_25;
		float L_396 = L_395;
		V_105 = L_396;
		(&V_26)->___x_1 = L_396;
		float L_397 = V_105;
		Transform_t160 * L_398 = (__this->___pad_12);
		Vector3_t138  L_399 = V_26;
		Vector3_t138  L_400 = L_399;
		V_106 = L_400;
		NullCheck(L_398);
		Transform_set_localScale_m1114(L_398, L_400, /*hidden argument*/NULL);
		Vector3_t138  L_401 = V_106;
		Camera_t165 * L_402 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_402);
		float L_403 = Camera_get_orthographicSize_m1447(L_402, /*hidden argument*/NULL);
		float L_404 = ((float)((float)L_403*(float)(((float)((float)2)))));
		V_27 = L_404;
		Transform_t160 * L_405 = (__this->___pad_12);
		NullCheck(L_405);
		Vector3_t138  L_406 = Transform_get_localScale_m1121(L_405, /*hidden argument*/NULL);
		Vector3_t138  L_407 = L_406;
		V_28 = L_407;
		float L_408 = V_27;
		float L_409 = L_408;
		V_107 = L_409;
		(&V_28)->___y_2 = L_409;
		float L_410 = V_107;
		Transform_t160 * L_411 = (__this->___pad_12);
		Vector3_t138  L_412 = V_28;
		Vector3_t138  L_413 = L_412;
		V_108 = L_413;
		NullCheck(L_411);
		Transform_set_localScale_m1114(L_411, L_413, /*hidden argument*/NULL);
		Vector3_t138  L_414 = V_108;
		Camera_t165 * L_415 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_415);
		float L_416 = Camera_get_orthographicSize_m1447(L_415, /*hidden argument*/NULL);
		float L_417 = ((-L_416));
		V_29 = L_417;
		Transform_t160 * L_418 = (__this->___pad_12);
		NullCheck(L_418);
		Vector3_t138  L_419 = Transform_get_localPosition_m1119(L_418, /*hidden argument*/NULL);
		Vector3_t138  L_420 = L_419;
		V_30 = L_420;
		float L_421 = V_29;
		float L_422 = L_421;
		V_109 = L_422;
		(&V_30)->___x_1 = L_422;
		float L_423 = V_109;
		Transform_t160 * L_424 = (__this->___pad_12);
		Vector3_t138  L_425 = V_30;
		Vector3_t138  L_426 = L_425;
		V_110 = L_426;
		NullCheck(L_424);
		Transform_set_localPosition_m1112(L_424, L_426, /*hidden argument*/NULL);
		Vector3_t138  L_427 = V_110;
		Camera_t165 * L_428 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_428);
		float L_429 = Camera_get_orthographicSize_m1447(L_428, /*hidden argument*/NULL);
		float L_430 = ((float)((float)((-L_429))*(float)(0.7f)));
		V_31 = L_430;
		Transform_t160 * L_431 = (__this->___pad_12);
		NullCheck(L_431);
		Vector3_t138  L_432 = Transform_get_localPosition_m1119(L_431, /*hidden argument*/NULL);
		Vector3_t138  L_433 = L_432;
		V_32 = L_433;
		float L_434 = V_31;
		float L_435 = L_434;
		V_111 = L_435;
		(&V_32)->___y_2 = L_435;
		float L_436 = V_111;
		Transform_t160 * L_437 = (__this->___pad_12);
		Vector3_t138  L_438 = V_32;
		Vector3_t138  L_439 = L_438;
		V_112 = L_439;
		NullCheck(L_437);
		Transform_set_localPosition_m1112(L_437, L_439, /*hidden argument*/NULL);
		Vector3_t138  L_440 = V_112;
		Camera_t165 * L_441 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_441);
		float L_442 = Camera_get_orthographicSize_m1447(L_441, /*hidden argument*/NULL);
		float L_443 = ((float)((float)L_442*(float)(0.4f)));
		V_33 = L_443;
		Transform_t160 * L_444 = (__this->___knob_11);
		NullCheck(L_444);
		Vector3_t138  L_445 = Transform_get_localScale_m1121(L_444, /*hidden argument*/NULL);
		Vector3_t138  L_446 = L_445;
		V_34 = L_446;
		float L_447 = V_33;
		float L_448 = L_447;
		V_113 = L_448;
		(&V_34)->___x_1 = L_448;
		float L_449 = V_113;
		Transform_t160 * L_450 = (__this->___knob_11);
		Vector3_t138  L_451 = V_34;
		Vector3_t138  L_452 = L_451;
		V_114 = L_452;
		NullCheck(L_450);
		Transform_set_localScale_m1114(L_450, L_452, /*hidden argument*/NULL);
		Vector3_t138  L_453 = V_114;
		Camera_t165 * L_454 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_454);
		float L_455 = Camera_get_orthographicSize_m1447(L_454, /*hidden argument*/NULL);
		float L_456 = ((float)((float)L_455*(float)(0.4f)));
		V_35 = L_456;
		Transform_t160 * L_457 = (__this->___knob_11);
		NullCheck(L_457);
		Vector3_t138  L_458 = Transform_get_localScale_m1121(L_457, /*hidden argument*/NULL);
		Vector3_t138  L_459 = L_458;
		V_36 = L_459;
		float L_460 = V_35;
		float L_461 = L_460;
		V_115 = L_461;
		(&V_36)->___y_2 = L_461;
		float L_462 = V_115;
		Transform_t160 * L_463 = (__this->___knob_11);
		Vector3_t138  L_464 = V_36;
		Vector3_t138  L_465 = L_464;
		V_116 = L_465;
		NullCheck(L_463);
		Transform_set_localScale_m1114(L_463, L_465, /*hidden argument*/NULL);
		Vector3_t138  L_466 = V_116;
		Camera_t165 * L_467 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_467);
		float L_468 = Camera_get_orthographicSize_m1447(L_467, /*hidden argument*/NULL);
		float L_469 = ((float)((float)L_468*(float)(0.8f)));
		V_37 = L_469;
		Transform_t160 * L_470 = (__this->___redBttn_14);
		NullCheck(L_470);
		Vector3_t138  L_471 = Transform_get_localScale_m1121(L_470, /*hidden argument*/NULL);
		Vector3_t138  L_472 = L_471;
		V_38 = L_472;
		float L_473 = V_37;
		float L_474 = L_473;
		V_117 = L_474;
		(&V_38)->___y_2 = L_474;
		float L_475 = V_117;
		Transform_t160 * L_476 = (__this->___redBttn_14);
		Vector3_t138  L_477 = V_38;
		Vector3_t138  L_478 = L_477;
		V_118 = L_478;
		NullCheck(L_476);
		Transform_set_localScale_m1114(L_476, L_478, /*hidden argument*/NULL);
		Vector3_t138  L_479 = V_118;
		Camera_t165 * L_480 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_480);
		float L_481 = Camera_get_orthographicSize_m1447(L_480, /*hidden argument*/NULL);
		float L_482 = ((float)((float)L_481*(float)(0.8f)));
		V_39 = L_482;
		Transform_t160 * L_483 = (__this->___redBttn_14);
		NullCheck(L_483);
		Vector3_t138  L_484 = Transform_get_localScale_m1121(L_483, /*hidden argument*/NULL);
		Vector3_t138  L_485 = L_484;
		V_40 = L_485;
		float L_486 = V_39;
		float L_487 = L_486;
		V_119 = L_487;
		(&V_40)->___x_1 = L_487;
		float L_488 = V_119;
		Transform_t160 * L_489 = (__this->___redBttn_14);
		Vector3_t138  L_490 = V_40;
		Vector3_t138  L_491 = L_490;
		V_120 = L_491;
		NullCheck(L_489);
		Transform_set_localScale_m1114(L_489, L_491, /*hidden argument*/NULL);
		Vector3_t138  L_492 = V_120;
		Camera_t165 * L_493 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_493);
		float L_494 = Camera_get_orthographicSize_m1447(L_493, /*hidden argument*/NULL);
		float L_495 = ((float)((float)L_494*(float)(1.1f)));
		V_41 = L_495;
		Transform_t160 * L_496 = (__this->___redBttn_14);
		NullCheck(L_496);
		Vector3_t138  L_497 = Transform_get_localPosition_m1119(L_496, /*hidden argument*/NULL);
		Vector3_t138  L_498 = L_497;
		V_42 = L_498;
		float L_499 = V_41;
		float L_500 = L_499;
		V_121 = L_500;
		(&V_42)->___x_1 = L_500;
		float L_501 = V_121;
		Transform_t160 * L_502 = (__this->___redBttn_14);
		Vector3_t138  L_503 = V_42;
		Vector3_t138  L_504 = L_503;
		V_122 = L_504;
		NullCheck(L_502);
		Transform_set_localPosition_m1112(L_502, L_504, /*hidden argument*/NULL);
		Vector3_t138  L_505 = V_122;
		Camera_t165 * L_506 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_506);
		float L_507 = Camera_get_orthographicSize_m1447(L_506, /*hidden argument*/NULL);
		float L_508 = ((float)((float)((-L_507))*(float)(0.7f)));
		V_43 = L_508;
		Transform_t160 * L_509 = (__this->___redBttn_14);
		NullCheck(L_509);
		Vector3_t138  L_510 = Transform_get_localPosition_m1119(L_509, /*hidden argument*/NULL);
		Vector3_t138  L_511 = L_510;
		V_44 = L_511;
		float L_512 = V_43;
		float L_513 = L_512;
		V_123 = L_513;
		(&V_44)->___y_2 = L_513;
		float L_514 = V_123;
		Transform_t160 * L_515 = (__this->___redBttn_14);
		Vector3_t138  L_516 = V_44;
		Vector3_t138  L_517 = L_516;
		V_124 = L_517;
		NullCheck(L_515);
		Transform_set_localPosition_m1112(L_515, L_517, /*hidden argument*/NULL);
		Vector3_t138  L_518 = V_124;
		Camera_t165 * L_519 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_519);
		float L_520 = Camera_get_orthographicSize_m1447(L_519, /*hidden argument*/NULL);
		float L_521 = ((float)((float)L_520*(float)(0.8f)));
		V_45 = L_521;
		Transform_t160 * L_522 = (__this->___greenBttn_13);
		NullCheck(L_522);
		Vector3_t138  L_523 = Transform_get_localScale_m1121(L_522, /*hidden argument*/NULL);
		Vector3_t138  L_524 = L_523;
		V_46 = L_524;
		float L_525 = V_45;
		float L_526 = L_525;
		V_125 = L_526;
		(&V_46)->___y_2 = L_526;
		float L_527 = V_125;
		Transform_t160 * L_528 = (__this->___greenBttn_13);
		Vector3_t138  L_529 = V_46;
		Vector3_t138  L_530 = L_529;
		V_126 = L_530;
		NullCheck(L_528);
		Transform_set_localScale_m1114(L_528, L_530, /*hidden argument*/NULL);
		Vector3_t138  L_531 = V_126;
		Camera_t165 * L_532 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_532);
		float L_533 = Camera_get_orthographicSize_m1447(L_532, /*hidden argument*/NULL);
		float L_534 = ((float)((float)L_533*(float)(0.8f)));
		V_47 = L_534;
		Transform_t160 * L_535 = (__this->___greenBttn_13);
		NullCheck(L_535);
		Vector3_t138  L_536 = Transform_get_localScale_m1121(L_535, /*hidden argument*/NULL);
		Vector3_t138  L_537 = L_536;
		V_48 = L_537;
		float L_538 = V_47;
		float L_539 = L_538;
		V_127 = L_539;
		(&V_48)->___x_1 = L_539;
		float L_540 = V_127;
		Transform_t160 * L_541 = (__this->___greenBttn_13);
		Vector3_t138  L_542 = V_48;
		Vector3_t138  L_543 = L_542;
		V_128 = L_543;
		NullCheck(L_541);
		Transform_set_localScale_m1114(L_541, L_543, /*hidden argument*/NULL);
		Vector3_t138  L_544 = V_128;
		Camera_t165 * L_545 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_545);
		float L_546 = Camera_get_orthographicSize_m1447(L_545, /*hidden argument*/NULL);
		float L_547 = ((float)((float)L_546*(float)(0.9f)));
		V_49 = L_547;
		Transform_t160 * L_548 = (__this->___greenBttn_13);
		NullCheck(L_548);
		Vector3_t138  L_549 = Transform_get_localPosition_m1119(L_548, /*hidden argument*/NULL);
		Vector3_t138  L_550 = L_549;
		V_50 = L_550;
		float L_551 = V_49;
		float L_552 = L_551;
		V_129 = L_552;
		(&V_50)->___x_1 = L_552;
		float L_553 = V_129;
		Transform_t160 * L_554 = (__this->___greenBttn_13);
		Vector3_t138  L_555 = V_50;
		Vector3_t138  L_556 = L_555;
		V_130 = L_556;
		NullCheck(L_554);
		Transform_set_localPosition_m1112(L_554, L_556, /*hidden argument*/NULL);
		Vector3_t138  L_557 = V_130;
		Camera_t165 * L_558 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_558);
		float L_559 = Camera_get_orthographicSize_m1447(L_558, /*hidden argument*/NULL);
		float L_560 = ((float)((float)((-L_559))*(float)(0.8f)));
		V_51 = L_560;
		Transform_t160 * L_561 = (__this->___greenBttn_13);
		NullCheck(L_561);
		Vector3_t138  L_562 = Transform_get_localPosition_m1119(L_561, /*hidden argument*/NULL);
		Vector3_t138  L_563 = L_562;
		V_52 = L_563;
		float L_564 = V_51;
		float L_565 = L_564;
		V_131 = L_565;
		(&V_52)->___y_2 = L_565;
		float L_566 = V_131;
		Transform_t160 * L_567 = (__this->___greenBttn_13);
		Vector3_t138  L_568 = V_52;
		Vector3_t138  L_569 = L_568;
		V_132 = L_569;
		NullCheck(L_567);
		Transform_set_localPosition_m1112(L_567, L_569, /*hidden argument*/NULL);
		Vector3_t138  L_570 = V_132;
		return;
	}
}
// System.Void playerMovement::playerMove(UnityEngine.Vector2)
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern "C" void playerMovement_playerMove_m1359 (playerMovement_t308 * __this, Vector2_t162  ___mvmt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t140 * L_0 = (__this->___rigidBody_3);
		Transform_t160 * L_1 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t154  L_2 = Transform_get_rotation_m1271(L_1, /*hidden argument*/NULL);
		Vector2_t162  L_3 = ___mvmt;
		Vector3_t138  L_4 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Vector3_t138  L_5 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		float L_6 = (__this->___speed_10);
		Vector3_t138  L_7 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector2_t162  L_8 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_AddForce_m1231(L_0, L_8, /*hidden argument*/NULL);
		Vector2_t162  L_9 = ___mvmt;
		Vector2_t162  L_10 = Vector2_get_zero_m1194(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector2_op_Inequality_m1455(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		GameObject_t159 * L_12 = (__this->___sprite_22);
		NullCheck(L_12);
		Transform_t160 * L_13 = GameObject_get_transform_m1189(L_12, /*hidden argument*/NULL);
		float L_14 = ((&___mvmt)->___y_2);
		float L_15 = ((&___mvmt)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_16 = atan2f(L_14, L_15);
		Quaternion_t154  L_17 = Quaternion_EulerAngles_m1414(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localRotation_m1113(L_13, L_17, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void playerMovement::Main()
extern "C" void playerMovement_Main_m1360 (playerMovement_t308 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void projectile::.ctor()
extern "C" void projectile__ctor_m1361 (projectile_t311 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		__this->___age_3 = ((int32_t)100);
		return;
	}
}
// System.Void projectile::Start()
extern "C" void projectile_Start_m1362 (projectile_t311 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void projectile::Update()
extern "C" void projectile_Update_m1363 (projectile_t311 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___age_3);
		__this->___age_3 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = (__this->___age_3);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t159 * L_2 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
extern const Il2CppType* PhotonView_t83_0_0_0_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonView_t83_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t214_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral472;
extern Il2CppCodeGenString* _stringLiteral453;
extern "C" void projectile_OnCollisionEnter2D_m1364 (projectile_t311 * __this, Collision2D_t317 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonView_t83_0_0_0_var = il2cpp_codegen_type_from_index(34);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		PhotonView_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Int32_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t317 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t159 * L_1 = Collision2D_get_gameObject_m1420(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m1421(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m881(NULL /*static, unused*/, L_2, _stringLiteral472, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		Collision2D_t317 * L_4 = ___col;
		NullCheck(L_4);
		GameObject_t159 * L_5 = Collision2D_get_gameObject_m1420(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		Component_t112 * L_7 = GameObject_GetComponent_m1399(L_5, L_6, /*hidden argument*/NULL);
		ObjectU5BU5D_t111* L_8 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 1));
		int32_t L_9 = ((int32_t)10);
		Object_t * L_10 = Box(Int32_t214_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0, sizeof(Object_t *))) = (Object_t *)L_10;
		NullCheck(((PhotonView_t83 *)CastclassClass(L_7, PhotonView_t83_il2cpp_TypeInfo_var)));
		PhotonView_RPC_m596(((PhotonView_t83 *)CastclassClass(L_7, PhotonView_t83_il2cpp_TypeInfo_var)), _stringLiteral453, 0, L_8, /*hidden argument*/NULL);
		GameObject_t159 * L_11 = (__this->___splode_4);
		Transform_t160 * L_12 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t138  L_13 = Transform_get_position_m1160(L_12, /*hidden argument*/NULL);
		Quaternion_t154  L_14 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_m1001(NULL /*static, unused*/, L_11, L_13, L_14, /*hidden argument*/NULL);
		GameObject_t159 * L_15 = Component_get_gameObject_m959(__this, /*hidden argument*/NULL);
		Object_Destroy_m1003(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Void projectile::Main()
extern "C" void projectile_Main_m1365 (projectile_t311 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void returntomenu::.ctor()
extern "C" void returntomenu__ctor_m1366 (returntomenu_t312 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void returntomenu::onClick()
extern Il2CppCodeGenString* _stringLiteral473;
extern "C" void returntomenu_onClick_m1367 (returntomenu_t312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral473 = il2cpp_codegen_string_literal_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral473, /*hidden argument*/NULL);
		return;
	}
}
// System.Void returntomenu::Start()
extern "C" void returntomenu_Start_m1368 (returntomenu_t312 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void returntomenu::Update()
extern "C" void returntomenu_Update_m1369 (returntomenu_t312 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void returntomenu::Main()
extern "C" void returntomenu_Main_m1370 (returntomenu_t312 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void run_game::.ctor()
extern "C" void run_game__ctor_m1371 (run_game_t313 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void run_game::onClick()
extern Il2CppCodeGenString* _stringLiteral474;
extern "C" void run_game_onClick_m1372 (run_game_t313 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral474 = il2cpp_codegen_string_literal_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral474, /*hidden argument*/NULL);
		return;
	}
}
// System.Void run_game::Start()
extern "C" void run_game_Start_m1373 (run_game_t313 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void run_game::Update()
extern "C" void run_game_Update_m1374 (run_game_t313 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void run_game::Main()
extern "C" void run_game_Main_m1375 (run_game_t313 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void touchpad::.ctor()
extern "C" void touchpad__ctor_m1376 (touchpad_t314 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void touchpad::Start()
extern "C" void touchpad_Start_m1377 (touchpad_t314 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void touchpad::Update()
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern "C" void touchpad_Update_m1378 (touchpad_t314 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		s_Il2CppMethodIntialized = true;
	}
	TouchU5BU5D_t321* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1213(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		TouchU5BU5D_t321* L_1 = Input_get_touches_m1441(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0011:
	{
		return;
	}
}
// System.Void touchpad::Main()
extern "C" void touchpad_Main_m1379 (touchpad_t314 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void truckMove::.ctor()
extern "C" void truckMove__ctor_m1380 (truckMove_t301 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		__this->___truckHealth_12 = ((int32_t)100);
		__this->___hscale_13 = (1.0f);
		__this->___spawn_17 = ((int32_t)5000);
		return;
	}
}
// System.Void truckMove::Start()
extern "C" void truckMove_Start_m1381 (truckMove_t301 * __this, const MethodInfo* method)
{
	{
		__this->___wheelAngle_7 = (((float)((float)0)));
		__this->___wheelSpin_8 = (((float)((float)0)));
		return;
	}
}
// System.Void truckMove::Update()
extern const Il2CppType* SpriteRenderer_t281_0_0_0_var;
extern const Il2CppType* BuzzerScript_t290_0_0_0_var;
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SpriteRenderer_t281_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonNetwork_t100_il2cpp_TypeInfo_var;
extern TypeInfo* BuzzerScript_t290_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral475;
extern Il2CppCodeGenString* _stringLiteral476;
extern "C" void truckMove_Update_m1382 (truckMove_t301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpriteRenderer_t281_0_0_0_var = il2cpp_codegen_type_from_index(165);
		BuzzerScript_t290_0_0_0_var = il2cpp_codegen_type_from_index(187);
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		SpriteRenderer_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		PhotonNetwork_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		BuzzerScript_t290_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(187);
		Input_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(124);
		_stringLiteral475 = il2cpp_codegen_string_literal_from_index(475);
		_stringLiteral476 = il2cpp_codegen_string_literal_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t138  V_2 = {0};
	float V_3 = 0.0f;
	Vector3_t138  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t138  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t138  V_8 = {0};
	float V_9 = 0.0f;
	Vector3_t138  V_10 = {0};
	float V_11 = 0.0f;
	Vector3_t138  V_12 = {0};
	{
		float L_0 = (__this->___hscale_13);
		int32_t L_1 = (__this->___truckHealth_12);
		float L_2 = UnityBuiltins_parseFloat_m1456(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_0, ((float)((float)L_2/(float)(100.0f))), (0.1f), /*hidden argument*/NULL);
		__this->___hscale_13 = L_3;
		float L_4 = (__this->___hscale_13);
		Camera_t165 * L_5 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = Camera_get_orthographicSize_m1447(L_5, /*hidden argument*/NULL);
		float L_7 = ((float)((float)((float)((float)L_4*(float)L_6))/(float)(((float)((float)7)))));
		V_1 = L_7;
		GameObject_t159 * L_8 = (__this->___healthbar_15);
		NullCheck(L_8);
		Transform_t160 * L_9 = GameObject_get_transform_m1189(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t138  L_10 = Transform_get_localScale_m1121(L_9, /*hidden argument*/NULL);
		Vector3_t138  L_11 = L_10;
		V_2 = L_11;
		float L_12 = V_1;
		float L_13 = L_12;
		V_7 = L_13;
		(&V_2)->___x_1 = L_13;
		float L_14 = V_7;
		GameObject_t159 * L_15 = (__this->___healthbar_15);
		NullCheck(L_15);
		Transform_t160 * L_16 = GameObject_get_transform_m1189(L_15, /*hidden argument*/NULL);
		Vector3_t138  L_17 = V_2;
		Vector3_t138  L_18 = L_17;
		V_8 = L_18;
		NullCheck(L_16);
		Transform_set_localScale_m1114(L_16, L_18, /*hidden argument*/NULL);
		Vector3_t138  L_19 = V_8;
		Camera_t165 * L_20 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		float L_21 = Camera_get_orthographicSize_m1447(L_20, /*hidden argument*/NULL);
		float L_22 = ((float)((float)L_21/(float)(((float)((float)7)))));
		V_3 = L_22;
		GameObject_t159 * L_23 = (__this->___healthbar_15);
		NullCheck(L_23);
		Transform_t160 * L_24 = GameObject_get_transform_m1189(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t138  L_25 = Transform_get_localScale_m1121(L_24, /*hidden argument*/NULL);
		Vector3_t138  L_26 = L_25;
		V_4 = L_26;
		float L_27 = V_3;
		float L_28 = L_27;
		V_9 = L_28;
		(&V_4)->___y_2 = L_28;
		float L_29 = V_9;
		GameObject_t159 * L_30 = (__this->___healthbar_15);
		NullCheck(L_30);
		Transform_t160 * L_31 = GameObject_get_transform_m1189(L_30, /*hidden argument*/NULL);
		Vector3_t138  L_32 = V_4;
		Vector3_t138  L_33 = L_32;
		V_10 = L_33;
		NullCheck(L_31);
		Transform_set_localScale_m1114(L_31, L_33, /*hidden argument*/NULL);
		Vector3_t138  L_34 = V_10;
		float L_35 = (__this->___hdiv_14);
		float L_36 = atanf(((float)((float)L_35/(float)(((float)((float)((int32_t)10)))))));
		float L_37 = Random_Range_m1457(NULL /*static, unused*/, (((float)((float)0))), ((float)((float)L_36/(float)(((float)((float)5))))), /*hidden argument*/NULL);
		Camera_t165 * L_38 = Camera_get_main_m1425(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_38);
		float L_39 = Camera_get_orthographicSize_m1447(L_38, /*hidden argument*/NULL);
		float L_40 = ((float)((float)((float)((float)(-0.75f)+(float)L_37))*(float)L_39));
		V_5 = L_40;
		GameObject_t159 * L_41 = (__this->___healthbar_15);
		NullCheck(L_41);
		Transform_t160 * L_42 = GameObject_get_transform_m1189(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t138  L_43 = Transform_get_localPosition_m1119(L_42, /*hidden argument*/NULL);
		Vector3_t138  L_44 = L_43;
		V_6 = L_44;
		float L_45 = V_5;
		float L_46 = L_45;
		V_11 = L_46;
		(&V_6)->___y_2 = L_46;
		float L_47 = V_11;
		GameObject_t159 * L_48 = (__this->___healthbar_15);
		NullCheck(L_48);
		Transform_t160 * L_49 = GameObject_get_transform_m1189(L_48, /*hidden argument*/NULL);
		Vector3_t138  L_50 = V_6;
		Vector3_t138  L_51 = L_50;
		V_12 = L_51;
		NullCheck(L_49);
		Transform_set_localPosition_m1112(L_49, L_51, /*hidden argument*/NULL);
		Vector3_t138  L_52 = V_12;
		GameObject_t159 * L_53 = (__this->___healthbar_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_54 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(SpriteRenderer_t281_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_53);
		Component_t112 * L_55 = GameObject_GetComponent_m1399(L_53, L_54, /*hidden argument*/NULL);
		float L_56 = (__this->___hscale_13);
		float L_57 = Mathf_Clamp_m1412(NULL /*static, unused*/, ((float)((float)(((float)((float)2)))-(float)((float)((float)L_56*(float)(((float)((float)2))))))), (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		float L_58 = (__this->___hscale_13);
		float L_59 = Mathf_Clamp_m1412(NULL /*static, unused*/, ((float)((float)L_58*(float)(((float)((float)2))))), (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		Color_t205  L_60 = {0};
		Color__ctor_m1458(&L_60, L_57, L_59, (((float)((float)0))), /*hidden argument*/NULL);
		NullCheck(((SpriteRenderer_t281 *)CastclassSealed(L_55, SpriteRenderer_t281_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_color_m1459(((SpriteRenderer_t281 *)CastclassSealed(L_55, SpriteRenderer_t281_il2cpp_TypeInfo_var)), L_60, /*hidden argument*/NULL);
		int32_t L_61 = (__this->___truckHealth_12);
		if ((((int32_t)L_61) > ((int32_t)0)))
		{
			goto IL_01a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		PhotonNetwork_Disconnect_m486(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_018c;
	}

IL_018c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		bool L_62 = PhotonNetwork_get_connected_m413(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_018c;
		}
	}
	{
		Application_LoadLevel_m1087(NULL /*static, unused*/, _stringLiteral475, /*hidden argument*/NULL);
	}

IL_01a0:
	{
		float L_63 = (__this->___hdiv_14);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_64 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_63, (((float)((float)0))), (0.05f), /*hidden argument*/NULL);
		__this->___hdiv_14 = L_64;
		int32_t L_65 = (__this->___spawn_17);
		int32_t L_66 = (__this->___enemyCount_6);
		__this->___spawn_17 = ((int32_t)((int32_t)L_65-(int32_t)((int32_t)((int32_t)5-(int32_t)L_66))));
		V_0 = (GameObject_t159 *)NULL;
		int32_t L_67 = (__this->___spawn_17);
		if ((((int32_t)L_67) > ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		__this->___spawn_17 = ((int32_t)4000);
		Transform_t160 * L_68 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t138  L_69 = Transform_get_position_m1160(L_68, /*hidden argument*/NULL);
		Transform_t160 * L_70 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t138  L_71 = Transform_get_up_m1453(L_70, /*hidden argument*/NULL);
		Vector3_t138  L_72 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_71, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_73 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_69, L_72, /*hidden argument*/NULL);
		Quaternion_t154  L_74 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		GameObject_t159 * L_75 = PhotonNetwork_Instantiate_m510(NULL /*static, unused*/, _stringLiteral476, L_73, L_74, 0, /*hidden argument*/NULL);
		V_0 = L_75;
		GameObject_t159 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(BuzzerScript_t290_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_76);
		Component_t112 * L_78 = GameObject_GetComponent_m1399(L_76, L_77, /*hidden argument*/NULL);
		NullCheck(((BuzzerScript_t290 *)CastclassClass(L_78, BuzzerScript_t290_il2cpp_TypeInfo_var)));
		Behaviour_set_enabled_m1268(((BuzzerScript_t290 *)CastclassClass(L_78, BuzzerScript_t290_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		int32_t L_79 = (__this->___enemyCount_6);
		__this->___enemyCount_6 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_80 = Input_GetKeyDown_m1092(NULL /*static, unused*/, ((int32_t)98), /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_02ac;
		}
	}
	{
		Transform_t160 * L_81 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t138  L_82 = Transform_get_position_m1160(L_81, /*hidden argument*/NULL);
		Transform_t160 * L_83 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector3_t138  L_84 = Transform_get_up_m1453(L_83, /*hidden argument*/NULL);
		Vector3_t138  L_85 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_84, (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		Vector3_t138  L_86 = Vector3_op_Subtraction_m919(NULL /*static, unused*/, L_82, L_85, /*hidden argument*/NULL);
		Quaternion_t154  L_87 = Quaternion_get_identity_m996(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t100_il2cpp_TypeInfo_var);
		GameObject_t159 * L_88 = PhotonNetwork_Instantiate_m510(NULL /*static, unused*/, _stringLiteral476, L_86, L_87, 0, /*hidden argument*/NULL);
		V_0 = L_88;
		GameObject_t159 * L_89 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(BuzzerScript_t290_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_89);
		Component_t112 * L_91 = GameObject_GetComponent_m1399(L_89, L_90, /*hidden argument*/NULL);
		NullCheck(((BuzzerScript_t290 *)CastclassClass(L_91, BuzzerScript_t290_il2cpp_TypeInfo_var)));
		Behaviour_set_enabled_m1268(((BuzzerScript_t290 *)CastclassClass(L_91, BuzzerScript_t290_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		int32_t L_92 = (__this->___enemyCount_6);
		__this->___enemyCount_6 = ((int32_t)((int32_t)L_92+(int32_t)1));
	}

IL_02ac:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t263_il2cpp_TypeInfo_var);
		bool L_93 = Input_GetKeyDown_m1092(NULL /*static, unused*/, ((int32_t)113), /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_02de;
		}
	}
	{
		Rigidbody2D_t140 * L_94 = (__this->___rigidBody_5);
		Transform_t160 * L_95 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t138  L_96 = Transform_get_right_m1454(L_95, /*hidden argument*/NULL);
		Vector3_t138  L_97 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_96, (((float)((float)((int32_t)40000)))), /*hidden argument*/NULL);
		Vector2_t162  L_98 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		NullCheck(L_94);
		Rigidbody2D_AddForce_m1231(L_94, L_98, /*hidden argument*/NULL);
	}

IL_02de:
	{
		Rigidbody2D_t140 * L_99 = (__this->___rigidBody_5);
		float L_100 = (__this->___wheelAngle_7);
		Quaternion_t154  L_101 = Quaternion_Euler_m1174(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), L_100, /*hidden argument*/NULL);
		Transform_t160 * L_102 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t138  L_103 = Transform_get_up_m1453(L_102, /*hidden argument*/NULL);
		Vector3_t138  L_104 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_101, L_103, /*hidden argument*/NULL);
		float L_105 = (__this->___rightWheel_3);
		Vector3_t138  L_106 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		float L_107 = (__this->___engine_4);
		Vector3_t138  L_108 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_106, L_107, /*hidden argument*/NULL);
		float L_109 = (__this->___wheelSpin_8);
		Vector3_t138  L_110 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_108, L_109, /*hidden argument*/NULL);
		Vector2_t162  L_111 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_110, /*hidden argument*/NULL);
		Transform_t160 * L_112 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		Vector3_t138  L_113 = Transform_get_right_m1454(L_112, /*hidden argument*/NULL);
		Transform_t160 * L_114 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		Vector3_t138  L_115 = Transform_get_position_m1160(L_114, /*hidden argument*/NULL);
		Vector3_t138  L_116 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_113, L_115, /*hidden argument*/NULL);
		Transform_t160 * L_117 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_117);
		Vector3_t138  L_118 = Transform_get_up_m1453(L_117, /*hidden argument*/NULL);
		Vector3_t138  L_119 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_116, L_118, /*hidden argument*/NULL);
		Vector2_t162  L_120 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		NullCheck(L_99);
		Rigidbody2D_AddForceAtPosition_m1460(L_99, L_111, L_120, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_121 = (__this->___rigidBody_5);
		float L_122 = (__this->___wheelAngle_7);
		Quaternion_t154  L_123 = Quaternion_Euler_m1174(NULL /*static, unused*/, (((float)((float)0))), (((float)((float)0))), L_122, /*hidden argument*/NULL);
		Transform_t160 * L_124 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t138  L_125 = Transform_get_up_m1453(L_124, /*hidden argument*/NULL);
		Vector3_t138  L_126 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_123, L_125, /*hidden argument*/NULL);
		float L_127 = (__this->___leftWheel_2);
		Vector3_t138  L_128 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_126, L_127, /*hidden argument*/NULL);
		float L_129 = (__this->___engine_4);
		Vector3_t138  L_130 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_128, L_129, /*hidden argument*/NULL);
		float L_131 = (__this->___wheelSpin_8);
		Vector3_t138  L_132 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		Vector2_t162  L_133 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		Transform_t160 * L_134 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_134);
		Vector3_t138  L_135 = Transform_get_right_m1454(L_134, /*hidden argument*/NULL);
		Vector3_t138  L_136 = Vector3_op_UnaryNegation_m1461(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		Transform_t160 * L_137 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		Vector3_t138  L_138 = Transform_get_position_m1160(L_137, /*hidden argument*/NULL);
		Vector3_t138  L_139 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_136, L_138, /*hidden argument*/NULL);
		Transform_t160 * L_140 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_140);
		Vector3_t138  L_141 = Transform_get_up_m1453(L_140, /*hidden argument*/NULL);
		Vector3_t138  L_142 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_139, L_141, /*hidden argument*/NULL);
		Vector2_t162  L_143 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
		NullCheck(L_121);
		Rigidbody2D_AddForceAtPosition_m1460(L_121, L_133, L_143, /*hidden argument*/NULL);
		return;
	}
}
// System.Void truckMove::move(UnityEngine.Vector2,System.Boolean)
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern "C" void truckMove_move_m1383 (truckMove_t301 * __this, Vector2_t162  ___mvmt, bool ___green, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t162  L_0 = ___mvmt;
		Vector2_t162  L_1 = Vector2_get_zero_m1194(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector2_op_Equality_m1462(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		float L_3 = (__this->___wheelSpin_8);
		float L_4 = (__this->___smoothing_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_3, (((float)((float)0))), L_4, /*hidden argument*/NULL);
		__this->___wheelSpin_8 = L_5;
		goto IL_0089;
	}

IL_002e:
	{
		float L_6 = ((&___mvmt)->___y_2);
		if ((((float)L_6) < ((float)(((float)((float)0))))))
		{
			goto IL_005e;
		}
	}
	{
		float L_7 = (__this->___wheelSpin_8);
		float L_8 = (__this->___smoothing_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_7, (((float)((float)1))), L_8, /*hidden argument*/NULL);
		__this->___wheelSpin_8 = L_9;
		goto IL_0089;
	}

IL_005e:
	{
		float L_10 = ((&___mvmt)->___y_2);
		if ((((float)L_10) >= ((float)(((float)((float)0))))))
		{
			goto IL_0089;
		}
	}
	{
		float L_11 = (__this->___wheelSpin_8);
		float L_12 = (__this->___smoothing_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_11, (((float)((float)(-1)))), L_12, /*hidden argument*/NULL);
		__this->___wheelSpin_8 = L_13;
	}

IL_0089:
	{
		float L_14 = (__this->___wheelAngle_7);
		float L_15 = ((&___mvmt)->___x_1);
		float L_16 = (__this->___turnRange_10);
		float L_17 = (__this->___smoothing_9);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Lerp_m1448(NULL /*static, unused*/, L_14, ((float)((float)((-L_15))*(float)L_16)), L_17, /*hidden argument*/NULL);
		__this->___wheelAngle_7 = L_18;
		return;
	}
}
// System.Void truckMove::occupy()
extern "C" void truckMove_occupy_m1384 (truckMove_t301 * __this, const MethodInfo* method)
{
	{
		__this->___isOccupied_16 = 1;
		return;
	}
}
// System.Void truckMove::unOccupy()
extern "C" void truckMove_unOccupy_m1385 (truckMove_t301 * __this, const MethodInfo* method)
{
	{
		__this->___isOccupied_16 = 0;
		return;
	}
}
// System.Void truckMove::damage(System.Int32)
extern "C" void truckMove_damage_m1386 (truckMove_t301 * __this, int32_t ___d, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___truckHealth_12);
		int32_t L_1 = ___d;
		__this->___truckHealth_12 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		float L_2 = (__this->___hdiv_14);
		int32_t L_3 = ___d;
		__this->___hdiv_14 = ((float)((float)L_2+(float)(((float)((float)L_3)))));
		return;
	}
}
// System.Void truckMove::OnPhotonSerializeView(PhotonStream,System.Object)
extern TypeInfo* Single_t249_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t320_il2cpp_TypeInfo_var;
extern "C" void truckMove_OnPhotonSerializeView_m1387 (truckMove_t301 * __this, PhotonStream_t85 * ___stream, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		RuntimeServices_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonStream_t85 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m348(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		PhotonStream_t85 * L_2 = ___stream;
		float L_3 = (__this->___wheelSpin_8);
		float L_4 = L_3;
		Object_t * L_5 = Box(Single_t249_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		PhotonStream_SendNext_m353(L_2, L_5, /*hidden argument*/NULL);
		PhotonStream_t85 * L_6 = ___stream;
		float L_7 = (__this->___wheelAngle_7);
		float L_8 = L_7;
		Object_t * L_9 = Box(Single_t249_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		PhotonStream_SendNext_m353(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0032:
	{
		PhotonStream_t85 * L_10 = ___stream;
		NullCheck(L_10);
		Object_t * L_11 = PhotonStream_ReceiveNext_m351(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t320_il2cpp_TypeInfo_var);
		float L_12 = RuntimeServices_UnboxSingle_m1463(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->___wheelSpin_8 = L_12;
		PhotonStream_t85 * L_13 = ___stream;
		NullCheck(L_13);
		Object_t * L_14 = PhotonStream_ReceiveNext_m351(L_13, /*hidden argument*/NULL);
		float L_15 = RuntimeServices_UnboxSingle_m1463(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		__this->___wheelAngle_7 = L_15;
	}

IL_0054:
	{
		return;
	}
}
// System.Void truckMove::Main()
extern "C" void truckMove_Main_m1388 (truckMove_t301 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void turretMove::.ctor()
extern "C" void turretMove__ctor_m1389 (turretMove_t315 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1024(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void turretMove::Start()
extern Il2CppCodeGenString* _stringLiteral477;
extern "C" void turretMove_Start_m1390 (turretMove_t315 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___speed_4);
		__this->___shot_delay_5 = L_0;
		GameObject_t159 * L_1 = GameObject_Find_m1272(NULL /*static, unused*/, _stringLiteral477, /*hidden argument*/NULL);
		__this->___Net_11 = L_1;
		return;
	}
}
// System.Void turretMove::Update()
extern "C" void turretMove_Update_m1391 (turretMove_t315 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void turretMove::move(UnityEngine.Vector2,System.Object)
extern const Il2CppType* PhotonView_t83_0_0_0_var;
extern TypeInfo* Vector3_t138_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t221_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t320_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* PhotonView_t83_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t111_il2cpp_TypeInfo_var;
extern TypeInfo* Quaternion_t154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral478;
extern "C" void turretMove_move_m1392 (turretMove_t315 * __this, Vector2_t162  ___mvmt, Object_t * ___green, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PhotonView_t83_0_0_0_var = il2cpp_codegen_type_from_index(34);
		Vector3_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Mathf_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		RuntimeServices_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		PhotonView_t83_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		ObjectU5BU5D_t111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Quaternion_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral478 = il2cpp_codegen_string_literal_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t138  V_0 = {0};
	Transform_t160 * V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Quaternion_t154  V_5 = {0};
	Vector3_t138  V_6 = {0};
	float V_7 = 0.0f;
	Quaternion_t154  V_8 = {0};
	Vector3_t138  V_9 = {0};
	float V_10 = 0.0f;
	Quaternion_t154  V_11 = {0};
	Vector3_t138  V_12 = {0};
	float V_13 = 0.0f;
	Quaternion_t154  V_14 = {0};
	Vector3_t138  V_15 = {0};
	Quaternion_t154  V_16 = {0};
	Vector3_t138  V_17 = {0};
	float V_18 = 0.0f;
	Vector3_t138  V_19 = {0};
	Quaternion_t154  V_20 = {0};
	Quaternion_t154  V_21 = {0};
	Vector3_t138  V_22 = {0};
	float V_23 = 0.0f;
	Vector3_t138  V_24 = {0};
	Quaternion_t154  V_25 = {0};
	Quaternion_t154  V_26 = {0};
	Vector3_t138  V_27 = {0};
	Quaternion_t154  V_28 = {0};
	Vector3_t138  V_29 = {0};
	float V_30 = 0.0f;
	Vector3_t138  V_31 = {0};
	Quaternion_t154  V_32 = {0};
	Quaternion_t154  V_33 = {0};
	Vector3_t138  V_34 = {0};
	Quaternion_t154  V_35 = {0};
	Vector3_t138  V_36 = {0};
	float V_37 = 0.0f;
	Vector3_t138  V_38 = {0};
	Quaternion_t154  V_39 = {0};
	{
		Initobj (Vector3_t138_il2cpp_TypeInfo_var, (&V_0));
		V_1 = (Transform_t160 *)NULL;
		float L_0 = ((&___mvmt)->___y_2);
		float L_1 = ((&___mvmt)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t221_il2cpp_TypeInfo_var);
		float L_2 = atan2f(L_0, L_1);
		V_2 = ((float)((float)((float)((float)L_2*(float)(((float)((float)((int32_t)180))))))/(float)(3.14159274f)));
		float L_3 = V_2;
		Rigidbody2D_t140 * L_4 = (__this->___rb_3);
		NullCheck(L_4);
		float L_5 = Rigidbody2D_get_rotation_m1451(L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_3+(float)L_5));
		Vector2_t162  L_6 = ___mvmt;
		Vector2_t162  L_7 = Vector2_get_zero_m1194(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_8 = Vector2_op_Inequality_m1455(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		Transform_t160 * L_9 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Transform_t160 * L_10 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t154  L_11 = Transform_get_rotation_m1271(L_10, /*hidden argument*/NULL);
		float L_12 = V_2;
		Vector3_t138  L_13 = {0};
		Vector3__ctor_m1191(&L_13, (((float)((float)0))), (((float)((float)0))), L_12, /*hidden argument*/NULL);
		Quaternion_t154  L_14 = Quaternion_Euler_m1427(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Quaternion_t154  L_15 = Quaternion_RotateTowards_m1181(NULL /*static, unused*/, L_11, L_14, (((float)((float)2))), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m1193(L_9, L_15, /*hidden argument*/NULL);
	}

IL_007d:
	{
		float L_16 = (__this->___max_angle_6);
		float L_17 = (__this->___min_angle_7);
		if ((((float)L_16) <= ((float)L_17)))
		{
			goto IL_0192;
		}
	}
	{
		Transform_t160 * L_18 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t154  L_19 = Transform_get_localRotation_m1120(L_18, /*hidden argument*/NULL);
		V_16 = L_19;
		Vector3_t138  L_20 = Quaternion_get_eulerAngles_m1401((&V_16), /*hidden argument*/NULL);
		V_17 = L_20;
		float L_21 = ((&V_17)->___z_3);
		float L_22 = (__this->___min_angle_7);
		if ((((float)L_21) >= ((float)L_22)))
		{
			goto IL_0110;
		}
	}
	{
		float L_23 = (__this->___min_angle_7);
		float L_24 = L_23;
		V_4 = L_24;
		Transform_t160 * L_25 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Quaternion_t154  L_26 = Transform_get_localRotation_m1120(L_25, /*hidden argument*/NULL);
		Quaternion_t154  L_27 = L_26;
		V_5 = L_27;
		Vector3_t138  L_28 = Quaternion_get_eulerAngles_m1401((&V_5), /*hidden argument*/NULL);
		Vector3_t138  L_29 = L_28;
		V_6 = L_29;
		float L_30 = V_4;
		float L_31 = L_30;
		V_18 = L_31;
		(&V_6)->___z_3 = L_31;
		float L_32 = V_18;
		Vector3_t138  L_33 = V_6;
		Vector3_t138  L_34 = L_33;
		V_19 = L_34;
		Quaternion_set_eulerAngles_m1403((&V_5), L_34, /*hidden argument*/NULL);
		Vector3_t138  L_35 = V_19;
		Transform_t160 * L_36 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_37 = V_5;
		Quaternion_t154  L_38 = L_37;
		V_20 = L_38;
		NullCheck(L_36);
		Transform_set_localRotation_m1113(L_36, L_38, /*hidden argument*/NULL);
		Quaternion_t154  L_39 = V_20;
		goto IL_018d;
	}

IL_0110:
	{
		Transform_t160 * L_40 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Quaternion_t154  L_41 = Transform_get_localRotation_m1120(L_40, /*hidden argument*/NULL);
		V_21 = L_41;
		Vector3_t138  L_42 = Quaternion_get_eulerAngles_m1401((&V_21), /*hidden argument*/NULL);
		V_22 = L_42;
		float L_43 = ((&V_22)->___z_3);
		float L_44 = (__this->___max_angle_6);
		if ((((float)L_43) <= ((float)L_44)))
		{
			goto IL_018d;
		}
	}
	{
		float L_45 = (__this->___max_angle_6);
		float L_46 = L_45;
		V_7 = L_46;
		Transform_t160 * L_47 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		Quaternion_t154  L_48 = Transform_get_localRotation_m1120(L_47, /*hidden argument*/NULL);
		Quaternion_t154  L_49 = L_48;
		V_8 = L_49;
		Vector3_t138  L_50 = Quaternion_get_eulerAngles_m1401((&V_8), /*hidden argument*/NULL);
		Vector3_t138  L_51 = L_50;
		V_9 = L_51;
		float L_52 = V_7;
		float L_53 = L_52;
		V_23 = L_53;
		(&V_9)->___z_3 = L_53;
		float L_54 = V_23;
		Vector3_t138  L_55 = V_9;
		Vector3_t138  L_56 = L_55;
		V_24 = L_56;
		Quaternion_set_eulerAngles_m1403((&V_8), L_56, /*hidden argument*/NULL);
		Vector3_t138  L_57 = V_24;
		Transform_t160 * L_58 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_59 = V_8;
		Quaternion_t154  L_60 = L_59;
		V_25 = L_60;
		NullCheck(L_58);
		Transform_set_localRotation_m1113(L_58, L_60, /*hidden argument*/NULL);
		Quaternion_t154  L_61 = V_25;
	}

IL_018d:
	{
		goto IL_02f5;
	}

IL_0192:
	{
		Transform_t160 * L_62 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Quaternion_t154  L_63 = Transform_get_localRotation_m1120(L_62, /*hidden argument*/NULL);
		V_26 = L_63;
		Vector3_t138  L_64 = Quaternion_get_eulerAngles_m1401((&V_26), /*hidden argument*/NULL);
		V_27 = L_64;
		float L_65 = ((&V_27)->___z_3);
		float L_66 = (__this->___min_angle_7);
		if ((((float)L_65) >= ((float)L_66)))
		{
			goto IL_0246;
		}
	}
	{
		Transform_t160 * L_67 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Quaternion_t154  L_68 = Transform_get_localRotation_m1120(L_67, /*hidden argument*/NULL);
		V_28 = L_68;
		Vector3_t138  L_69 = Quaternion_get_eulerAngles_m1401((&V_28), /*hidden argument*/NULL);
		V_29 = L_69;
		float L_70 = ((&V_29)->___z_3);
		float L_71 = (__this->___max_angle_6);
		float L_72 = (__this->___min_angle_7);
		if ((((float)L_70) <= ((float)((float)((float)((float)((float)L_71+(float)L_72))/(float)(((float)((float)2))))))))
		{
			goto IL_0246;
		}
	}
	{
		float L_73 = (__this->___min_angle_7);
		float L_74 = L_73;
		V_10 = L_74;
		Transform_t160 * L_75 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		Quaternion_t154  L_76 = Transform_get_localRotation_m1120(L_75, /*hidden argument*/NULL);
		Quaternion_t154  L_77 = L_76;
		V_11 = L_77;
		Vector3_t138  L_78 = Quaternion_get_eulerAngles_m1401((&V_11), /*hidden argument*/NULL);
		Vector3_t138  L_79 = L_78;
		V_12 = L_79;
		float L_80 = V_10;
		float L_81 = L_80;
		V_30 = L_81;
		(&V_12)->___z_3 = L_81;
		float L_82 = V_30;
		Vector3_t138  L_83 = V_12;
		Vector3_t138  L_84 = L_83;
		V_31 = L_84;
		Quaternion_set_eulerAngles_m1403((&V_11), L_84, /*hidden argument*/NULL);
		Vector3_t138  L_85 = V_31;
		Transform_t160 * L_86 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_87 = V_11;
		Quaternion_t154  L_88 = L_87;
		V_32 = L_88;
		NullCheck(L_86);
		Transform_set_localRotation_m1113(L_86, L_88, /*hidden argument*/NULL);
		Quaternion_t154  L_89 = V_32;
		goto IL_02f5;
	}

IL_0246:
	{
		Transform_t160 * L_90 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Quaternion_t154  L_91 = Transform_get_localRotation_m1120(L_90, /*hidden argument*/NULL);
		V_33 = L_91;
		Vector3_t138  L_92 = Quaternion_get_eulerAngles_m1401((&V_33), /*hidden argument*/NULL);
		V_34 = L_92;
		float L_93 = ((&V_34)->___z_3);
		float L_94 = (__this->___max_angle_6);
		if ((((float)L_93) <= ((float)L_94)))
		{
			goto IL_02f5;
		}
	}
	{
		Transform_t160 * L_95 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_95);
		Quaternion_t154  L_96 = Transform_get_localRotation_m1120(L_95, /*hidden argument*/NULL);
		V_35 = L_96;
		Vector3_t138  L_97 = Quaternion_get_eulerAngles_m1401((&V_35), /*hidden argument*/NULL);
		V_36 = L_97;
		float L_98 = ((&V_36)->___z_3);
		float L_99 = (__this->___max_angle_6);
		float L_100 = (__this->___min_angle_7);
		if ((((float)L_98) >= ((float)((float)((float)((float)((float)L_99+(float)L_100))/(float)(((float)((float)2))))))))
		{
			goto IL_02f5;
		}
	}
	{
		float L_101 = (__this->___max_angle_6);
		float L_102 = L_101;
		V_13 = L_102;
		Transform_t160 * L_103 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_103);
		Quaternion_t154  L_104 = Transform_get_localRotation_m1120(L_103, /*hidden argument*/NULL);
		Quaternion_t154  L_105 = L_104;
		V_14 = L_105;
		Vector3_t138  L_106 = Quaternion_get_eulerAngles_m1401((&V_14), /*hidden argument*/NULL);
		Vector3_t138  L_107 = L_106;
		V_15 = L_107;
		float L_108 = V_13;
		float L_109 = L_108;
		V_37 = L_109;
		(&V_15)->___z_3 = L_109;
		float L_110 = V_37;
		Vector3_t138  L_111 = V_15;
		Vector3_t138  L_112 = L_111;
		V_38 = L_112;
		Quaternion_set_eulerAngles_m1403((&V_14), L_112, /*hidden argument*/NULL);
		Vector3_t138  L_113 = V_38;
		Transform_t160 * L_114 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		Quaternion_t154  L_115 = V_14;
		Quaternion_t154  L_116 = L_115;
		V_39 = L_116;
		NullCheck(L_114);
		Transform_set_localRotation_m1113(L_114, L_116, /*hidden argument*/NULL);
		Quaternion_t154  L_117 = V_39;
	}

IL_02f5:
	{
		int32_t L_118 = (__this->___shot_delay_5);
		if ((((int32_t)L_118) > ((int32_t)0)))
		{
			goto IL_03b1;
		}
	}
	{
		Object_t * L_119 = ___green;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t320_il2cpp_TypeInfo_var);
		bool L_120 = RuntimeServices_ToBool_m1464(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		if (!L_120)
		{
			goto IL_03ac;
		}
	}
	{
		V_3 = 0;
		goto IL_0394;
	}

IL_0313:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_121 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(PhotonView_t83_0_0_0_var), /*hidden argument*/NULL);
		Component_t112 * L_122 = Component_GetComponent_m1407(__this, L_121, /*hidden argument*/NULL);
		ObjectU5BU5D_t111* L_123 = ((ObjectU5BU5D_t111*)SZArrayNew(ObjectU5BU5D_t111_il2cpp_TypeInfo_var, 2));
		Transform_t160 * L_124 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t138  L_125 = Transform_get_position_m1160(L_124, /*hidden argument*/NULL);
		Transform_t160 * L_126 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_126);
		Vector3_t138  L_127 = Transform_get_right_m1454(L_126, /*hidden argument*/NULL);
		Vector3_t138  L_128 = Vector3_op_Addition_m1164(NULL /*static, unused*/, L_125, L_127, /*hidden argument*/NULL);
		Vector3_t138  L_129 = L_128;
		Object_t * L_130 = Box(Vector3_t138_il2cpp_TypeInfo_var, &L_129);
		NullCheck(L_123);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_123, 0);
		ArrayElementTypeCheck (L_123, L_130);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_123, 0, sizeof(Object_t *))) = (Object_t *)L_130;
		ObjectU5BU5D_t111* L_131 = L_123;
		Transform_t160 * L_132 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_132);
		Quaternion_t154  L_133 = Transform_get_rotation_m1271(L_132, /*hidden argument*/NULL);
		float L_134 = (__this->___spread_9);
		float L_135 = (__this->___spread_9);
		float L_136 = Random_Range_m1457(NULL /*static, unused*/, ((-L_134)), L_135, /*hidden argument*/NULL);
		Vector3_t138  L_137 = Vector3_get_forward_m1233(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t154  L_138 = Quaternion_AngleAxis_m1452(NULL /*static, unused*/, L_136, L_137, /*hidden argument*/NULL);
		Quaternion_t154  L_139 = Quaternion_op_Multiply_m1465(NULL /*static, unused*/, L_133, L_138, /*hidden argument*/NULL);
		Quaternion_t154  L_140 = L_139;
		Object_t * L_141 = Box(Quaternion_t154_il2cpp_TypeInfo_var, &L_140);
		NullCheck(L_131);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_131, 1);
		ArrayElementTypeCheck (L_131, L_141);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_131, 1, sizeof(Object_t *))) = (Object_t *)L_141;
		NullCheck(((PhotonView_t83 *)CastclassClass(L_122, PhotonView_t83_il2cpp_TypeInfo_var)));
		PhotonView_RPC_m596(((PhotonView_t83 *)CastclassClass(L_122, PhotonView_t83_il2cpp_TypeInfo_var)), _stringLiteral478, 0, L_131, /*hidden argument*/NULL);
		int32_t L_142 = V_3;
		V_3 = ((int32_t)((int32_t)L_142+(int32_t)1));
	}

IL_0394:
	{
		int32_t L_143 = V_3;
		int32_t L_144 = (__this->___shots_8);
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_0313;
		}
	}
	{
		int32_t L_145 = (__this->___speed_4);
		__this->___shot_delay_5 = L_145;
	}

IL_03ac:
	{
		goto IL_03bf;
	}

IL_03b1:
	{
		int32_t L_146 = (__this->___shot_delay_5);
		__this->___shot_delay_5 = ((int32_t)((int32_t)L_146-(int32_t)1));
	}

IL_03bf:
	{
		return;
	}
}
// System.Void turretMove::fire(UnityEngine.Vector3,UnityEngine.Quaternion)
extern const Il2CppType* Rigidbody2D_t140_0_0_0_var;
extern TypeInfo* GameObject_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t140_il2cpp_TypeInfo_var;
extern "C" void turretMove_fire_m1393 (turretMove_t315 * __this, Vector3_t138  ___pos, Quaternion_t154  ___rot, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Rigidbody2D_t140_0_0_0_var = il2cpp_codegen_type_from_index(129);
		GameObject_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(65);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Rigidbody2D_t140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t159 * V_0 = {0};
	{
		GameObject_t159 * L_0 = (__this->___Bullet_2);
		Vector3_t138  L_1 = ___pos;
		Quaternion_t154  L_2 = ___rot;
		Object_t238 * L_3 = Object_Instantiate_m1001(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t159 *)IsInstSealed(((GameObject_t159 *)CastclassSealed(L_3, GameObject_t159_il2cpp_TypeInfo_var)), GameObject_t159_il2cpp_TypeInfo_var));
		GameObject_t159 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m907(NULL /*static, unused*/, LoadTypeToken(Rigidbody2D_t140_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Component_t112 * L_6 = GameObject_GetComponent_m1399(L_4, L_5, /*hidden argument*/NULL);
		Rigidbody2D_t140 * L_7 = (__this->___rb_3);
		Transform_t160 * L_8 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t138  L_9 = Transform_get_position_m1160(L_8, /*hidden argument*/NULL);
		Vector2_t162  L_10 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector2_t162  L_11 = Rigidbody2D_GetPointVelocity_m1435(L_7, L_10, /*hidden argument*/NULL);
		GameObject_t159 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t160 * L_13 = GameObject_get_transform_m1189(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t154  L_14 = Transform_get_rotation_m1271(L_13, /*hidden argument*/NULL);
		Vector2_t162  L_15 = Vector2_get_right_m1416(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t138  L_16 = Vector2_op_Implicit_m1220(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Vector3_t138  L_17 = Quaternion_op_Multiply_m1175(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		Vector3_t138  L_18 = Vector3_op_Multiply_m932(NULL /*static, unused*/, L_17, (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		Vector2_t162  L_19 = Vector2_op_Implicit_m1212(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Vector2_t162  L_20 = Vector2_op_Addition_m1430(NULL /*static, unused*/, L_11, L_19, /*hidden argument*/NULL);
		NullCheck(((Rigidbody2D_t140 *)CastclassSealed(L_6, Rigidbody2D_t140_il2cpp_TypeInfo_var)));
		Rigidbody2D_set_velocity_m1117(((Rigidbody2D_t140 *)CastclassSealed(L_6, Rigidbody2D_t140_il2cpp_TypeInfo_var)), L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void turretMove::occupy()
extern "C" void turretMove_occupy_m1394 (turretMove_t315 * __this, const MethodInfo* method)
{
	{
		__this->___isOccupied_10 = 1;
		return;
	}
}
// System.Void turretMove::unOccupy()
extern "C" void turretMove_unOccupy_m1395 (turretMove_t315 * __this, const MethodInfo* method)
{
	{
		__this->___isOccupied_10 = 0;
		return;
	}
}
// System.Void turretMove::OnPhotonSerializeView(PhotonStream,System.Object)
extern TypeInfo* Quaternion_t154_il2cpp_TypeInfo_var;
extern "C" void turretMove_OnPhotonSerializeView_m1396 (turretMove_t315 * __this, PhotonStream_t85 * ___stream, Object_t * ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quaternion_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		PhotonStream_t85 * L_0 = ___stream;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_isWriting_m348(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		PhotonStream_t85 * L_2 = ___stream;
		Transform_t160 * L_3 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t154  L_4 = Transform_get_localRotation_m1120(L_3, /*hidden argument*/NULL);
		Quaternion_t154  L_5 = L_4;
		Object_t * L_6 = Box(Quaternion_t154_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_m353(L_2, L_6, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0026:
	{
		Transform_t160 * L_7 = Component_get_transform_m1159(__this, /*hidden argument*/NULL);
		PhotonStream_t85 * L_8 = ___stream;
		NullCheck(L_8);
		Object_t * L_9 = PhotonStream_ReceiveNext_m351(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_m1113(L_7, (*(Quaternion_t154 *)((Quaternion_t154 *)UnBox (L_9, Quaternion_t154_il2cpp_TypeInfo_var))), /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void turretMove::Main()
extern "C" void turretMove_Main_m1397 (turretMove_t315 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
