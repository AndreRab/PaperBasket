#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraAnchor
struct CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CoinSpawner
struct CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PaperSpawner
struct PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RewaedAds
struct RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.SpringJoint2D
struct SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UI_Manager
struct UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// ViewportHandler
struct ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// basSpawner
struct basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619;
// basketSpawner
struct basketSpawner_t5954453D7E28268EA616093F9F2B6634FCA85D73;
// coincollider
struct coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9;
// hitPaper
struct hitPaper_tB6BC81677C9A66EC7DFF4688B8BAD9E50F628C23;
// hitbasket
struct hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B;
// paper
struct paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42;
// paperPositionFindeer
struct paperPositionFindeer_t7896A61D94B65ECA2F326DCBFB55371467B5ED3B;
// shopmanager
struct shopmanager_tBEE35C8D9CAD809F1873E1F884A87FBA4B76C1B3;
// statics
struct statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CameraAnchor/<UpdateAnchorAsync>d__5
struct U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// coincollider/<LetDestroy>d__3
struct U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5;
// hitbasket/<LetDestroy>d__4
struct U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8;
// paper/<LetDestroy>d__12
struct U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144;
// paper/<LetGo>d__11
struct U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1469CA8FF993C523E460D54EC2A2705EAA8120A7;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral285705BDC348071344FEC49C8144DF7EC61E72B9;
IL2CPP_EXTERN_C String_t* _stringLiteral2B4CB989CF705BDB31F2D19B8AB3AB7081C4C9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA80C0D0C36A4C5272B480000BD32A5F490AE60;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA7B6F9F2EAEF04E7BC856652C6790E4F53FAC4;
IL2CPP_EXTERN_C String_t* _stringLiteral67664FC975C92C554710B7D52FDAE37C52312F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral868A674ED61F216CCB4A6241DDDB5C40F300C8B7;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5EDAB94EFEED4D545E174E3458A272FCA22F88;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056;
IL2CPP_EXTERN_C String_t* _stringLiteralB6DAB8860F5223B64111F9E4499C1F74233C000A;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D27438558ADF161CECAC58FCF940B12B812EEA;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralD47187048455FAF789F11ED1FB2411F252B87BEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD4B9C289A8487F757BE9A4D690FB50BA02F47E6F;
IL2CPP_EXTERN_C String_t* _stringLiteralD89C11BF7B3D690ACE1F31CDFAD2CDF08E1857FA;
IL2CPP_EXTERN_C String_t* _stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_m1F71A1AFFF94B49C3232CD2CE9EF8B2E867C8AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_mEA18037A5129471138884867EA7F4063DF328231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewaedAds_ShowAd_m48E8637C01CB129659D50EE22AF650A768CC5220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLetDestroyU3Ed__12_System_Collections_IEnumerator_Reset_mA98631A401C2C79A56901AE31F86C96DF01037D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLetDestroyU3Ed__3_System_Collections_IEnumerator_Reset_mEA9FC2D4D6F1BD5418172F748998CCF249FA8402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLetDestroyU3Ed__4_System_Collections_IEnumerator_Reset_m889D16FFE89EE2247EA08EF276A9CAD5937C8300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLetGoU3Ed__11_System_Collections_IEnumerator_Reset_mF656F61005AE1FE4ED844465E853C9D932914A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateAnchorAsyncU3Ed__5_System_Collections_IEnumerator_Reset_m3FD3C16DB5039FC4576E2B3569894967437AADCF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CameraAnchor/<UpdateAnchorAsync>d__5
struct U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE  : public RuntimeObject
{
	// System.Int32 CameraAnchor/<UpdateAnchorAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraAnchor/<UpdateAnchorAsync>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CameraAnchor CameraAnchor/<UpdateAnchorAsync>d__5::<>4__this
	CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* ___U3CU3E4__this_2;
	// System.UInt32 CameraAnchor/<UpdateAnchorAsync>d__5::<cameraWaitCycles>5__2
	uint32_t ___U3CcameraWaitCyclesU3E5__2_3;
};

// coincollider/<LetDestroy>d__3
struct U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5  : public RuntimeObject
{
	// System.Int32 coincollider/<LetDestroy>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object coincollider/<LetDestroy>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// coincollider coincollider/<LetDestroy>d__3::<>4__this
	coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* ___U3CU3E4__this_2;
};

// hitbasket/<LetDestroy>d__4
struct U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8  : public RuntimeObject
{
	// System.Int32 hitbasket/<LetDestroy>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object hitbasket/<LetDestroy>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// hitbasket hitbasket/<LetDestroy>d__4::<>4__this
	hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* ___U3CU3E4__this_2;
};

// paper/<LetDestroy>d__12
struct U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144  : public RuntimeObject
{
	// System.Int32 paper/<LetDestroy>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object paper/<LetDestroy>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// paper paper/<LetDestroy>d__12::<>4__this
	paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* ___U3CU3E4__this_2;
};

// paper/<LetGo>d__11
struct U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80  : public RuntimeObject
{
	// System.Int32 paper/<LetGo>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object paper/<LetGo>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// paper paper/<LetGo>d__11::<>4__this
	paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Joint2D
struct Joint2D_tFA088656425446CDA98555EC8A0E5FE25945F843  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AdsInitializer
struct AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsInitializer::androidGameID
	String_t* ___androidGameID_4;
	// System.String AdsInitializer::iOSGameID
	String_t* ___iOSGameID_5;
	// System.Boolean AdsInitializer::testMode
	bool ___testMode_6;
	// System.String AdsInitializer::gameID
	String_t* ___gameID_7;
};

// UnityEngine.AnchoredJoint2D
struct AnchoredJoint2D_t912CA383672E7BBF63D331BEA84F794488864C63  : public Joint2D_tFA088656425446CDA98555EC8A0E5FE25945F843
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraAnchor
struct CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CameraAnchor/AnchorType CameraAnchor::anchorType
	int32_t ___anchorType_4;
	// UnityEngine.Vector3 CameraAnchor::anchorOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchorOffset_5;
	// System.Collections.IEnumerator CameraAnchor::updateAnchorRoutine
	RuntimeObject* ___updateAnchorRoutine_6;
};

// CoinSpawner
struct CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CoinSpawner::coin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coin_4;
	// UnityEngine.AudioSource CoinSpawner::pickup
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___pickup_5;
};

// InterstitialAds
struct InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String InterstitialAds::androidAdID
	String_t* ___androidAdID_4;
	// System.String InterstitialAds::iOSAdID
	String_t* ___iOSAdID_5;
	// System.String InterstitialAds::adID
	String_t* ___adID_6;
};

// PaperSpawner
struct PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PaperSpawner::stockPaper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stockPaper_4;
	// UnityEngine.GameObject PaperSpawner::Paper1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Paper1_5;
	// UnityEngine.GameObject PaperSpawner::Paper2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Paper2_6;
	// UnityEngine.GameObject PaperSpawner::Iphone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Iphone_7;
	// UnityEngine.Vector2 PaperSpawner::start_position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start_position_8;
	// UnityEngine.GameObject PaperSpawner::paper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___paper_9;
};

// RewaedAds
struct RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button RewaedAds::buttonShowAd
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonShowAd_4;
	// System.String RewaedAds::androidAdID
	String_t* ___androidAdID_5;
	// System.String RewaedAds::iOSAdID
	String_t* ___iOSAdID_6;
	// System.String RewaedAds::adID
	String_t* ___adID_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UI_Manager
struct UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UI_Manager::txt_available
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txt_available_4;
	// UnityEngine.UI.Text[] UI_Manager::txt_count
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___txt_count_5;
	// UnityEngine.UI.Text[] UI_Manager::txt_bestscore
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___txt_bestscore_6;
	// UnityEngine.UI.Text[] UI_Manager::txt_coins
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___txt_coins_7;
	// UnityEngine.GameObject UI_Manager::infText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___infText_8;
	// UnityEngine.GameObject UI_Manager::diedpanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___diedpanel_9;
	// UnityEngine.GameObject UI_Manager::StartPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StartPanel_10;
	// UnityEngine.GameObject UI_Manager::PausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PausePanel_11;
	// UnityEngine.GameObject UI_Manager::newScoreText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newScoreText_12;
	// UnityEngine.GameObject UI_Manager::shop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shop_13;
	// UnityEngine.GameObject[] UI_Manager::baskets
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___baskets_14;
	// UnityEngine.GameObject UI_Manager::startPaper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startPaper_15;
	// UnityEngine.GameObject[] UI_Manager::SoundOn
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___SoundOn_16;
	// UnityEngine.GameObject[] UI_Manager::SoundOf
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___SoundOf_17;
	// UnityEngine.AudioSource[] UI_Manager::audios
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___audios_18;
	// UnityEngine.AudioListener UI_Manager::listen
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___listen_19;
	// UnityEngine.GameObject[] UI_Manager::papers
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___papers_20;
	// InterstitialAds UI_Manager::ad
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* ___ad_21;
	// RewaedAds UI_Manager::Rad
	RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* ___Rad_22;
};

// ViewportHandler
struct ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color ViewportHandler::wireColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___wireColor_4;
	// System.Single ViewportHandler::UnitsSize
	float ___UnitsSize_5;
	// ViewportHandler/Constraint ViewportHandler::constraint
	int32_t ___constraint_6;
	// UnityEngine.Camera ViewportHandler::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_8;
	// System.Single ViewportHandler::_width
	float ____width_9;
	// System.Single ViewportHandler::_height
	float ____height_10;
	// UnityEngine.Vector3 ViewportHandler::_bl
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bl_11;
	// UnityEngine.Vector3 ViewportHandler::_bc
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____bc_12;
	// UnityEngine.Vector3 ViewportHandler::_br
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____br_13;
	// UnityEngine.Vector3 ViewportHandler::_ml
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____ml_14;
	// UnityEngine.Vector3 ViewportHandler::_mc
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____mc_15;
	// UnityEngine.Vector3 ViewportHandler::_mr
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____mr_16;
	// UnityEngine.Vector3 ViewportHandler::_tl
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____tl_17;
	// UnityEngine.Vector3 ViewportHandler::_tc
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____tc_18;
	// UnityEngine.Vector3 ViewportHandler::_tr
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____tr_19;
};

struct ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields
{
	// ViewportHandler ViewportHandler::Instance
	ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* ___Instance_7;
};

// basSpawner
struct basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject basSpawner::stockBasket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stockBasket_4;
	// UnityEngine.GameObject basSpawner::RabauBasket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RabauBasket_5;
	// UnityEngine.GameObject basSpawner::basket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___basket_6;
	// UnityEngine.Rigidbody2D basSpawner::Rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___Rigid_7;
};

// basketSpawner
struct basketSpawner_t5954453D7E28268EA616093F9F2B6634FCA85D73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject basketSpawner::Basket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Basket_4;
	// UnityEngine.Rigidbody2D basketSpawner::RigidBasket
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RigidBasket_5;
	// UnityEngine.Vector2 basketSpawner::start_position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start_position_6;
	// UnityEngine.Vector2 basketSpawner::new_position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___new_position_7;
	// UnityEngine.Quaternion basketSpawner::start_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___start_rotation_8;
	// UnityEngine.Quaternion basketSpawner::new_rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___new_rotation_9;
};

// coincollider
struct coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject coincollider::coin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coin_4;
};

// hitPaper
struct hitPaper_tB6BC81677C9A66EC7DFF4688B8BAD9E50F628C23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// hitbasket
struct hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject hitbasket::paper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___paper_4;
	// UnityEngine.AudioSource hitbasket::pickup
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___pickup_5;
	// UnityEngine.GameObject hitbasket::basket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___basket_6;
};

// paper
struct paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean paper::isPressed
	bool ___isPressed_4;
	// System.Single paper::maxDistance
	float ___maxDistance_5;
	// UnityEngine.Rigidbody2D paper::RigidPaper
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___RigidPaper_6;
	// UnityEngine.Rigidbody2D paper::ShootRigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___ShootRigid_7;
	// UnityEngine.GameObject paper::paperObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___paperObject_8;
	// System.Boolean paper::isTouch
	bool ___isTouch_9;
	// System.Boolean paper::canRemove
	bool ___canRemove_10;
};

// paperPositionFindeer
struct paperPositionFindeer_t7896A61D94B65ECA2F326DCBFB55371467B5ED3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D paperPositionFindeer::Rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___Rigid_4;
};

// shopmanager
struct shopmanager_tBEE35C8D9CAD809F1873E1F884A87FBA4B76C1B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject shopmanager::buy1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buy1_4;
	// UnityEngine.GameObject shopmanager::select1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___select1_5;
	// UnityEngine.GameObject shopmanager::buy2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buy2_6;
	// UnityEngine.GameObject shopmanager::select2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___select2_7;
	// UnityEngine.GameObject shopmanager::buyIphone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buyIphone_8;
	// UnityEngine.GameObject shopmanager::selectIphone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectIphone_9;
	// UnityEngine.GameObject shopmanager::buyRabau
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buyRabau_10;
	// UnityEngine.GameObject shopmanager::selectRabau
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectRabau_11;
};

// statics
struct statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields
{
	// System.Boolean statics::scriptActive
	bool ___scriptActive_4;
	// System.Boolean statics::isTouch
	bool ___isTouch_5;
	// System.Boolean statics::canSpawn
	bool ___canSpawn_6;
	// System.Boolean statics::canReSpawnBasket
	bool ___canReSpawnBasket_7;
	// System.Boolean statics::canSpawnBasket
	bool ___canSpawnBasket_8;
	// System.Boolean statics::canMoveBasket
	bool ___canMoveBasket_9;
	// System.Boolean statics::hasOneInShoot
	bool ___hasOneInShoot_10;
	// System.Boolean statics::finishGame
	bool ___finishGame_11;
	// System.Boolean statics::firstStart
	bool ___firstStart_12;
	// System.Boolean statics::wasAdd
	bool ___wasAdd_13;
	// System.Boolean statics::inShop
	bool ___inShop_14;
	// System.Int32 statics::prevScore
	int32_t ___prevScore_15;
	// System.Int32 statics::score
	int32_t ___score_16;
	// System.Int32 statics::avaliblePaper
	int32_t ___avaliblePaper_17;
	// System.Int32 statics::bestScore
	int32_t ___bestScore_18;
	// System.Int32 statics::coins
	int32_t ___coins_19;
	// System.String statics::typePaper
	String_t* ___typePaper_20;
	// System.Int32 statics::valuePaper
	int32_t ___valuePaper_21;
	// System.String statics::stockPaper
	String_t* ___stockPaper_22;
	// System.String statics::Paper1
	String_t* ___Paper1_23;
	// System.String statics::Paper2
	String_t* ___Paper2_24;
	// System.String statics::iphone
	String_t* ___iphone_25;
	// System.Boolean statics::canChangeTypePaper
	bool ___canChangeTypePaper_26;
	// System.String statics::typeBasket
	String_t* ___typeBasket_27;
	// System.Int32 statics::valueBasket
	int32_t ___valueBasket_28;
	// System.String statics::stockBasket
	String_t* ___stockBasket_29;
	// System.String statics::Basket1
	String_t* ___Basket1_30;
	// System.Boolean statics::canChangeTypeBasket
	bool ___canChangeTypeBasket_31;
	// System.Boolean statics::pickCoim
	bool ___pickCoim_32;
	// UnityEngine.Vector2 statics::start_position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start_position_33;
	// UnityEngine.Vector2 statics::start_position_basket
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start_position_basket_34;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.SpringJoint2D
struct SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509  : public AnchoredJoint2D_t912CA383672E7BBF63D331BEA84F794488864C63
{
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m4588F5F94E9D89C77D92EDC0105905F7CAB937B2 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void InterstitialAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RewaedAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_LoadAd_m973B392DA02EC691AACD516EE46A979ED8833EA4 (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Void basSpawner::changeBasket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basSpawner_changeBasket_m52CF9F8572778B3A13004D68580CEF0244161003 (basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraAnchor::UpdateAnchorAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraAnchor_UpdateAnchorAsync_mD0FB00E2A751B1126E92FEE8D0140F34DF0C2D10 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void CameraAnchor/<UpdateAnchorAsync>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAnchorAsyncU3Ed__5__ctor_m4965E5C8B1D215448444563CD5820C1683311A9D (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_BottomLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomLeft_m4AE9F5FFDFEDF66D432BCA5D759F24693CA0D37A_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// System.Void CameraAnchor::SetAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchor0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_BottomCenter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomCenter_m6AF616420D8ED953932852AECD34F44909BCDB29_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_BottomRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomRight_mF9384ADCE680F75DFB01EE2564796F60FE7E8975_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_MiddleLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleLeft_m2BBDDDC50773999B0F7E2EBA156ACB7DA43F2E73_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_MiddleCenter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleCenter_mB2F46C2B1EE372C8A7B4A26E218515F3561A7F47_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_MiddleRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleRight_mF691344F3CF3F8EC170900B108987FFBCDE1DD2C_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_TopLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopLeft_m92725F227C0BD38BA677BAF0286419747E256C42_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_TopCenter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopCenter_m6EACFE08FA83428178C5529C8783A68B58D47A30_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ViewportHandler::get_TopRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopRight_m8A4D91478036135938CBDB4C2FA509A7BD45F5D8_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CameraAnchor::UpdateAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor_UpdateAnchor_mD4580BF7F208835BD4B84C8AE00477CB4316F5CE (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator coincollider::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* coincollider_LetDestroy_mB8AA564F796F8E40B5D1C427CB16FC50A73209FD (coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void coincollider/<LetDestroy>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__3__ctor_m66BE2A2514A0931EB9ED26A13965BACA305C3B10 (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void CoinSpawner::SpawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_SpawnCoin_m874BAB7FD0727CA6920105370E551A759AB4D0BD (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator hitbasket::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* hitbasket_LetDestroy_mC536A70A3ADADDE7BDD82CDD2477EB40A32D3F5D (hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* __this, const RuntimeMethod* method) ;
// System.Void hitbasket/<LetDestroy>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__4__ctor_m879440DC3F88155E88D675797A73D84803BB9289 (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpringJoint2D>()
inline SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* Component_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_m1F71A1AFFF94B49C3232CD2CE9EF8B2E867C8AC7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator paper::LetGo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* paper_LetGo_mEEBF20E5CCF61392457F76A0FB58F760D7D0DB86 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_position_m03C92F26F561D48050FBA840754F584AA7F415EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator paper::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* paper_LetDestroy_mA12B1EDCE1141AEE45C881A9D18078C5B72368DC (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) ;
// System.Void paper/<LetGo>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetGoU3Ed__11__ctor_m03E773AE36BFC35E95D551A712EF3B6C5A9B53A9 (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void paper/<LetDestroy>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__12__ctor_mB7FBCF82FCA040550C3CBAC2E4B27C78406D7D72 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpringJoint2D>()
inline SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* GameObject_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_mEA18037A5129471138884867EA7F4063DF328231 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PaperSpawner::changePaper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaperSpawner_changePaper_mE2F98ED4A69CF1EF14B78180265D457402F066BB (PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UI_Manager::closeBaskets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) ;
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ViewportHandler::ComputeResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler_ComputeResolution_mA557730906259C0F12F003358F885349C8F536A8 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Gizmos::get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Gizmos_get_matrix_m9B79C31AA3E8A73A1F734FCE3559590ED6BF17AC (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawFrustum(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___fov1, float ___maxRange2, float ___minRange3, float ___aspect4, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsInitializer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_Awake_m04671CB71AEE8EF08CC710D12FA78A141067E377 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	{
		// InitializeAds();
		AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_InitializeAds_m8902CB0C061AD85F838A0CD9EA1827827E912C1A (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B2_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* G_B3_1 = NULL;
	{
		// gameID = (Application.platform == RuntimePlatform.IPhonePlayer) ? iOSGameID : androidGameID;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->___androidGameID_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->___iOSGameID_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->___gameID_7 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___gameID_7), (void*)G_B3_0);
		// Advertisement.Initialize(gameID, testMode, this);
		String_t* L_3 = __this->___gameID_7;
		bool L_4 = __this->___testMode_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m4588F5F94E9D89C77D92EDC0105905F7CAB937B2(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationComplete_m6242C2C23BE6944E499C403BA6A3CD57BC0D7A7F (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Unity Ads initialization complete.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer_OnInitializationFailed_m09D61E0D7B4209B86ECB588A714B59680997410C (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
		Il2CppFakeBox<int32_t> L_0(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, (&___error0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259, L_1, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void AdsInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitializer__ctor_m99EF1AA6834703CA8F5F965F86A325105DA88A46 (AdsInitializer_t7B4CECD0F535D174CC6674026CCE6DFAB34DBDF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D27438558ADF161CECAC58FCF940B12B812EEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD47187048455FAF789F11ED1FB2411F252B87BEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string androidGameID = "4940580";
		__this->___androidGameID_4 = _stringLiteralD47187048455FAF789F11ED1FB2411F252B87BEC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___androidGameID_4), (void*)_stringLiteralD47187048455FAF789F11ED1FB2411F252B87BEC);
		// [SerializeField] string iOSGameID = "4940581";
		__this->___iOSGameID_5 = _stringLiteralC1D27438558ADF161CECAC58FCF940B12B812EEA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iOSGameID_5), (void*)_stringLiteralC1D27438558ADF161CECAC58FCF940B12B812EEA);
		// [SerializeField] bool testMode = true;
		__this->___testMode_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InterstitialAds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_Awake_m5F00E0DC2478380B06DAA31CE4AE02129394DFB1 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B2_0 = NULL;
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* G_B3_1 = NULL;
	{
		// adID = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? iOSAdID
		//     : androidAdID;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->___androidAdID_4;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->___iOSAdID_5;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->___adID_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___adID_6), (void*)G_B3_0);
		// LoadAd();
		InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283(__this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(adID, this);
		String_t* L_0 = __this->___adID_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(adID, this);
		String_t* L_0 = __this->___adID_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_0, __this, NULL);
		// LoadAd();
		InterstitialAds_LoadAd_m67F348FD34C462C6633963450E3E69F22F002283(__this, NULL);
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowFailure_m97BD2885CAC5EDFACBEA7C10EF84AD4BDA33AB56 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowStart_m12DCBF7E9EF81BEB064861EF8E0F29008A1B3D63 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowClick_m3556B2D88E67D81606223A8A3FF24E27AF42FDDB (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsShowComplete_mA2D0DE10A159F9B78231F924844CE0552177BB49 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsAdLoaded_m088C1B467EC78B30881E2D01E1FE18EBB6E32A13 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds_OnUnityAdsFailedToLoad_mF8F2ACD38F2E26048596215DE34916560F8B4B04 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterstitialAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAds__ctor_mD9070CCFDDB37CADB08E2150095A562C8C7D16D4 (InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string androidAdID = "Interstitial_Android";
		__this->___androidAdID_4 = _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___androidAdID_4), (void*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		// [SerializeField] private string iOSAdID = "Interstitial_iOS";
		__this->___iOSAdID_5 = _stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iOSAdID_5), (void*)_stringLiteral3915BCEE1104CEC85AA6966E6C98DA6ED321B9DB);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewaedAds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_Awake_m8D19F2F7942F42F7EE256687644D6D4B35566E7B (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* G_B2_0 = NULL;
	RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* G_B3_1 = NULL;
	{
		// adID = (Application.platform == RuntimePlatform.IPhonePlayer)
		//     ? iOSAdID
		//     : androidAdID;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = __this->___androidAdID_5;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		String_t* L_2 = __this->___iOSAdID_6;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->___adID_7 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___adID_7), (void*)G_B3_0);
		// buttonShowAd.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonShowAd_4;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_Start_m5396689182946E43BF9BF89C3498144E0BCD98C2 (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	{
		// LoadAd();
		RewaedAds_LoadAd_m973B392DA02EC691AACD516EE46A979ED8833EA4(__this, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_LoadAd_m973B392DA02EC691AACD516EE46A979ED8833EA4 (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + adID);
		String_t* L_0 = __this->___adID_7;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(adID, this);
		String_t* L_2 = __this->___adID_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_ShowAd_m48E8637C01CB129659D50EE22AF650A768CC5220 (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonShowAd.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonShowAd_4;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)1, NULL);
		// Advertisement.Show(adID, this);
		String_t* L_1 = __this->___adID_7;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_1, __this, NULL);
		// LoadAd();
		RewaedAds_LoadAd_m973B392DA02EC691AACD516EE46A979ED8833EA4(__this, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsAdLoaded_m67580D5FC1DD784A8054FDC3B8F6D53F0097F7DF (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewaedAds_ShowAd_m48E8637C01CB129659D50EE22AF650A768CC5220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___adUnitId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (adUnitId.Equals(adID))
		String_t* L_2 = ___adUnitId0;
		String_t* L_3 = __this->___adID_7;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// buttonShowAd.onClick.AddListener(ShowAd);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonShowAd_4;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)RewaedAds_ShowAd_m48E8637C01CB129659D50EE22AF650A768CC5220_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// buttonShowAd.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___buttonShowAd_4;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsFailedToLoad_m70CC06028E9EAB21BD1155DE54678693F40F165C (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adID}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = __this->___adID_7;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsShowFailure_mE4D7A24643CB10EF35992A741019497E9636722A (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adID}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = __this->___adID_7;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsShowStart_m5AC59714DF8524A40ABAEA803F8E1227E3A658EB (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsShowClick_mD394676915C707A6EF780C623CB95C10F52B2C9F (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RewaedAds::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnUnityAdsShowComplete_mBE374BAB33975856F8D75E001C7AF9EA0F354ADB (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RewaedAds::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds_OnDestroy_mE4393F6B8923066943CD8242972B1A3AD2510C77 (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	{
		// buttonShowAd.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonShowAd_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
		// }
		return;
	}
}
// System.Void RewaedAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewaedAds__ctor_mAC9335189A01BDBBA06E3CAEE6B14E15532348DD (RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string androidAdID = "Rewarded_Android";
		__this->___androidAdID_5 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___androidAdID_5), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		// [SerializeField] private string iOSAdID = "Rewarded_iOS";
		__this->___iOSAdID_6 = _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iOSAdID_6), (void*)_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void basketSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basketSpawner_Start_m4CC87126166B3DD2A085B8C3FFF59D42AC48E499 (basketSpawner_t5954453D7E28268EA616093F9F2B6634FCA85D73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RigidBasket = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___RigidBasket_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RigidBasket_5), (void*)L_0);
		// start_position = RigidBasket.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___RigidBasket_5;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		__this->___start_position_6 = L_2;
		// start_rotation = RigidBasket.transform.rotation;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___RigidBasket_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___start_rotation_8 = L_5;
		// }
		return;
	}
}
// System.Void basketSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basketSpawner_Update_m4BD6DD78CCA57033C555CD52216ED4900FE62303 (basketSpawner_t5954453D7E28268EA616093F9F2B6634FCA85D73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (statics.canMoveBasket == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9;
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		// System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_1, NULL);
		// int random_value_position = rnd.Next(0, 7);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, 7);
		V_0 = L_3;
		// int random_value_rotation = rnd.Next(0, 90);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, ((int32_t)90));
		V_1 = L_4;
		// new_position = start_position + new UnityEngine.Vector2(0, random_value_position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___start_position_6;
		int32_t L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), ((float)L_6), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_7, NULL);
		__this->___new_position_7 = L_8;
		// new_rotation = start_rotation * UnityEngine.Quaternion.Euler(0, 0, random_value_rotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___start_rotation_8;
		int32_t L_10 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)L_10), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_11, NULL);
		__this->___new_rotation_9 = L_12;
		// Basket.transform.SetPositionAndRotation(new_position, new_rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___Basket_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___new_position_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = __this->___new_rotation_9;
		NullCheck(L_14);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_14, L_16, L_17, NULL);
		// statics.canMoveBasket = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9 = (bool)0;
	}

IL_0084:
	{
		// if (statics.canReSpawnBasket == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_18 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7;
		if (!L_18)
		{
			goto IL_0096;
		}
	}
	{
		// Destroy(Basket);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___Basket_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void basketSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basketSpawner__ctor_mBBA4B93B477EB0C91B60DB1552166F5D628C2E44 (basketSpawner_t5954453D7E28268EA616093F9F2B6634FCA85D73* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void basSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basSpawner_Start_mAB04E0A2FFB3B5274A35C53F1F359550461E878F (basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.typeBasket = PlayerPrefs.GetString("basket", statics.stockBasket);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_0, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27), (void*)L_1);
		// statics.start_position_basket = Rigid.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___Rigid_7;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_2, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___start_position_basket_34 = L_3;
		// changeBasket();
		basSpawner_changeBasket_m52CF9F8572778B3A13004D68580CEF0244161003(__this, NULL);
		// }
		return;
	}
}
// System.Void basSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basSpawner_Update_mC7DF479D3D9BCF7C57B94411392CE8B3D46DF190 (basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.canChangeTypeBasket == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// changeBasket();
		basSpawner_changeBasket_m52CF9F8572778B3A13004D68580CEF0244161003(__this, NULL);
		// statics.canChangeTypeBasket = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31 = (bool)0;
	}

IL_0013:
	{
		// if (statics.canReSpawnBasket == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// var newBasket = Instantiate(basket, statics.start_position_basket, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___basket_6;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___start_position_basket_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// statics.canReSpawnBasket = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)0;
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void basSpawner::changeBasket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basSpawner_changeBasket_m52CF9F8572778B3A13004D68580CEF0244161003 (basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.typeBasket == statics.stockBasket) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27;
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// basket = stockBasket;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___stockBasket_4;
		__this->___basket_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basket_6), (void*)L_3);
		return;
	}

IL_001e:
	{
		// else if (statics.typeBasket == statics.Basket1){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27;
		String_t* L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// basket = RabauBasket;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___RabauBasket_5;
		__this->___basket_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___basket_6), (void*)L_7);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void basSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void basSpawner__ctor_m5C9DF47C743246FF845565D1E08AF6DD18BDBEB7 (basSpawner_tBA2C4C4563B5C265DCFFB59DD34D215A14ED9619* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraAnchor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor_Start_mA0E3CCD677C02A97957DC6EDED3193301204AF47 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) 
{
	{
		// updateAnchorRoutine = UpdateAnchorAsync();
		RuntimeObject* L_0;
		L_0 = CameraAnchor_UpdateAnchorAsync_mD0FB00E2A751B1126E92FEE8D0140F34DF0C2D10(__this, NULL);
		__this->___updateAnchorRoutine_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___updateAnchorRoutine_6), (void*)L_0);
		// StartCoroutine(updateAnchorRoutine);
		RuntimeObject* L_1 = __this->___updateAnchorRoutine_6;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraAnchor::UpdateAnchorAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraAnchor_UpdateAnchorAsync_mD0FB00E2A751B1126E92FEE8D0140F34DF0C2D10 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* L_0 = (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE*)il2cpp_codegen_object_new(U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateAnchorAsyncU3Ed__5__ctor_m4965E5C8B1D215448444563CD5820C1683311A9D(L_0, 0, NULL);
		U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CameraAnchor::UpdateAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor_UpdateAnchor_mD4580BF7F208835BD4B84C8AE00477CB4316F5CE (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (anchorType)
		int32_t L_0 = __this->___anchorType_4;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_0076;
			}
			case 5:
			{
				goto IL_0087;
			}
			case 6:
			{
				goto IL_0098;
			}
			case 7:
			{
				goto IL_00a9;
			}
			case 8:
			{
				goto IL_00ba;
			}
		}
	}
	{
		return;
	}

IL_0032:
	{
		// SetAnchor(ViewportHandler.Instance.BottomLeft);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_2 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ViewportHandler_get_BottomLeft_m4AE9F5FFDFEDF66D432BCA5D759F24693CA0D37A_inline(L_2, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_3, NULL);
		// break;
		return;
	}

IL_0043:
	{
		// SetAnchor(ViewportHandler.Instance.BottomCenter);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_4 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = ViewportHandler_get_BottomCenter_m6AF616420D8ED953932852AECD34F44909BCDB29_inline(L_4, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_5, NULL);
		// break;
		return;
	}

IL_0054:
	{
		// SetAnchor(ViewportHandler.Instance.BottomRight);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_6 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = ViewportHandler_get_BottomRight_mF9384ADCE680F75DFB01EE2564796F60FE7E8975_inline(L_6, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_7, NULL);
		// break;
		return;
	}

IL_0065:
	{
		// SetAnchor(ViewportHandler.Instance.MiddleLeft);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_8 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ViewportHandler_get_MiddleLeft_m2BBDDDC50773999B0F7E2EBA156ACB7DA43F2E73_inline(L_8, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_9, NULL);
		// break;
		return;
	}

IL_0076:
	{
		// SetAnchor(ViewportHandler.Instance.MiddleCenter);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_10 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ViewportHandler_get_MiddleCenter_mB2F46C2B1EE372C8A7B4A26E218515F3561A7F47_inline(L_10, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_11, NULL);
		// break;
		return;
	}

IL_0087:
	{
		// SetAnchor(ViewportHandler.Instance.MiddleRight);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_12 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ViewportHandler_get_MiddleRight_mF691344F3CF3F8EC170900B108987FFBCDE1DD2C_inline(L_12, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_13, NULL);
		// break;
		return;
	}

IL_0098:
	{
		// SetAnchor(ViewportHandler.Instance.TopLeft);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_14 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = ViewportHandler_get_TopLeft_m92725F227C0BD38BA677BAF0286419747E256C42_inline(L_14, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_15, NULL);
		// break;
		return;
	}

IL_00a9:
	{
		// SetAnchor(ViewportHandler.Instance.TopCenter);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_16 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = ViewportHandler_get_TopCenter_m6EACFE08FA83428178C5529C8783A68B58D47A30_inline(L_16, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_17, NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// SetAnchor(ViewportHandler.Instance.TopRight);
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_18 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ViewportHandler_get_TopRight_m8A4D91478036135938CBDB4C2FA509A7BD45F5D8_inline(L_18, NULL);
		CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void CameraAnchor::SetAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor_SetAnchor_m79ACCF7BDDB26F7BFB30244D69B9A5F1C5795472 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchor0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 newPos = anchor + anchorOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___anchor0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___anchorOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (!transform.position.Equals(newPos))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		bool L_6;
		L_6 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_1), L_5, NULL);
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void CameraAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraAnchor__ctor_m3A62F6F2179BA735A33C2527DC35800E57D74C13 (CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraAnchor/<UpdateAnchorAsync>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAnchorAsyncU3Ed__5__ctor_m4965E5C8B1D215448444563CD5820C1683311A9D (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraAnchor/<UpdateAnchorAsync>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAnchorAsyncU3Ed__5_System_IDisposable_Dispose_m4D7705C848679DA3B126829CAFEA703556CE2A44 (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraAnchor/<UpdateAnchorAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateAnchorAsyncU3Ed__5_MoveNext_mA68533D533D12C0DC709B0E837D7949B2D778E8F (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67664FC975C92C554710B7D52FDAE37C52312F9C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// uint cameraWaitCycles = 0;
		__this->___U3CcameraWaitCyclesU3E5__2_3 = 0;
		goto IL_0052;
	}

IL_0027:
	{
		// ++cameraWaitCycles;
		uint32_t L_4 = __this->___U3CcameraWaitCyclesU3E5__2_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, 1));
		uint32_t L_5 = V_2;
		__this->___U3CcameraWaitCyclesU3E5__2_3 = L_5;
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_6 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_6, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0052:
	{
		// while (ViewportHandler.Instance == null)
		ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* L_7 = ((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0027;
		}
	}
	{
		// if (cameraWaitCycles > 0)
		uint32_t L_9 = __this->___U3CcameraWaitCyclesU3E5__2_3;
		if ((!(((uint32_t)L_9) > ((uint32_t)0))))
		{
			goto IL_0082;
		}
	}
	{
		// print(string.Format("CameraAnchor found ViewportHandler instance after waiting {0} frame(s). You might want to check that ViewportHandler has an earlie execution order.", cameraWaitCycles));
		uint32_t L_10 = __this->___U3CcameraWaitCyclesU3E5__2_3;
		uint32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral67664FC975C92C554710B7D52FDAE37C52312F9C, L_12, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_13, NULL);
	}

IL_0082:
	{
		// UpdateAnchor();
		CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* L_14 = V_1;
		NullCheck(L_14);
		CameraAnchor_UpdateAnchor_mD4580BF7F208835BD4B84C8AE00477CB4316F5CE(L_14, NULL);
		// updateAnchorRoutine = null;
		CameraAnchor_t50D6A2000F7D9237FFF7CAF36C74BB83E438504A* L_15 = V_1;
		NullCheck(L_15);
		L_15->___updateAnchorRoutine_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___updateAnchorRoutine_6), (void*)(RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object CameraAnchor/<UpdateAnchorAsync>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateAnchorAsyncU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF199F31FD76B293C11AD7AC2661D8F3E4F8DA01C (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraAnchor/<UpdateAnchorAsync>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateAnchorAsyncU3Ed__5_System_Collections_IEnumerator_Reset_m3FD3C16DB5039FC4576E2B3569894967437AADCF (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateAnchorAsyncU3Ed__5_System_Collections_IEnumerator_Reset_m3FD3C16DB5039FC4576E2B3569894967437AADCF_RuntimeMethod_var)));
	}
}
// System.Object CameraAnchor/<UpdateAnchorAsync>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateAnchorAsyncU3Ed__5_System_Collections_IEnumerator_get_Current_m7A5B2F618819C0C3AA3013E3F41699D4A3EFB05B (U3CUpdateAnchorAsyncU3Ed__5_t1BB1FC73514D66A58BEDEB84947CB310D19186CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void coincollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coincollider_Start_mCECDDDBD9D8635E6D6153580CC3AF5F47F0004AD (coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LetDestroy());
		RuntimeObject* L_0;
		L_0 = coincollider_LetDestroy_mB8AA564F796F8E40B5D1C427CB16FC50A73209FD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void coincollider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coincollider_OnTriggerEnter2D_m3530CD6B34699A01FBA96BBDD44B12698FA7FC22 (coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hit.gameObject.tag == "Paper") {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___hit0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(coin);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___coin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// statics.coins = statics.coins + 1;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// statics.pickCoim = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___pickCoim_32 = (bool)1;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator coincollider::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* coincollider_LetDestroy_mB8AA564F796F8E40B5D1C427CB16FC50A73209FD (coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* L_0 = (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5*)il2cpp_codegen_object_new(U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLetDestroyU3Ed__3__ctor_m66BE2A2514A0931EB9ED26A13965BACA305C3B10(L_0, 0, NULL);
		U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void coincollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void coincollider__ctor_mD7ED343435FE2F4F3433FEAE438599368ED97FD2 (coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void coincollider/<LetDestroy>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__3__ctor_m66BE2A2514A0931EB9ED26A13965BACA305C3B10 (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void coincollider/<LetDestroy>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__3_System_IDisposable_Dispose_mC1A248346067649BA7F1747A4A08158CE02EF46D (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean coincollider/<LetDestroy>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLetDestroyU3Ed__3_MoveNext_m42B451303150B7E68B8F2BFEAB45B1C5DF8D82FA (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(coin);
		coincollider_tA7E5025CB8A6774611176E8C7863E19DF83604A9* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___coin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object coincollider/<LetDestroy>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC5CDEA3FB021687A348C3C0834ACAC6CD9E2F2F (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void coincollider/<LetDestroy>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__3_System_Collections_IEnumerator_Reset_mEA9FC2D4D6F1BD5418172F748998CCF249FA8402 (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLetDestroyU3Ed__3_System_Collections_IEnumerator_Reset_mEA9FC2D4D6F1BD5418172F748998CCF249FA8402_RuntimeMethod_var)));
	}
}
// System.Object coincollider/<LetDestroy>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__3_System_Collections_IEnumerator_get_Current_m51550876A6E0123894B51A64A839ECCF4235EDE4 (U3CLetDestroyU3Ed__3_t426D3ED5A4C112E781376B9BE92D8EAE3B1F65C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoinSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_Update_m6EF296ADD65F886CC7DB23C20A1ECF896955CF21 (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.prevScore != statics.score) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___prevScore_15;
		int32_t L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		// System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_2, NULL);
		// if (rnd.Next(0, 8) > 2) {
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, 8);
		if ((((int32_t)L_3) <= ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		// SpawnCoin();
		CoinSpawner_SpawnCoin_m874BAB7FD0727CA6920105370E551A759AB4D0BD(__this, NULL);
	}

IL_0021:
	{
		// statics.prevScore = statics.score;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___prevScore_15 = L_4;
	}

IL_002b:
	{
		// if (statics.pickCoim == true){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___pickCoim_32;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// pickup.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___pickup_5;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// statics.pickCoim = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___pickCoim_32 = (bool)0;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void CoinSpawner::SpawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner_SpawnCoin_m874BAB7FD0727CA6920105370E551A759AB4D0BD (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// System.Random rnd = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		// int x = rnd.Next(-2, 2);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, ((int32_t)-2), 2);
		V_0 = L_2;
		// int y = rnd.Next(-1 , 4);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, (-1), 4);
		V_1 = L_3;
		// var newCoin = Instantiate(coin, new UnityEngine.Vector2(x, y), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___coin_4;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)L_5), ((float)L_6), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CoinSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinSpawner__ctor_m39F93A345A61936CC765CA55CE65D9FAD6E28E70 (CoinSpawner_t9E5B6B9039AA7F755C959FAD80641E70FA8938D6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void hitbasket::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitbasket_OnTriggerEnter2D_m193A5B9850E78427AB4B75B739996EC9012A13DB (hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hit.gameObject.tag == "Paper") {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___hit0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// paper = hit.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___hit0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		__this->___paper_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paper_4), (void*)L_5);
		// StartCoroutine(LetDestroy());
		RuntimeObject* L_6;
		L_6 = hitbasket_LetDestroy_mC536A70A3ADADDE7BDD82CDD2477EB40A32D3F5D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// statics.scriptActive = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)1;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator hitbasket::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* hitbasket_LetDestroy_mC536A70A3ADADDE7BDD82CDD2477EB40A32D3F5D (hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* L_0 = (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8*)il2cpp_codegen_object_new(U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLetDestroyU3Ed__4__ctor_m879440DC3F88155E88D675797A73D84803BB9289(L_0, 0, NULL);
		U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void hitbasket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitbasket__ctor_m729FF800CFCF1742CE61F38466187547C1B6503E (hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void hitbasket/<LetDestroy>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__4__ctor_m879440DC3F88155E88D675797A73D84803BB9289 (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void hitbasket/<LetDestroy>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__4_System_IDisposable_Dispose_mA7674C2BD2C328C262D627688BA19A008B7F8341 (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean hitbasket/<LetDestroy>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLetDestroyU3Ed__4_MoveNext_m2C85D9E99443ACCDD69870D66BA884AAE503B6DF (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00af;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(paper);
		hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___paper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// statics.canMoveBasket = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9 = (bool)1;
		// statics.canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
		// statics.score = statics.score + 1;
		int32_t L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// statics.avaliblePaper = statics.avaliblePaper + 1;
		int32_t L_7 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// statics.wasAdd = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___wasAdd_13 = (bool)0;
		// if (pickup.enabled == true)
		hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* L_8 = V_1;
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = L_8->___pickup_5;
		NullCheck(L_9);
		bool L_10;
		L_10 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_9, NULL);
		if (!L_10)
		{
			goto IL_0096;
		}
	}
	{
		// pickup.Play();
		hitbasket_t335FEA13240F83779358EC79223B9EC47B99067B* L_11 = V_1;
		NullCheck(L_11);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___pickup_5;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
	}

IL_0096:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00af:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object hitbasket/<LetDestroy>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F716C91A5AF736404DBBE44DF3DC07D30A81184 (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void hitbasket/<LetDestroy>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__4_System_Collections_IEnumerator_Reset_m889D16FFE89EE2247EA08EF276A9CAD5937C8300 (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLetDestroyU3Ed__4_System_Collections_IEnumerator_Reset_m889D16FFE89EE2247EA08EF276A9CAD5937C8300_RuntimeMethod_var)));
	}
}
// System.Object hitbasket/<LetDestroy>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__4_System_Collections_IEnumerator_get_Current_m17227E635317125776827E4B3D7B44F27906F8AD (U3CLetDestroyU3Ed__4_t46BABE42B2FD88979D2CFD74086AD79C1D8FDAD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void hitPaper::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitPaper_OnTriggerEnter2D_m239B635645769DB05632E06FA9B75B475F3FC858 (hitPaper_tB6BC81677C9A66EC7DFF4688B8BAD9E50F628C23* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hit.gameObject.tag == "Paper") {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___hit0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// statics.scriptActive = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)1;
		// statics.canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void hitPaper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitPaper__ctor_m679DA98108E963DEE697235DC23711B9FF83F750 (hitPaper_tB6BC81677C9A66EC7DFF4688B8BAD9E50F628C23* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void paper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paper_Start_m4840B256A0C6275552A3E5CA5019F1118B860FD2 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_m1F71A1AFFF94B49C3232CD2CE9EF8B2E867C8AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RigidPaper = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___RigidPaper_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RigidPaper_6), (void*)L_0);
		// RigidPaper.GetComponent<SpringJoint2D>().enabled = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___RigidPaper_6;
		NullCheck(L_1);
		SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* L_2;
		L_2 = Component_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_m1F71A1AFFF94B49C3232CD2CE9EF8B2E867C8AC7(L_1, Component_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_m1F71A1AFFF94B49C3232CD2CE9EF8B2E867C8AC7_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void paper::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paper_OnMouseDown_m367322B6020D387B13F298B6F1BFDD200D5C85A8 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.firstStart == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___firstStart_12;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// statics.firstStart = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___firstStart_12 = (bool)0;
	}

IL_000d:
	{
		// if (isTouch == true) {
		bool L_1 = __this->___isTouch_9;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// isPressed = true;
		__this->___isPressed_4 = (bool)1;
		// RigidPaper.isKinematic = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___RigidPaper_6;
		NullCheck(L_2);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_2, (bool)1, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void paper::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paper_OnMouseUp_m5CE11140A76EE233E16CE669D71EDA2A9D44C402 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isTouch == true) {
		bool L_0 = __this->___isTouch_9;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// statics.avaliblePaper = statics.avaliblePaper - 1;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// isTouch = false;
		__this->___isTouch_9 = (bool)0;
	}

IL_001b:
	{
		// isPressed = false;
		__this->___isPressed_4 = (bool)0;
		// RigidPaper.isKinematic = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___RigidPaper_6;
		NullCheck(L_2);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_2, (bool)0, NULL);
		// StartCoroutine(LetGo());
		RuntimeObject* L_3;
		L_3 = paper_LetGo_mEEBF20E5CCF61392457F76A0FB58F760D7D0DB86(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void paper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paper_Update_m535699039A167AC544BC7FEADFE2AC77C680C4DB (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isPressed == true && statics.scriptActive == true) {
		bool L_0 = __this->___isPressed_4;
		if (!L_0)
		{
			goto IL_008d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4;
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		V_0 = L_5;
		// if (Vector2.Distance(mousePos, ShootRigid.position) > maxDistance){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___ShootRigid_7;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_7, NULL);
		float L_9;
		L_9 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_6, L_8, NULL);
		float L_10 = __this->___maxDistance_5;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0081;
		}
	}
	{
		// RigidPaper.position = ShootRigid.position + (mousePos - ShootRigid.position).normalized * maxDistance;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11 = __this->___RigidPaper_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = __this->___ShootRigid_7;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___ShootRigid_7;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_14, L_16, NULL);
		V_1 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		float L_19 = __this->___maxDistance_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_13, L_20, NULL);
		NullCheck(L_11);
		Rigidbody2D_set_position_m03C92F26F561D48050FBA840754F584AA7F415EF(L_11, L_21, NULL);
		goto IL_008d;
	}

IL_0081:
	{
		// RigidPaper.position = mousePos;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___RigidPaper_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		NullCheck(L_22);
		Rigidbody2D_set_position_m03C92F26F561D48050FBA840754F584AA7F415EF(L_22, L_23, NULL);
	}

IL_008d:
	{
		// if (RigidPaper.velocity == new Vector2(0, 0) && canRemove == true){
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_24 = __this->___RigidPaper_6;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_27;
		L_27 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_28 = __this->___canRemove_10;
		if (!L_28)
		{
			goto IL_00c3;
		}
	}
	{
		// StartCoroutine(LetDestroy());
		RuntimeObject* L_29;
		L_29 = paper_LetDestroy_mA12B1EDCE1141AEE45C881A9D18078C5B72368DC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator paper::LetGo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* paper_LetGo_mEEBF20E5CCF61392457F76A0FB58F760D7D0DB86 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* L_0 = (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80*)il2cpp_codegen_object_new(U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLetGoU3Ed__11__ctor_m03E773AE36BFC35E95D551A712EF3B6C5A9B53A9(L_0, 0, NULL);
		U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator paper::LetDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* paper_LetDestroy_mA12B1EDCE1141AEE45C881A9D18078C5B72368DC (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* L_0 = (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144*)il2cpp_codegen_object_new(U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLetDestroyU3Ed__12__ctor_mB7FBCF82FCA040550C3CBAC2E4B27C78406D7D72(L_0, 0, NULL);
		U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void paper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paper__ctor_mD64C8BCDCD3FE08629B07CD88077A74DAC567216 (paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float maxDistance = 3f;
		__this->___maxDistance_5 = (3.0f);
		// private bool isTouch = true;
		__this->___isTouch_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void paper/<LetGo>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetGoU3Ed__11__ctor_m03E773AE36BFC35E95D551A712EF3B6C5A9B53A9 (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void paper/<LetGo>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetGoU3Ed__11_System_IDisposable_Dispose_m92108A70A12C2A3EDC872FB7B86254CEE42E5884 (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean paper/<LetGo>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLetGoU3Ed__11_MoveNext_m425D64C2818AC186D628FC06EFCC390805802423 (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_mEA18037A5129471138884867EA7F4063DF328231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0084;
			}
			case 3:
			{
				goto IL_00aa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<SpringJoint2D>().enabled = false;
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		SpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509* L_6;
		L_6 = GameObject_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_mEA18037A5129471138884867EA7F4063DF328231(L_5, GameObject_GetComponent_TisSpringJoint2D_t167F8D0304DB3217FFDA6B1CC73E137977F9F509_mEA18037A5129471138884867EA7F4063DF328231_RuntimeMethod_var);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// statics.scriptActive = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)0;
		// canRemove = true;
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_7 = V_1;
		NullCheck(L_7);
		L_7->___canRemove_10 = (bool)1;
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// statics.hasOneInShoot = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)0;
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(paperObject);
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___paperObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object paper/<LetGo>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetGoU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m147843E61561FD09311D6796F18D138E5BE30E9F (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void paper/<LetGo>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetGoU3Ed__11_System_Collections_IEnumerator_Reset_mF656F61005AE1FE4ED844465E853C9D932914A03 (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLetGoU3Ed__11_System_Collections_IEnumerator_Reset_mF656F61005AE1FE4ED844465E853C9D932914A03_RuntimeMethod_var)));
	}
}
// System.Object paper/<LetGo>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetGoU3Ed__11_System_Collections_IEnumerator_get_Current_mA31177DD7A84205397C79D2AF9A8D0CA0AB5946F (U3CLetGoU3Ed__11_tE9D343E81C6E2097182E90976B471BE42F903D80* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void paper/<LetDestroy>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__12__ctor_mB7FBCF82FCA040550C3CBAC2E4B27C78406D7D72 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void paper/<LetDestroy>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__12_System_IDisposable_Dispose_m5719A5DC441799CE8A7931FF61C14DBEC5B50029 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean paper/<LetDestroy>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLetDestroyU3Ed__12_MoveNext_m8DEE3E44B1CA49237536B216CF07F5F93FADCFA5 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(paperObject);
		paper_tC9CF9E997DC9F5DB8E742971CA500CCAB916AE42* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___paperObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object paper/<LetDestroy>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4603B18B423E8B9F33355B6E031A156B809487C3 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void paper/<LetDestroy>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLetDestroyU3Ed__12_System_Collections_IEnumerator_Reset_mA98631A401C2C79A56901AE31F86C96DF01037D2 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLetDestroyU3Ed__12_System_Collections_IEnumerator_Reset_mA98631A401C2C79A56901AE31F86C96DF01037D2_RuntimeMethod_var)));
	}
}
// System.Object paper/<LetDestroy>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLetDestroyU3Ed__12_System_Collections_IEnumerator_get_Current_mE37C93672F2FA0AF2AE98BE1DEC28EAED036F667 (U3CLetDestroyU3Ed__12_t804F9656A0412C8332138630CA83AC3390D5B144* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void paperPositionFindeer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paperPositionFindeer_Start_m9D3642FC757C0BE5B770E43937E89C68EA20F30C (paperPositionFindeer_t7896A61D94B65ECA2F326DCBFB55371467B5ED3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___Rigid_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Rigid_4), (void*)L_0);
		// statics.start_position = Rigid.position;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___Rigid_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___start_position_33 = L_2;
		// }
		return;
	}
}
// System.Void paperPositionFindeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paperPositionFindeer__ctor_m1C5C56BDFDCE2B1D4091C4ABAE51A176C926A6C0 (paperPositionFindeer_t7896A61D94B65ECA2F326DCBFB55371467B5ED3B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PaperSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaperSpawner_Start_mA3F80F5B297F74D890A2F01EC3401A9CD1FEDA3D (PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.typePaper = PlayerPrefs.GetString("paper", statics.stockPaper);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_0, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_1);
		// changePaper();
		PaperSpawner_changePaper_mE2F98ED4A69CF1EF14B78180265D457402F066BB(__this, NULL);
		// }
		return;
	}
}
// System.Void PaperSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaperSpawner_Update_m123D95B9A25092D2277844626452B9784DEB48F1 (PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.canChangeTypePaper == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypePaper_26;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// changePaper();
		PaperSpawner_changePaper_mE2F98ED4A69CF1EF14B78180265D457402F066BB(__this, NULL);
		// statics.canChangeTypePaper = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypePaper_26 = (bool)0;
	}

IL_0013:
	{
		// if (statics.canSpawn == true && statics.avaliblePaper > 0 && statics.hasOneInShoot == false) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10;
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		// var newPaper = Instantiate(paper, statics.start_position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___paper_9;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___start_position_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// statics.canSpawn = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)0;
		// statics.hasOneInShoot = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)1;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void PaperSpawner::changePaper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaperSpawner_changePaper_mE2F98ED4A69CF1EF14B78180265D457402F066BB (PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.typePaper == statics.stockPaper){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20;
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// paper = stockPaper;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___stockPaper_4;
		__this->___paper_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paper_9), (void*)L_3);
		return;
	}

IL_001e:
	{
		// else if (statics.typePaper == statics.Paper1){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20;
		String_t* L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// paper = Paper1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Paper1_5;
		__this->___paper_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paper_9), (void*)L_7);
		return;
	}

IL_003c:
	{
		// else if (statics.typePaper == statics.Paper2){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_8 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20;
		String_t* L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// paper = Paper2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Paper2_6;
		__this->___paper_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paper_9), (void*)L_11);
		return;
	}

IL_005a:
	{
		// else if (statics.typePaper == statics.iphone){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_12 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20;
		String_t* L_13 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// paper = Iphone;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___Iphone_7;
		__this->___paper_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paper_9), (void*)L_15);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void PaperSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaperSpawner__ctor_mC0E9B8A2543704D49AC096E37B5485C1C599FE84 (PaperSpawner_tED43A6B9D6A8C1D6CE074F6F69A89C5972D7BA80* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void shopmanager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopmanager_Start_mE98B36A874872F7CA3784D5E58806BF21878B138 (shopmanager_tBEE35C8D9CAD809F1873E1F884A87FBA4B76C1B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void shopmanager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopmanager_Update_m8FCCE133D125DEDF15DB7B16ECCD17D4217F8621 (shopmanager_tBEE35C8D9CAD809F1873E1F884A87FBA4B76C1B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.valuePaper % 3 == 0)
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_0%3)))
		{
			goto IL_0021;
		}
	}
	{
		// buy1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___buy1_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// select1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___select1_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0021:
	{
		// if (statics.valuePaper % 5 == 0)
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_3%5)))
		{
			goto IL_0042;
		}
	}
	{
		// buy2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___buy2_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// select2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___select2_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0042:
	{
		// if (statics.valuePaper % 7 == 0)
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_6%7)))
		{
			goto IL_0063;
		}
	}
	{
		// buyIphone.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___buyIphone_8;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// selectIphone.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___selectIphone_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_0063:
	{
		// if (statics.valueBasket == 18) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0084;
		}
	}
	{
		// buyRabau.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___buyRabau_10;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// selectRabau.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___selectRabau_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void shopmanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shopmanager__ctor_m209969EF4A02FB144AD27893165554D8CB4EDE55 (shopmanager_tBEE35C8D9CAD809F1873E1F884A87FBA4B76C1B3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void statics::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statics_Start_mB0B0B65B34438F0FF8DDC1EBB1E82E4384CD19AA (statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B4CB989CF705BDB31F2D19B8AB3AB7081C4C9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4B9C289A8487F757BE9A4D690FB50BA02F47E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bestScore = PlayerPrefs.GetInt("BestScore", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral2B4CB989CF705BDB31F2D19B8AB3AB7081C4C9DB, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___bestScore_18 = L_0;
		// coins = PlayerPrefs.GetInt("Coins", 0);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, 0, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = L_1;
		// valuePaper = PlayerPrefs.GetInt("PaperTypes", 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E, 1, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21 = L_2;
		// valueBasket = PlayerPrefs.GetInt("BasketTypes", 1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteralD4B9C289A8487F757BE9A4D690FB50BA02F47E6F, 1, NULL);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28 = L_3;
		// }
		return;
	}
}
// System.Void statics::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statics_Update_m98733E27212A9696973E4F11352939D9974C2086 (statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score % 10 == 0 && score > 0 && wasAdd == false) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		if (((int32_t)(L_0%((int32_t)10))))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___wasAdd_13;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// avaliblePaper = avaliblePaper + 3;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = ((int32_t)il2cpp_codegen_add(L_3, 3));
		// wasAdd = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___wasAdd_13 = (bool)1;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void statics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statics__ctor_m3ADC4861B4C5BD8EE8922804098F8504F2A95B1E (statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void statics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statics__cctor_m770013417301CEF980670D6601EB6224FAC207CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1469CA8FF993C523E460D54EC2A2705EAA8120A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA80C0D0C36A4C5272B480000BD32A5F490AE60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA7B6F9F2EAEF04E7BC856652C6790E4F53FAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5EDAB94EFEED4D545E174E3458A272FCA22F88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6DAB8860F5223B64111F9E4499C1F74233C000A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89C11BF7B3D690ACE1F31CDFAD2CDF08E1857FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool scriptActive = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)1;
		// public static bool isTouch = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___isTouch_5 = (bool)1;
		// public static bool canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
		// public static bool canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// public static bool canSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawnBasket_8 = (bool)1;
		// public static bool canMoveBasket = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9 = (bool)0;
		// public static bool hasOneInShoot = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)0;
		// public static bool finishGame = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11 = (bool)0;
		// public static bool firstStart = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___firstStart_12 = (bool)1;
		// public static bool wasAdd = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___wasAdd_13 = (bool)0;
		// public static bool inShop = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___inShop_14 = (bool)0;
		// public static int prevScore = 0;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___prevScore_15 = 0;
		// public static int score = 0;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16 = 0;
		// public static int avaliblePaper = 5;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = 5;
		// public static string stockPaper = "STOCK";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22 = _stringLiteral5FA7B6F9F2EAEF04E7BC856652C6790E4F53FAC4;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22), (void*)_stringLiteral5FA7B6F9F2EAEF04E7BC856652C6790E4F53FAC4);
		// public static string Paper1 = "PAPER1";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23 = _stringLiteralB6DAB8860F5223B64111F9E4499C1F74233C000A;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23), (void*)_stringLiteralB6DAB8860F5223B64111F9E4499C1F74233C000A);
		// public static string Paper2 = "PAPER2";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24 = _stringLiteral4EA80C0D0C36A4C5272B480000BD32A5F490AE60;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24), (void*)_stringLiteral4EA80C0D0C36A4C5272B480000BD32A5F490AE60);
		// public static string iphone = "IPHONE";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25 = _stringLiteralD89C11BF7B3D690ACE1F31CDFAD2CDF08E1857FA;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25), (void*)_stringLiteralD89C11BF7B3D690ACE1F31CDFAD2CDF08E1857FA);
		// public static bool canChangeTypePaper = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypePaper_26 = (bool)0;
		// public static int valueBasket = 1;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28 = 1;
		// public static string stockBasket = "STOCKB";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29 = _stringLiteral8E5EDAB94EFEED4D545E174E3458A272FCA22F88;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29), (void*)_stringLiteral8E5EDAB94EFEED4D545E174E3458A272FCA22F88);
		// public static string Basket1 = "Basket1";
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30 = _stringLiteral1469CA8FF993C523E460D54EC2A2705EAA8120A7;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30), (void*)_stringLiteral1469CA8FF993C523E460D54EC2A2705EAA8120A7);
		// public static bool canChangeTypeBasket = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31 = (bool)0;
		// public static bool pickCoim = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___pickCoim_32 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI_Manager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Start_m668A15403424A9574BAEF279D8941A50E488BED9 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	{
		// Rad.LoadAd();
		RewaedAds_t2A5F897D0EFA61AC2068D018DC879BD32AE4D05E* L_0 = __this->___Rad_22;
		NullCheck(L_0);
		RewaedAds_LoadAd_m973B392DA02EC691AACD516EE46A979ED8833EA4(L_0, NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Update_mFF811DD14265DC99F160042F619C86C76A85E226 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285705BDC348071344FEC49C8144DF7EC61E72B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B4CB989CF705BDB31F2D19B8AB3AB7081C4C9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral868A674ED61F216CCB4A6241DDDB5C40F300C8B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// txt_available.text = "Available papers: "+statics.avaliblePaper;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txt_available_4;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral868A674ED61F216CCB4A6241DDDB5C40F300C8B7, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// foreach (Text txt in txt_count)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_3 = __this->___txt_count_5;
		V_0 = L_3;
		V_1 = 0;
		goto IL_004a;
	}

IL_002a:
	{
		// foreach (Text txt in txt_count)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// txt.text = "Score: "+statics.score;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004a:
	{
		// foreach (Text txt in txt_count)
		int32_t L_11 = V_1;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// foreach (Text txt in txt_bestscore)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_13 = __this->___txt_bestscore_6;
		V_0 = L_13;
		V_1 = 0;
		goto IL_007b;
	}

IL_005b:
	{
		// foreach (Text txt in txt_bestscore)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// txt.text = "Best score: "+statics.bestScore;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___bestScore_18), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral285705BDC348071344FEC49C8144DF7EC61E72B9, L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007b:
	{
		// foreach (Text txt in txt_bestscore)
		int32_t L_21 = V_1;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_005b;
		}
	}
	{
		// foreach (Text txt in txt_coins)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_23 = __this->___txt_coins_7;
		V_0 = L_23;
		V_1 = 0;
		goto IL_00ac;
	}

IL_008c:
	{
		// foreach (Text txt in txt_coins)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		// txt.text = "Coins: "+statics.coins;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19), NULL);
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A, L_28, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_29);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ac:
	{
		// foreach (Text txt in txt_coins)
		int32_t L_31 = V_1;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_008c;
		}
	}
	{
		// if (statics.firstStart == false && statics.inShop == false){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_33 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___firstStart_12;
		if (L_33)
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_34 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___inShop_14;
		if (L_34)
		{
			goto IL_00d8;
		}
	}
	{
		// StartPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___StartPanel_10;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// infText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___infText_8;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
	}

IL_00d8:
	{
		// papers = GameObject.FindGameObjectsWithTag("Paper");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37;
		L_37 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0, NULL);
		__this->___papers_20 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___papers_20), (void*)L_37);
		// if(papers.Length == 0 && statics.avaliblePaper < 1){
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___papers_20;
		NullCheck(L_38);
		if ((((RuntimeArray*)L_38)->max_length))
		{
			goto IL_013f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_39 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		if ((((int32_t)L_39) >= ((int32_t)1)))
		{
			goto IL_013f;
		}
	}
	{
		// statics.finishGame = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11 = (bool)1;
		// if (statics.score > statics.bestScore) {
		int32_t L_40 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		int32_t L_41 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___bestScore_18;
		if ((((int32_t)L_40) <= ((int32_t)L_41)))
		{
			goto IL_013f;
		}
	}
	{
		// statics.bestScore = statics.score;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_42 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___bestScore_18 = L_42;
		// PlayerPrefs.SetInt("BestScore", statics.bestScore);
		int32_t L_43 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___bestScore_18;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral2B4CB989CF705BDB31F2D19B8AB3AB7081C4C9DB, L_43, NULL);
		// PlayerPrefs.SetInt("Coins", statics.coins);
		int32_t L_44 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_44, NULL);
		// newScoreText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___newScoreText_12;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
	}

IL_013f:
	{
		// if (statics.avaliblePaper <= 0 && statics.finishGame == true){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_46 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17;
		if ((((int32_t)L_46) > ((int32_t)0)))
		{
			goto IL_016c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_47 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11;
		if (!L_47)
		{
			goto IL_016c;
		}
	}
	{
		// diedpanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___diedpanel_9;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		// infText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___infText_8;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// closeBaskets();
		UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16(__this, NULL);
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::restartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_restartGame_m9CAFEFF60995A438EDEDB5FAF714990E5E4EF373 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.scriptActive = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)1;
		// statics.canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
		// statics.canSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawnBasket_8 = (bool)1;
		// statics.canMoveBasket = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9 = (bool)0;
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// statics.hasOneInShoot = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)0;
		// statics.finishGame = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11 = (bool)0;
		// newScoreText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___newScoreText_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// ad.ShowAd();
		InterstitialAds_tBA5E7C80BBFE70D9C3F902E7677776A4299401B9* L_1 = __this->___ad_21;
		NullCheck(L_1);
		InterstitialAds_ShowAd_mEB24E644FC8AF6D01A93E02DC8BD02FCDE91D490(L_1, NULL);
		// statics.score = 0;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___score_16 = 0;
		// statics.prevScore = 0;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___prevScore_15 = 0;
		// statics.avaliblePaper = 5;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = 5;
		// diedpanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___diedpanel_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// infText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___infText_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::newLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_newLife_m3101CDCF9D0AA9D1A1061E53F32413BAB4E5A4EB (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.scriptActive = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___scriptActive_4 = (bool)1;
		// statics.canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
		// statics.canSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawnBasket_8 = (bool)1;
		// statics.canMoveBasket = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canMoveBasket_9 = (bool)0;
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// statics.hasOneInShoot = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)0;
		// statics.finishGame = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11 = (bool)0;
		// newScoreText.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___newScoreText_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// statics.avaliblePaper = 5;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___avaliblePaper_17 = 5;
		// diedpanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___diedpanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// infText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___infText_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Pause_m01E3E237F54AEE9CCFA2CABFE0C23221EBFA73C7 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	{
		// PausePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PausePanel_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::Countinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_Countinue_m4A9AE22921BD32A120270AB9547E1B3F69130C41 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	{
		// PausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PausePanel_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::soundOf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_soundOf_mCC234904C593DB41C7969CC8CDFDD22D7CDD0410 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* V_2 = NULL;
	{
		// foreach (GameObject item in SoundOn)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___SoundOn_16;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject item in SoundOn)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.SetActive(true);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (GameObject item in SoundOn)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (GameObject item in SoundOf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___SoundOf_17;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (GameObject item in SoundOf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// item.SetActive(false);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// foreach (GameObject item in SoundOf)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// foreach (AudioSource audio in audios)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_16 = __this->___audios_18;
		V_2 = L_16;
		V_1 = 0;
		goto IL_0054;
	}

IL_0047:
	{
		// foreach (AudioSource audio in audios)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_17 = V_2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// audio.enabled = false;
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0054:
	{
		// foreach (AudioSource audio in audios)
		int32_t L_22 = V_1;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI_Manager::soundOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_soundOn_m07952A56525548E4DB86E383421A78579CC1D811 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* V_2 = NULL;
	{
		// foreach (GameObject item in SoundOn)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___SoundOn_16;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject item in SoundOn)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.SetActive(false);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (GameObject item in SoundOn)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (GameObject item in SoundOf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___SoundOf_17;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (GameObject item in SoundOf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// item.SetActive(true);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// foreach (GameObject item in SoundOf)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// foreach (AudioSource audio in audios)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_16 = __this->___audios_18;
		V_2 = L_16;
		V_1 = 0;
		goto IL_0054;
	}

IL_0047:
	{
		// foreach (AudioSource audio in audios)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_17 = V_2;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// audio.enabled = true;
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)1, NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0054:
	{
		// foreach (AudioSource audio in audios)
		int32_t L_22 = V_1;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI_Manager::shopOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_shopOn_mD4C22C9F5133EFC9E591871E1F19A8FC3A9CF8C9 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// diedpanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___diedpanel_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (statics.finishGame == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___finishGame_11;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// diedpanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___diedpanel_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		goto IL_0034;
	}

IL_0021:
	{
		// else if (statics.firstStart == true) {
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		bool L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___firstStart_12;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// StartPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___StartPanel_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0034:
	{
		// papers = GameObject.FindGameObjectsWithTag("Paper");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral6A708714614A806C2A182A4B4E58E0ABDB7927F0, NULL);
		__this->___papers_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___papers_20), (void*)L_5);
		// foreach (GameObject paper in papers) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___papers_20;
		V_0 = L_6;
		V_1 = 0;
		goto IL_005b;
	}

IL_004f:
	{
		// foreach (GameObject paper in papers) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// Destroy(paper);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005b:
	{
		// foreach (GameObject paper in papers) {
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// shop.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___shop_13;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// statics.inShop = true;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___inShop_14 = (bool)1;
		// }
		return;
	}
}
// System.Void UI_Manager::shopOf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_shopOf_m3BAE63F6961C6335E39DBF85D631D1463C91BFD6 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shop.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shop_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// StartPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___StartPanel_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// statics.inShop = false;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___inShop_14 = (bool)0;
		// statics.canChangeTypePaper = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypePaper_26 = (bool)1;
		// statics.canSpawn = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canSpawn_6 = (bool)1;
		// statics.hasOneInShoot = false;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___hasOneInShoot_10 = (bool)0;
		// }
		return;
	}
}
// System.Void UI_Manager::chooseDefaultPaper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_chooseDefaultPaper_m12422FB29B05C60F7ABEF02AEC5FA0DEA7BD4B30 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.typePaper = statics.stockPaper;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_0);
		// PlayerPrefs.SetString("paper", statics.stockPaper);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockPaper_22;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_1, NULL);
		// }
		return;
	}
}
// System.Void UI_Manager::choosePaper1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_choosePaper1_m463F191A25E25FDF4FC85A18071484FDB2BD36D6 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.valuePaper % 3 == 0){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_0%3)))
		{
			goto IL_0023;
		}
	}
	{
		// PlayerPrefs.SetString("paper", statics.Paper1);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_1, NULL);
		// statics.typePaper = statics.Paper1;
		String_t* L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_2);
		return;
	}

IL_0023:
	{
		// if (statics.coins > 74){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)74))))
		{
			goto IL_007e;
		}
	}
	{
		// statics.typePaper = statics.Paper1;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_4);
		// statics.coins = statics.coins - 75;
		int32_t L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)75)));
		// PlayerPrefs.SetInt("Coins", statics.coins);
		int32_t L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_6, NULL);
		// PlayerPrefs.SetString("paper", statics.Paper1);
		String_t* L_7 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper1_23;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_7, NULL);
		// statics.valuePaper = statics.valuePaper * 3;
		int32_t L_8 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21 = ((int32_t)il2cpp_codegen_multiply(L_8, 3));
		// PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 3);
		int32_t L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E, ((int32_t)il2cpp_codegen_multiply(L_9, 3)), NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::choosePaper2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_choosePaper2_m06D02E01B6A9D30570400200AC58BE88B2DE2601 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.valuePaper % 5 == 0){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_0%5)))
		{
			goto IL_0023;
		}
	}
	{
		// PlayerPrefs.SetString("paper", statics.Paper2);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_1, NULL);
		// statics.typePaper = statics.Paper2;
		String_t* L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_2);
		return;
	}

IL_0023:
	{
		// if (statics.coins > 74){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)74))))
		{
			goto IL_007e;
		}
	}
	{
		// statics.typePaper = statics.Paper2;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_4);
		// statics.coins = statics.coins - 75;
		int32_t L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)75)));
		// PlayerPrefs.SetInt("Coins", statics.coins);
		int32_t L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_6, NULL);
		// PlayerPrefs.SetString("paper", statics.Paper2);
		String_t* L_7 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Paper2_24;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_7, NULL);
		// statics.valuePaper = statics.valuePaper * 5;
		int32_t L_8 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21 = ((int32_t)il2cpp_codegen_multiply(L_8, 5));
		// PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 5);
		int32_t L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E, ((int32_t)il2cpp_codegen_multiply(L_9, 5)), NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::chooseIphone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_chooseIphone_mE91969FCD7B321E10746BA814E9D5BAE14D6ED94 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.valuePaper % 7 == 0){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		if (((int32_t)(L_0%7)))
		{
			goto IL_0023;
		}
	}
	{
		// statics.typePaper = statics.iphone;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_1);
		// PlayerPrefs.SetString("paper", statics.iphone);
		String_t* L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_2, NULL);
		return;
	}

IL_0023:
	{
		// if (statics.coins > 149){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)149))))
		{
			goto IL_0084;
		}
	}
	{
		// statics.typePaper = statics.iphone;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typePaper_20), (void*)L_4);
		// statics.coins = statics.coins - 150;
		int32_t L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)150)));
		// PlayerPrefs.SetInt("Coins", statics.coins);
		int32_t L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_6, NULL);
		// PlayerPrefs.SetString("paper", statics.iphone);
		String_t* L_7 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___iphone_25;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralAEF3418D2771DB12EC11A188759E7748CDD23056, L_7, NULL);
		// statics.valuePaper = statics.valuePaper * 7;
		int32_t L_8 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21 = ((int32_t)il2cpp_codegen_multiply(L_8, 7));
		// PlayerPrefs.SetInt("PaperTypes", statics.valuePaper * 7);
		int32_t L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valuePaper_21;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral8BB80A6F14797E799F6EEFFA0E718DD35417510E, ((int32_t)il2cpp_codegen_multiply(L_9, 7)), NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::chooseDefaultBasket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_chooseDefaultBasket_m898A1154FA76EB3E5EB75AC7B2C7B1750E8698A9 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statics.typeBasket = statics.stockBasket;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27), (void*)L_0);
		// PlayerPrefs.SetString("basket", statics.stockBasket);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___stockBasket_29;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_1, NULL);
		// closeBaskets();
		UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16(__this, NULL);
		// statics.canChangeTypeBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31 = (bool)1;
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// }
		return;
	}
}
// System.Void UI_Manager::chooseRabauBasket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_chooseRabauBasket_mFCE09A6C5B3455710F87D89E2E2D56BBDB5C289C (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4B9C289A8487F757BE9A4D690FB50BA02F47E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statics.valueBasket % 18 == 0){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28;
		if (((int32_t)(L_0%((int32_t)18))))
		{
			goto IL_0045;
		}
	}
	{
		// PlayerPrefs.SetString("basket", statics.Basket1);
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_1 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_1, NULL);
		// statics.typeBasket = statics.Basket1;
		String_t* L_2 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27), (void*)L_2);
		// PlayerPrefs.SetString("basket", statics.Basket1);
		String_t* L_3 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_3, NULL);
		// closeBaskets();
		UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16(__this, NULL);
		// statics.canChangeTypeBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31 = (bool)1;
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		return;
	}

IL_0045:
	{
		// if (statics.coins > 249){
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		int32_t L_4 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)249))))
		{
			goto IL_00c6;
		}
	}
	{
		// statics.typeBasket = statics.Basket1;
		il2cpp_codegen_runtime_class_init_inline(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var);
		String_t* L_5 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___typeBasket_27), (void*)L_5);
		// PlayerPrefs.SetString("basket", statics.Basket1);
		String_t* L_6 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_6, NULL);
		// closeBaskets();
		UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16(__this, NULL);
		// statics.canChangeTypeBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canChangeTypeBasket_31 = (bool)1;
		// statics.canReSpawnBasket = true;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___canReSpawnBasket_7 = (bool)1;
		// statics.coins = statics.coins - 250;
		int32_t L_7 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)250)));
		// PlayerPrefs.SetInt("Coins", statics.coins);
		int32_t L_8 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___coins_19;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_8, NULL);
		// PlayerPrefs.SetString("basket", statics.Basket1);
		String_t* L_9 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___Basket1_30;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC2D372DBC2C8894B73A6CC1E91D28D2943C57895, L_9, NULL);
		// statics.valueBasket = statics.valueBasket * 18;
		int32_t L_10 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28;
		((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28 = ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)18)));
		// PlayerPrefs.SetInt("BasketTypes", statics.valueBasket);
		int32_t L_11 = ((statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_StaticFields*)il2cpp_codegen_static_fields_for(statics_tD14B315B69A365FC2BF99D9CB8C4AB9C602964A6_il2cpp_TypeInfo_var))->___valueBasket_28;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralD4B9C289A8487F757BE9A4D690FB50BA02F47E6F, L_11, NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void UI_Manager::closeBaskets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager_closeBaskets_mA8B3B4C5694DA0A7BBDA89EE93BC13E20A859D16 (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// baskets = GameObject.FindGameObjectsWithTag("Basket");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8, NULL);
		__this->___baskets_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baskets_14), (void*)L_0);
		// foreach (GameObject basket in baskets) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___baskets_14;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0027;
	}

IL_001b:
	{
		// foreach (GameObject basket in baskets) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Destroy(basket);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		// foreach (GameObject basket in baskets) {
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UI_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Manager__ctor_m73CE09593602D858992558F94668FFD0AEEF2FFB (UI_Manager_t9F5092C0B7AE0FDB6B6A8CC8660EF4C18904D2E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ViewportHandler::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ViewportHandler_get_Width_m032CB376467874A1DA36BBFAF5654CF124C23BD3 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _width;
		float L_0 = __this->____width_9;
		return L_0;
	}
}
// System.Single ViewportHandler::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ViewportHandler_get_Height_mD8E244210337BC0C01F5EFB41EE2C1DAC02DC036 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _height;
		float L_0 = __this->____height_10;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_BottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomLeft_m4AE9F5FFDFEDF66D432BCA5D759F24693CA0D37A (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _bl;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____bl_11;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_BottomCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomCenter_m6AF616420D8ED953932852AECD34F44909BCDB29 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _bc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____bc_12;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_BottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomRight_mF9384ADCE680F75DFB01EE2564796F60FE7E8975 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _br;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____br_13;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_MiddleLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleLeft_m2BBDDDC50773999B0F7E2EBA156ACB7DA43F2E73 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _ml;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____ml_14;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_MiddleCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleCenter_mB2F46C2B1EE372C8A7B4A26E218515F3561A7F47 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _mc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____mc_15;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_MiddleRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleRight_mF691344F3CF3F8EC170900B108987FFBCDE1DD2C (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _mr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____mr_16;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_TopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopLeft_m92725F227C0BD38BA677BAF0286419747E256C42 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tl;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tl_17;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_TopCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopCenter_m6EACFE08FA83428178C5529C8783A68B58D47A30 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tc_18;
		return L_0;
	}
}
// UnityEngine.Vector3 ViewportHandler::get_TopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopRight_m8A4D91478036135938CBDB4C2FA509A7BD45F5D8 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tr_19;
		return L_0;
	}
}
// System.Void ViewportHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler_Awake_m31D489B872124E335186001F64BBA12C72F0DE4E (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___camera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camera_8), (void*)L_0);
		// Instance = this;
		((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_StaticFields*)il2cpp_codegen_static_fields_for(ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121_il2cpp_TypeInfo_var))->___Instance_7), (void*)__this);
		// ComputeResolution();
		ViewportHandler_ComputeResolution_mA557730906259C0F12F003358F885349C8F536A8(__this, NULL);
		// }
		return;
	}
}
// System.Void ViewportHandler::ComputeResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler_ComputeResolution_mA557730906259C0F12F003358F885349C8F536A8 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (constraint == Constraint.Landscape)
		int32_t L_0 = __this->___constraint_6;
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		// camera.orthographicSize = 1f / camera.aspect * UnitsSize / 2f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___camera_8;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___camera_8;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_2, NULL);
		float L_4 = __this->___UnitsSize_5;
		NullCheck(L_1);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, ((float)(((float)il2cpp_codegen_multiply(((float)((1.0f)/L_3)), L_4))/(2.0f))), NULL);
		goto IL_004a;
	}

IL_0033:
	{
		// camera.orthographicSize = UnitsSize / 2f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___camera_8;
		float L_6 = __this->___UnitsSize_5;
		NullCheck(L_5);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_5, ((float)(L_6/(2.0f))), NULL);
	}

IL_004a:
	{
		// _height = 2f * camera.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___camera_8;
		NullCheck(L_7);
		float L_8;
		L_8 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_7, NULL);
		__this->____height_10 = ((float)il2cpp_codegen_multiply((2.0f), L_8));
		// _width = _height * camera.aspect;
		float L_9 = __this->____height_10;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___camera_8;
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_10, NULL);
		__this->____width_9 = ((float)il2cpp_codegen_multiply(L_9, L_11));
		// cameraX = camera.transform.position.x;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___camera_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		V_4 = L_15;
		// cameraY = camera.transform.position.y;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___camera_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		V_5 = L_19;
		// leftX = cameraX - _width / 2;
		float L_20 = V_4;
		float L_21 = __this->____width_9;
		V_0 = ((float)il2cpp_codegen_subtract(L_20, ((float)(L_21/(2.0f)))));
		// rightX = cameraX + _width / 2;
		float L_22 = V_4;
		float L_23 = __this->____width_9;
		V_1 = ((float)il2cpp_codegen_add(L_22, ((float)(L_23/(2.0f)))));
		// topY = cameraY + _height / 2;
		float L_24 = V_5;
		float L_25 = __this->____height_10;
		V_2 = ((float)il2cpp_codegen_add(L_24, ((float)(L_25/(2.0f)))));
		// bottomY = cameraY - _height / 2;
		float L_26 = V_5;
		float L_27 = __this->____height_10;
		V_3 = ((float)il2cpp_codegen_subtract(L_26, ((float)(L_27/(2.0f)))));
		// _bl = new Vector3(leftX, bottomY, 0);
		float L_28 = V_0;
		float L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), L_28, L_29, (0.0f), /*hidden argument*/NULL);
		__this->____bl_11 = L_30;
		// _bc = new Vector3(cameraX, bottomY, 0);
		float L_31 = V_4;
		float L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_31, L_32, (0.0f), /*hidden argument*/NULL);
		__this->____bc_12 = L_33;
		// _br = new Vector3(rightX, bottomY, 0);
		float L_34 = V_1;
		float L_35 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_34, L_35, (0.0f), /*hidden argument*/NULL);
		__this->____br_13 = L_36;
		// _ml = new Vector3(leftX, cameraY, 0);
		float L_37 = V_0;
		float L_38 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), L_37, L_38, (0.0f), /*hidden argument*/NULL);
		__this->____ml_14 = L_39;
		// _mc = new Vector3(cameraX, cameraY, 0);
		float L_40 = V_4;
		float L_41 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_40, L_41, (0.0f), /*hidden argument*/NULL);
		__this->____mc_15 = L_42;
		// _mr = new Vector3(rightX, cameraY, 0);
		float L_43 = V_1;
		float L_44 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), L_43, L_44, (0.0f), /*hidden argument*/NULL);
		__this->____mr_16 = L_45;
		// _tl = new Vector3(leftX, topY, 0);
		float L_46 = V_0;
		float L_47 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_46, L_47, (0.0f), /*hidden argument*/NULL);
		__this->____tl_17 = L_48;
		// _tc = new Vector3(cameraX, topY, 0);
		float L_49 = V_4;
		float L_50 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), L_49, L_50, (0.0f), /*hidden argument*/NULL);
		__this->____tc_18 = L_51;
		// _tr = new Vector3(rightX, topY, 0);
		float L_52 = V_1;
		float L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), L_52, L_53, (0.0f), /*hidden argument*/NULL);
		__this->____tr_19 = L_54;
		// }
		return;
	}
}
// System.Void ViewportHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler_Update_m2839D0400FCB06D1CB3C85FD5291A7051738011D (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ViewportHandler::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler_OnDrawGizmos_mA8BDCE4EA3F6B7E6DE30C6D0DAC7965F329A73B8 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Gizmos.color = wireColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___wireColor_4;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Matrix4x4 temp = Gizmos.matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Gizmos_get_matrix_m9B79C31AA3E8A73A1F734FCE3559590ED6BF17AC(NULL);
		// Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, Vector3.one);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_3, L_5, L_6, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_7, NULL);
		// if (camera.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___camera_8;
		NullCheck(L_8);
		bool L_9;
		L_9 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_8, NULL);
		G_B1_0 = L_1;
		if (!L_9)
		{
			G_B2_0 = L_1;
			goto IL_00c6;
		}
	}
	{
		// float spread = camera.farClipPlane - camera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___camera_8;
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_10, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___camera_8;
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_12, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		// float center = (camera.farClipPlane + camera.nearClipPlane) * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___camera_8;
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___camera_8;
		NullCheck(L_16);
		float L_17;
		L_17 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_16, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_15, L_17)), (0.5f)));
		// Gizmos.DrawWireCube(new Vector3(0, 0, center), new Vector3(camera.orthographicSize * 2 * camera.aspect, camera.orthographicSize * 2, spread));
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.0f), L_18, /*hidden argument*/NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___camera_8;
		NullCheck(L_20);
		float L_21;
		L_21 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_20, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___camera_8;
		NullCheck(L_22);
		float L_23;
		L_23 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_22, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___camera_8;
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_24, NULL);
		float L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, (2.0f))), L_23)), ((float)il2cpp_codegen_multiply(L_25, (2.0f))), L_26, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_19, L_27, NULL);
		G_B3_0 = G_B1_0;
		goto IL_00fc;
	}

IL_00c6:
	{
		// Gizmos.DrawFrustum(Vector3.zero, camera.fieldOfView, camera.farClipPlane, camera.nearClipPlane, camera.aspect);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = __this->___camera_8;
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_29, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = __this->___camera_8;
		NullCheck(L_31);
		float L_32;
		L_32 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_31, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = __this->___camera_8;
		NullCheck(L_33);
		float L_34;
		L_34 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_33, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = __this->___camera_8;
		NullCheck(L_35);
		float L_36;
		L_36 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_35, NULL);
		Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31(L_28, L_30, L_32, L_34, L_36, NULL);
		G_B3_0 = G_B2_0;
	}

IL_00fc:
	{
		// Gizmos.matrix = temp;
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void ViewportHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewportHandler__ctor_m16A41E74FD7E46ED24C4019E7CB6895CA5CEDA55 (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// public Color wireColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___wireColor_4 = L_0;
		// public float UnitsSize = 1; // size of your scene in unity units
		__this->___UnitsSize_5 = (1.0f);
		// public Constraint constraint = Constraint.Portrait;
		__this->___constraint_6 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomLeft_m4AE9F5FFDFEDF66D432BCA5D759F24693CA0D37A_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _bl;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____bl_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomCenter_m6AF616420D8ED953932852AECD34F44909BCDB29_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _bc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____bc_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_BottomRight_mF9384ADCE680F75DFB01EE2564796F60FE7E8975_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _br;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____br_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleLeft_m2BBDDDC50773999B0F7E2EBA156ACB7DA43F2E73_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _ml;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____ml_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleCenter_mB2F46C2B1EE372C8A7B4A26E218515F3561A7F47_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _mc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____mc_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_MiddleRight_mF691344F3CF3F8EC170900B108987FFBCDE1DD2C_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _mr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____mr_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopLeft_m92725F227C0BD38BA677BAF0286419747E256C42_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tl;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tl_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopCenter_m6EACFE08FA83428178C5529C8783A68B58D47A30_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tc_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ViewportHandler_get_TopRight_m8A4D91478036135938CBDB4C2FA509A7BD45F5D8_inline (ViewportHandler_tCB842A1EF7369C19C7FD5F11AF08D967FE3B0121* __this, const RuntimeMethod* method) 
{
	{
		// return _tr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____tr_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
