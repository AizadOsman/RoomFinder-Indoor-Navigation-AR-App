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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ZXing.Result>
struct Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364;
// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_t1DBB9AEFB8C58CA4AD9AFE5C32CA4C9CF3E58E8B;
// Google.FutureAPIImpl`1<System.Object>
struct FutureAPIImpl_1_tB70B1803C3C8E7E6A30F4E5B318E1BCBA62575DA;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B;
// Google.Future`1<System.Object>
struct Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Target>
struct IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996;
// System.Collections.Generic.IEnumerable`1<TargetFacade>
struct IEnumerable_1_tF3B8FD5596FA13C92B5ED485F4835E2D2D158A6D;
// System.Collections.Generic.IEnumerable`1<TMPro.TMP_Dropdown/OptionData>
struct IEnumerable_1_tA6A98529A099A09F113B700F78085F2959AE4BB6;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A;
// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Target>
struct Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70;
// System.Predicate`1<TargetFacade>
struct Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Rendering.CameraEvent[]
struct CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
// TargetFacade[]
struct TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARCameraBackground
struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB;
// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GetImageAlternative
struct GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// GoogleAuthentication
struct GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9;
// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349;
// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// ZXing.IBarcodeReader
struct IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Google.ISignInImpl
struct ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// NavigationButtonHandler
struct NavigationButtonHandler_tDE609544FB44408AB1F45F1F59482DEEF4EAD1DA;
// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpenURL
struct OpenURL_t9DA86971C4C6E34FF922861FA8D7BAD7E0024D0A;
// PanelManager
struct PanelManager_tD4561B132CAC817094CB325908EC8FA11419020D;
// PathArrowVisualization
struct PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE;
// PathLineVisualization
struct PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8;
// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365;
// ZXing.Reader
struct Reader_t1A9C7CADF7A2C1EDCB670DAA63F259E7B798FE4C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScManager
struct ScManager_tF038470CA09807B50B844D2EFC2D2028B56F3A16;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// SetNavigationTarget
struct SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0;
// SetUIText
struct SetUIText_tF89CCAB602C938CA025BC2B6C4A49410EF4A6B05;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// SwitchPathVisualization
struct SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1;
// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751;
// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5;
// GoogleAuthentication/<UpdateUI>d__12
struct U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB;
// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08;
// SetNavigationTarget/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47;
// TargetHandler/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral014894C6326BD14EF9C75CB62D99AC0C417C056F;
IL2CPP_EXTERN_C String_t* _stringLiteral038E876A060266EA97105DE3A304B371562888C1;
IL2CPP_EXTERN_C String_t* _stringLiteral04426A9B1B9D6F113C9502121C265280A07C6901;
IL2CPP_EXTERN_C String_t* _stringLiteral0562B5C2BE1ABC915AC2CE0F40A3908D30273C4E;
IL2CPP_EXTERN_C String_t* _stringLiteral06079C41056F790064486A325DDC2517FF89916C;
IL2CPP_EXTERN_C String_t* _stringLiteral06C431D26B567ABCCC91EEF608B28E2E2CE43AFC;
IL2CPP_EXTERN_C String_t* _stringLiteral08FFFD0FAAAE40FDF04605B2AFA00E0F02257147;
IL2CPP_EXTERN_C String_t* _stringLiteral09B9D83DE181B1CEA106741BFD9320E85327F4DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C32BEF03C3B4717F9BC525A7FF85BBD8ED6FB03;
IL2CPP_EXTERN_C String_t* _stringLiteral0E702BB93255EF664350ED02486133AD5C5186A7;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6CE3304236D795601C979C0BC30D6587345F08;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6F75F829944578CDF32224B64862018E13FD92;
IL2CPP_EXTERN_C String_t* _stringLiteral101856CED3894807851C982F3ADDFDB3CDF52BE7;
IL2CPP_EXTERN_C String_t* _stringLiteral108B4F81EE308DE82D54520F7B864C82293182B3;
IL2CPP_EXTERN_C String_t* _stringLiteral138ABD9514DA2AAAE4358E0F7F0CA623C0EAB9A8;
IL2CPP_EXTERN_C String_t* _stringLiteral14CDAE8C796EA81F5B731360400CB2695311843D;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE5E08124EF50819A31285A01ED4C77EF4DA9F5;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7174F650392327343D219ED99E53AE1B994CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral1F6A16E1F6DC0D860BFE155CAA32FDE7C030E081;
IL2CPP_EXTERN_C String_t* _stringLiteral20DA695275375BFF63ACE6EAABAABE6083FD5DB2;
IL2CPP_EXTERN_C String_t* _stringLiteral229B5AB956AB06878DA33090F4B4E2C5022C64CC;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24ECCBBAA1E1402A2EB20F608A5D510006B45474;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE6CEDFEA6724B56C608930D5442B481B74994D;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral2E782F8C452BED9E38580FE0B797C763B546A9F2;
IL2CPP_EXTERN_C String_t* _stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB;
IL2CPP_EXTERN_C String_t* _stringLiteral394BE7DCCC73B3CCB50368608FD6BDC1C100D48A;
IL2CPP_EXTERN_C String_t* _stringLiteral39E078DE955A506D891A76734D886C648085235A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A835C505E220425CADAFE7BE0DB7EBDEC51110D;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAEB94C2BCD4C1D03D16DBF86AA23636C82C52C;
IL2CPP_EXTERN_C String_t* _stringLiteral3E112574B21018982FEA5F49395F54545F3D2D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral40DE9C258BF34D273194C6914A62A1BB6880A2E2;
IL2CPP_EXTERN_C String_t* _stringLiteral412EF416D64A334A845C0BA4943C0A024EBCDB14;
IL2CPP_EXTERN_C String_t* _stringLiteral46C9E43FC28A9A5BC41DA3EF80173C0D95A373F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4CD266B31F2A55FF21411862612A1FF26F8F470A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1026522F4BBB8A131D925581C161B56D205251;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1AD6E293ED062131945827B2FE672753336EEB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F9C81898EDA8CDD43231357C0DB907893340DBE;
IL2CPP_EXTERN_C String_t* _stringLiteral51F1778B3A96B44E8A28B7B16C4749CC83EFFDFF;
IL2CPP_EXTERN_C String_t* _stringLiteral5372A474816BD7DC0CA5E55171724B9140B52EDB;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF27205AE608B6490E4B686CBE1944FEE3C180E;
IL2CPP_EXTERN_C String_t* _stringLiteral5B57A60427E4183BDDEA667747A0DDBA1272AA3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D519D19E48F64BE4EA9A793A2554954252E1A89;
IL2CPP_EXTERN_C String_t* _stringLiteral62A1377C473426D24CA7B6B630067E7A070F239A;
IL2CPP_EXTERN_C String_t* _stringLiteral657062F3B1413BACC9328173542D2D3D50A44A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC;
IL2CPP_EXTERN_C String_t* _stringLiteral6ACB0A6D4775E02A20F2C52D80CDF9561EA2457A;
IL2CPP_EXTERN_C String_t* _stringLiteral709D3F72B5AABCCE8F1E64F84577452213DCE10E;
IL2CPP_EXTERN_C String_t* _stringLiteral7204D82B2FF027CDA0F03D158FD3A863D0FE1563;
IL2CPP_EXTERN_C String_t* _stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7;
IL2CPP_EXTERN_C String_t* _stringLiteral76B0610EC0B26B6E460032BD1388DDBDC34B2C45;
IL2CPP_EXTERN_C String_t* _stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A50C3AE27005DDF80B813A23076D2A59B65C0B0;
IL2CPP_EXTERN_C String_t* _stringLiteral8028FA20022A371C9F7D8F5D5E4325339C487840;
IL2CPP_EXTERN_C String_t* _stringLiteral825933763E2EB6B8A3F938B04CC7FDCD82C293FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8443F7D727AC79032B0BE7BC1DADB8307601E721;
IL2CPP_EXTERN_C String_t* _stringLiteral845AD0F82ACF1EA06B87350A9128E6FCBA67E8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral848BDFD49F8BFE11DA95D6656AFC4782556AD061;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral88C96F975BBFCBCFF976E8259892479A2A554B42;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC80465381CEF893F94E7488BB31BB6925C639A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E2D569C05AAD0A3F1D050890C46190BF8761D12;
IL2CPP_EXTERN_C String_t* _stringLiteral90D9CA70E170D6F9E5A05D4FC3E0E2ECDB19B5D8;
IL2CPP_EXTERN_C String_t* _stringLiteral94B441D3721D498DDF0C5C2BD82E9CABDD2E6097;
IL2CPP_EXTERN_C String_t* _stringLiteral956E396EAE331F38AAF9045C2B7C6EB407AC1ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral95C3AFC073D9C9233F0371331B5722E7429C49FA;
IL2CPP_EXTERN_C String_t* _stringLiteral95F3B9A49923286DB60D385300166DD0DA8767FB;
IL2CPP_EXTERN_C String_t* _stringLiteral9601D314D689FB8E0EAFF5D4EA6BE678FF24D89B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B740AB0BB4F90201405948DFDBAABE694FCA664;
IL2CPP_EXTERN_C String_t* _stringLiteralA0922B85175D61A3495B95C4C85DCCE74D487152;
IL2CPP_EXTERN_C String_t* _stringLiteralA14A1C92F24D3A8E6FF158ED461101CA4F3FEEA7;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CB3951E19B1151E3A59F82783E567B1FEF1209;
IL2CPP_EXTERN_C String_t* _stringLiteralA4257557A22321785593E30D434D9D4B8D372502;
IL2CPP_EXTERN_C String_t* _stringLiteralAA58C02ABC5AF4D13D458AF3D63DE1F4A2B8B232;
IL2CPP_EXTERN_C String_t* _stringLiteralAC4EC55EEA0700C886616DC2EC50097D54C09271;
IL2CPP_EXTERN_C String_t* _stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAE46C973094B60EB340BE35C84BABBA2D8794298;
IL2CPP_EXTERN_C String_t* _stringLiteralB0DBC6181512268BE6BE32A0F8D9C598F9D8BDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralB39CD8EDA5616D19B84E59280FEEB4074461BD54;
IL2CPP_EXTERN_C String_t* _stringLiteralB4822143145DF2236229E0B7024FDDE74D72E8E0;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D42B1C4BCADAA032950EC95CEE934D2793B6EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB7D46D73BAA693C07079DE75AE2F991407BF0A6E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E652EBA6D9E27F0972B8A1296C195AB546FDAB;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7B262153D4B29652018407029E3D7DB3556285;
IL2CPP_EXTERN_C String_t* _stringLiteralBAE21F25C8FE99931DAD5B82890DC7AB3D03430E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCDCEA14110360AC6CBD2DA8EBB81A17E596D7AE;
IL2CPP_EXTERN_C String_t* _stringLiteralBFF66555F7B9324714CE3A2D37D592266ADBD918;
IL2CPP_EXTERN_C String_t* _stringLiteralC0316F59FE7A52AA2C3DB78ADA7FEABE7F01CC27;
IL2CPP_EXTERN_C String_t* _stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95;
IL2CPP_EXTERN_C String_t* _stringLiteralC66A6F901CBFC37E61C44F4343088F2A97D3C3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralC896DB46E019CA0800607785A4600AF7AFCC5EB1;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D79F550DA7CA4684E4C2EEAE3F99D0FBD9461B;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E49EC1106EBA82D0033008A87EDC6CC257DB95;
IL2CPP_EXTERN_C String_t* _stringLiteralCFE2DBE50D38FA09EC84DDE3E860F8E8B996D903;
IL2CPP_EXTERN_C String_t* _stringLiteralD16972158E954C249D3728A4B34324F4BF037696;
IL2CPP_EXTERN_C String_t* _stringLiteralD3ABF4012F8D99991A90B0666484E77EE1A9FD24;
IL2CPP_EXTERN_C String_t* _stringLiteralD400EB487C20E145E8637C4026A2356D9E546258;
IL2CPP_EXTERN_C String_t* _stringLiteralD582C11C63A9DE1D8CE669C84FEC3E9481FC041B;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD75E4C3AFF2703E6FDC294B7355CFFA1C3425AD6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBC230F0A5A4062E892C3941D5B0F18723C343C;
IL2CPP_EXTERN_C String_t* _stringLiteralE2989B64B8599CB74A18AAEE92671DCC2647A316;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E86EE6A2F832A44E224D7D412CF9DA6A7BD954;
IL2CPP_EXTERN_C String_t* _stringLiteralE5347AB3B036AB2E3EA3E15342F02A2152204BC5;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E780868586EBBABAA66F2FD8A30DE4F281D6D6;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F55D71778EE0C53930BB20FEE3ECE666BF9B96;
IL2CPP_EXTERN_C String_t* _stringLiteralE8893425E2D18DEC8F381D5D346EE7EFD24563F7;
IL2CPP_EXTERN_C String_t* _stringLiteralE89797D9338209F04C178D4DB0BB1DBF983F52E4;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD2E78DBD20FC8E9DEEE53D7059B670E1EC4661;
IL2CPP_EXTERN_C String_t* _stringLiteralF1330B49F85AEF6E6245CF3A2A1DA1C9E5FD0FEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF23F42411CB620102A99D0593BDA057F7E95A81E;
IL2CPP_EXTERN_C String_t* _stringLiteralF24633A76605537D939871FBC4E2960A28EF6200;
IL2CPP_EXTERN_C String_t* _stringLiteralF381C30E53BA1C0AEDA875A3F4D63A1E93CA2F27;
IL2CPP_EXTERN_C String_t* _stringLiteralF6F018C7C79EDD8E1502CC30909A7D9CEE0003AA;
IL2CPP_EXTERN_C String_t* _stringLiteralF97AA1B5221C0B0FAE01AFD5A8CC75D40BA351E5;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D995C91B43D0B2C9FB7F4E8A7DBD4E9F72101A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9F97BFB7EBDC43D235B6BEAEF83276924A6611D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFB8FA360FF0406EEBA6F6C148EBCE105B8FD135A;
IL2CPP_EXTERN_C String_t* _stringLiteralFBF7351FF72EAA11CB0CFCBAD1A2C82B5306E934;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleAuthentication_OnAuthenticationFinished_m5F751D05DE65D3394F44A963C75B0EF05B2BB893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m768FDCB2B51FF46AB8700FAC2C739F41176F0143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CSetCurrentNavigationTargetU3Eb__0_mB1FD55AEBABD9DFCE55990DDA538F5A3C7D959DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateUIU3Ed__12_System_Collections_IEnumerator_Reset_mA9F82F59954514E209CD344C25EBD0048CA0DC2D_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B  : public RuntimeObject
{
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254  : public RuntimeObject
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::createRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___createRGBLuminanceSource_3;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::createBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___createBinarizer_4;
	// System.Boolean ZXing.BarcodeReaderGeneric::usePreviousState
	bool ___usePreviousState_5;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric::options
	DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB* ___options_6;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric::explicitResultPointFound
	Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF* ___explicitResultPointFound_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric::ResultFound
	Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6* ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
};

struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254_StaticFields
{
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::defaultCreateBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::defaultCreateRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___defaultCreateRGBLuminanceSource_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA  : public RuntimeObject
{
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;
};

struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields
{
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___theConfiguration_1;
};

// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8  : public RuntimeObject
{
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;
};

// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA  : public RuntimeObject
{
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;
};

// SceneData
struct SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6  : public RuntimeObject
{
};

struct SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields
{
	// System.String SceneData::TargetPanel
	String_t* ___TargetPanel_0;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE  : public RuntimeObject
{
	// Target[] TargetWrapper::TargetList
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___TargetList_0;
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

// GoogleAuthentication/<UpdateUI>d__12
struct U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB  : public RuntimeObject
{
	// System.Int32 GoogleAuthentication/<UpdateUI>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoogleAuthentication/<UpdateUI>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.GoogleSignInUser GoogleAuthentication/<UpdateUI>d__12::user
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___user_2;
	// GoogleAuthentication GoogleAuthentication/<UpdateUI>d__12::<>4__this
	GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest GoogleAuthentication/<UpdateUI>d__12::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// SetNavigationTarget/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE  : public RuntimeObject
{
	// System.String SetNavigationTarget/<>c__DisplayClass10_0::selectedText
	String_t* ___selectedText_0;
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47  : public RuntimeObject
{
};

struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields
{
	// TargetHandler/<>c TargetHandler/<>c::<>9
	U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* ___U3CU3E9_0;
	// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData> TargetHandler/<>c::<>9__10_0
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___U3CU3E9__10_0_1;
};

// TargetHandler/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95  : public RuntimeObject
{
	// System.String TargetHandler/<>c__DisplayClass13_0::targetText
	String_t* ___targetText_0;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB  : public BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___createLuminanceSource_11;
};

struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_StaticFields
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___defaultCreateLuminanceSource_10;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7 
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// ZXing.BarcodeFormat
struct BarcodeFormat_t6AAFC3C9FCD9667A068874AE1559A09723CA3282 
{
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___2;
};

// UnityEngine.CameraClearFlags
struct CameraClearFlags_t91B921013F611457A09B92EF9C6B218CECF67202 
{
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct CameraFacingDirection_t905450A3655BD064DF73761018AB558D4FDA1247 
{
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct CameraFocusMode_t36A1BEB1F122D191F22FF6AB596CF8240EAE9668 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// Google.GoogleSignInStatusCode
struct GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B 
{
	// System.Int32 Google.GoogleSignInStatusCode::value__
	int32_t ___value___2;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.LightEstimation
struct LightEstimation_tF3690F58E54F4FB0A4759BB0A694E887C0052683 
{
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct LightEstimationMode_t9B424276A66D6FD146A6B15E9C17004869E784A8 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;
};

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t03B4F5F62D4AF16340686F7F424704E5A5EBBE20 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t01F7B649A99735E8895479D291EB177ADC8B4255 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public RuntimeObject
{
	// System.String Target::Name
	String_t* ___Name_0;
	// System.Int32 Target::FloorNumber
	int32_t ___FloorNumber_1;
	// UnityEngine.Vector3 Target::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_2;
	// UnityEngine.Vector3 Target::Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Rotation_3;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.TextureDimension
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_tC095904BA2A31037812CC727FBDCC76D11D300B2 
{
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct Format_tC705C89E270CB1D8439274E837145FE806F3DCC7 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation
struct Transformation_t26ED8CF20E035506740A8504E00ECD67AF5FD137 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation::value__
	int32_t ___value___2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<UnityEngine.CameraClearFlags>
struct Nullable_1_t14BBC3DE3B6A54EBB06977978775A190F1D6DA44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___selfHandleRef_0;
};

struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___nullSelf_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};

struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A  : public Exception_t
{
	// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_18;
};

// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture/<>c__DisplayClass5_0::userPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___userPtr_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077  : public MulticastDelegate_t
{
};

// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13  : public MulticastDelegate_t
{
};

// System.Predicate`1<Target>
struct Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70  : public MulticastDelegate_t
{
};

// System.Predicate`1<TargetFacade>
struct Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARCameraBackground
struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraBackground::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_10;
	// UnityEngine.XR.ARFoundation.ARCameraManager UnityEngine.XR.ARFoundation.ARCameraBackground::m_CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___m_CameraManager_11;
	// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.ARCameraBackground::m_OcclusionManager
	AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___m_OcclusionManager_12;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.ARFoundation.ARCameraBackground::m_CommandBuffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_CommandBuffer_13;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_UseCustomMaterial
	bool ___m_UseCustomMaterial_14;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::m_CustomMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_CustomMaterial_15;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::m_DefaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultMaterial_16;
	// System.Nullable`1<UnityEngine.CameraClearFlags> UnityEngine.XR.ARFoundation.ARCameraBackground::m_PreviousCameraClearFlags
	Nullable_1_t14BBC3DE3B6A54EBB06977978775A190F1D6DA44 ___m_PreviousCameraClearFlags_17;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraBackground::m_PreviousCameraFieldOfView
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_PreviousCameraFieldOfView_18;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_BackgroundRenderingEnabled
	bool ___m_BackgroundRenderingEnabled_19;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraBackground::m_CommandBufferCullingState
	bool ___m_CommandBufferCullingState_20;
};

struct ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703_StaticFields
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_MainTexId
	int32_t ___k_MainTexId_7;
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_DisplayTransformId
	int32_t ___k_DisplayTransformId_8;
	// System.Int32 UnityEngine.XR.ARFoundation.ARCameraBackground::k_CameraForwardScaleId
	int32_t ___k_CameraForwardScaleId_9;
	// System.Action`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraBackground::s_BeforeBackgroundRenderHandler
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___s_BeforeBackgroundRenderHandler_21;
	// System.IntPtr UnityEngine.XR.ARFoundation.ARCameraBackground::s_BeforeBackgroundRenderHandlerFuncPtr
	intptr_t ___s_BeforeBackgroundRenderHandlerFuncPtr_22;
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem UnityEngine.XR.ARFoundation.ARCameraBackground::s_CameraSubsystem
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___s_CameraSubsystem_23;
	// UnityEngine.Rendering.CameraEvent[] UnityEngine.XR.ARFoundation.ARCameraBackground::s_DefaultCameraEvents
	CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E* ___s_DefaultCameraEvents_24;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// GetImageAlternative
struct GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraBackground GetImageAlternative::arCameraBackground
	ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* ___arCameraBackground_4;
	// UnityEngine.RenderTexture GetImageAlternative::targetRenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetRenderTexture_5;
	// TMPro.TextMeshProUGUI GetImageAlternative::qrCodeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___qrCodeText_6;
	// UnityEngine.Texture2D GetImageAlternative::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_7;
	// ZXing.IBarcodeReader GetImageAlternative::reader
	RuntimeObject* ___reader_8;
};

// GoogleAuthentication
struct GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GoogleAuthentication::imageURL
	String_t* ___imageURL_4;
	// TMPro.TMP_Text GoogleAuthentication::userNameTxt
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___userNameTxt_5;
	// TMPro.TMP_Text GoogleAuthentication::userEmailTxt
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___userEmailTxt_6;
	// UnityEngine.UI.Image GoogleAuthentication::profilePic
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___profilePic_7;
	// UnityEngine.GameObject GoogleAuthentication::loginPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginPanel_8;
	// UnityEngine.GameObject GoogleAuthentication::profilePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___profilePanel_9;
	// UnityEngine.GameObject GoogleAuthentication::confirmationPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___confirmationPanel_10;
	// Google.GoogleSignInConfiguration GoogleAuthentication::configuration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration_11;
	// System.String GoogleAuthentication::webClientId
	String_t* ___webClientId_12;
};

// NavigationButtonHandler
struct NavigationButtonHandler_tDE609544FB44408AB1F45F1F59482DEEF4EAD1DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String NavigationButtonHandler::targetPanelName
	String_t* ___targetPanelName_4;
};

// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 NavigationController::<TargetPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTargetPositionU3Ek__BackingField_4;
	// UnityEngine.AI.NavMeshPath NavigationController::<CalculatedPath>k__BackingField
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___U3CCalculatedPathU3Ek__BackingField_5;
};

// OpenURL
struct OpenURL_t9DA86971C4C6E34FF922861FA8D7BAD7E0024D0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PanelManager
struct PanelManager_tD4561B132CAC817094CB325908EC8FA11419020D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PanelManager::loginPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginPanel_4;
	// UnityEngine.GameObject PanelManager::profilePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___profilePanel_5;
	// UnityEngine.GameObject PanelManager::confirmationPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___confirmationPanel_6;
};

// PathArrowVisualization
struct PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController PathArrowVisualization::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.GameObject PathArrowVisualization::arrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrow_5;
	// UnityEngine.UI.Slider PathArrowVisualization::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// System.Single PathArrowVisualization::moveOnDistance
	float ___moveOnDistance_7;
	// UnityEngine.AI.NavMeshPath PathArrowVisualization::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_8;
	// System.Single PathArrowVisualization::currentDistance
	float ___currentDistance_9;
	// UnityEngine.Vector3[] PathArrowVisualization::pathOffset
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pathOffset_10;
	// UnityEngine.Vector3 PathArrowVisualization::nextNavigationPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextNavigationPoint_11;
};

// PathLineVisualization
struct PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController PathLineVisualization::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.LineRenderer PathLineVisualization::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_5;
	// UnityEngine.UI.Slider PathLineVisualization::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// UnityEngine.AI.NavMeshPath PathLineVisualization::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_7;
	// UnityEngine.Vector3[] PathLineVisualization::calculatedPathAndOffset
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___calculatedPathAndOffset_8;
};

// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession QrCodeRecenter::session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin QrCodeRecenter::sessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager QrCodeRecenter::cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager_6;
	// TargetHandler QrCodeRecenter::targetHandler
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* ___targetHandler_7;
	// UnityEngine.GameObject QrCodeRecenter::qrCodeScanningPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___qrCodeScanningPanel_8;
	// UnityEngine.Texture2D QrCodeRecenter::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_9;
	// ZXing.IBarcodeReader QrCodeRecenter::reader
	RuntimeObject* ___reader_10;
	// System.Boolean QrCodeRecenter::scanningEnabled
	bool ___scanningEnabled_11;
};

// ScManager
struct ScManager_tF038470CA09807B50B844D2EFC2D2028B56F3A16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ScManager::targetPanelName
	String_t* ___targetPanelName_4;
};

// SetNavigationTarget
struct SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Dropdown SetNavigationTarget::navigationTargetDropDown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___navigationTargetDropDown_4;
	// System.Collections.Generic.List`1<Target> SetNavigationTarget::navigationTargetObjects
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___navigationTargetObjects_5;
	// UnityEngine.UI.Slider SetNavigationTarget::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// UnityEngine.AI.NavMeshPath SetNavigationTarget::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_7;
	// UnityEngine.LineRenderer SetNavigationTarget::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_8;
	// UnityEngine.Vector3 SetNavigationTarget::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_9;
	// System.Int32 SetNavigationTarget::currentFloor
	int32_t ___currentFloor_10;
	// System.Boolean SetNavigationTarget::lineToggle
	bool ___lineToggle_11;
};

// SetUIText
struct SetUIText_tF89CCAB602C938CA025BC2B6C4A49410EF4A6B05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text SetUIText::textField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textField_4;
	// System.String SetUIText::fixedText
	String_t* ___fixedText_5;
};

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields
{
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* ___instance_4;
};

// SwitchPathVisualization
struct SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PathLineVisualization SwitchPathVisualization::pathLineVis
	PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* ___pathLineVis_4;
	// PathArrowVisualization SwitchPathVisualization::arrowLineVis
	PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* ___arrowLineVis_5;
	// System.Int32 SwitchPathVisualization::visualizationCounter
	int32_t ___visualizationCounter_6;
	// UnityEngine.GameObject SwitchPathVisualization::activeVisualization
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeVisualization_7;
};

// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TargetFacade::Name
	String_t* ___Name_4;
	// System.Int32 TargetFacade::FloorNumber
	int32_t ___FloorNumber_5;
};

// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController TargetHandler::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// UnityEngine.TextAsset TargetHandler::targetModelData
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___targetModelData_5;
	// TMPro.TMP_Dropdown TargetHandler::targetDataDropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___targetDataDropdown_6;
	// UnityEngine.GameObject TargetHandler::targetObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObjectPrefab_7;
	// UnityEngine.Transform[] TargetHandler::targetObjectsParentTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___targetObjectsParentTransforms_8;
	// System.Collections.Generic.List`1<TargetFacade> TargetHandler::currentTargetItems
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* ___currentTargetItems_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B  : public RuntimeArray
{
	ALIGN_FIELD (8) Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* m_Items[1];

	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mE8849A0F431B9215705F5CCE3AFF9400DEE3A6CD_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<System.Object>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___tcs0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Google.Future`1<System.Object>::.ctor(Google.FutureAPIImpl`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, RuntimeObject* ___impl0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void NavigationController::set_CalculatedPath(UnityEngine.AI.NavMeshPath)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshPath NavigationController::get_CalculatedPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* ___cpuImage0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::GetConvertedDataSize(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_gshared)(___array0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,Unity.Collections.NativeSlice`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___destinationBuffer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared)(__this, ___data0, method);
}
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) ;
// TargetFacade TargetHandler::GetCurrentTargetByTargetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, String_t* ___targetText0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91 (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.BarcodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Target> TargetHandler::GenerateTargetDataFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetFacade>::Add(T)
inline void List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<TargetWrapper>(System.String)
inline TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TargetFacade>()
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548 (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<TargetFacade,TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1 (RuntimeObject* ___source0, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* ___options0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) ;
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TargetFacade>::get_Count()
inline int32_t List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TargetFacade>::get_Item(System.Int32)
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void TargetHandler/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2 (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<TargetFacade>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m12E7562663181EB5C096D32D4CC8AA69C6948DB5 (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<TargetFacade>::Find(System.Predicate`1<T>)
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* ___match0, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<TargetFacade>::.ctor()
inline void List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4 (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___value0, const RuntimeMethod* method) ;
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.Tasks.TaskScheduler)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m768FDCB2B51FF46AB8700FAC2C739F41176F0143 (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* ___continuationAction0, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_ContinueWith_mE8849A0F431B9215705F5CCE3AFF9400DEE3A6CD_gshared)(__this, ___continuationAction0, ___scheduler1, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::get_Result()
inline GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Collections.IEnumerator GoogleAuthentication::UpdateUI(Google.GoogleSignInUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleAuthentication_UpdateUI_mAD2AE82494F57C643AF7E4DA4723A9F6723FC717 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___user0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GoogleAuthentication/<UpdateUI>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUIU3Ed__12__ctor_m20F767EE7972204AC0BB1DC950B5C1E0FE4FE220 (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m1FF74632D01EB259222C145B266A2CB56B70C553 (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m3C0020931D97DCD43BC39A613C5066F340B22361 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] SetNavigationTarget::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* SetNavigationTarget_AddLineOffset_m223C483B58A62F30F4A284F18FF877D04FABF668 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void SetNavigationTarget/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m2F30D6BEEA42042B74947F1F245A7A22FC49994C (U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String TMPro.TMP_Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Target>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m526CCFEBC03A459518F5001C34CE272E89902287 (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Target>::Find(System.Predicate`1<T>)
inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720 (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* ___match0, const RuntimeMethod* method)
{
	return ((  Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void SetNavigationTarget::ToggleVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_ToggleVisibility_mC7A0DE8BDD3E020F14A2E788B81724587C1E1459 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) ;
// System.Void SetNavigationTarget::SetNavigationTargetDropDownOptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_SetNavigationTargetDropDownOptions_m27FD211294FCD4525389A4E7C17AB5ABCB0E6977 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, int32_t ___floorNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::Add(T)
inline void List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Target>::.ctor()
inline void List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.XR.ARFoundation.ARCameraBackground::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ARCameraBackground_get_material_mD444C30747216E7E7B5FF0F714EE0DF57CC93EC8 (ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst1, const RuntimeMethod* method) ;
// System.Void PathArrowVisualization::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_AddOffsetToPath_m759245C732330E474B5038503EBE7C5594895C52 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) ;
// System.Void PathArrowVisualization::SelectNextNavigationPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_SelectNextNavigationPoint_mFDA6A6AA44733800F05FA3D63324F193F8FA2777 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) ;
// System.Void PathArrowVisualization::AddArrowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_AddArrowOffset_mE5EEE9B766B17D04A8700CC91B8983AD514CD6BD (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 PathArrowVisualization::SelectNextNavigationPointWithinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathArrowVisualization_SelectNextNavigationPointWithinDistance_m37AA57332DAAD5185713AA4A74371EDBEEBA2AC7 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void PathLineVisualization::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_AddOffsetToPath_mA95216A791F9EFA751DD6A0431F3B17ADCEF611E (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) ;
// System.Void PathLineVisualization::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_AddLineOffset_m9343091344FADD119D606522CDAA4B93C9F396D1 (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) ;
// System.Void PathLineVisualization::SetLineRendererPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_SetLineRendererPositions_m748D9AE17A82E8E08AD34A02877426F0B146775A (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void SwitchPathVisualization::DisableAllPathVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_DisableAllPathVisuals_mD84227958837618E88ECA522163BDCCE4BF66190 (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) ;
// System.Void SwitchPathVisualization::EnablePathVisualsByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_EnablePathVisualsByIndex_m8BAF76AD9D39EF2787EFFFF352F35B36FA80528B (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, int32_t ___visIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) ;
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline (const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84 (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* ___tcs0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared)(__this, ___tcs0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021 (uintptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D (intptr_t ___data0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6 (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, RuntimeObject* ___impl0, const RuntimeMethod* method)
{
	((  void (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared)(__this, ___impl0, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Signout(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
#endif
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
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.AI.NavMeshPath NavigationController::get_CalculatedPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath {  get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___U3CCalculatedPathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NavigationController::set_CalculatedPath(UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath {  get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___value0;
		__this->___U3CCalculatedPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCalculatedPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void NavigationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Start_mD61804247723EB264D8C4B9DEDC264306DB32792 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CalculatedPath = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void NavigationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Update_m225B1D786B920C330F53FC0608E836C3EE4AE160 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// if(TargetPosition != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// NavMesh.CalculatePath(transform.position, TargetPosition, NavMesh.AllAreas, CalculatedPath);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_6;
		L_6 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(__this, NULL);
		bool L_7;
		L_7 = NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E(L_4, L_5, (-1), L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void NavigationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController__ctor_mAF12F851C3ECFC21B433A29BAEE0F98D3D2A70BF (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
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
// System.Void QrCodeRecenter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnEnable_mD1D7D5F40B155C306E1818A862E4CCD33A54A51F (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived += OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnDisable_m13A17AC01263D9EE1E2DC0B2CAEA646DFE939BC8 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived -= OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnCameraFrameReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_4 = NULL;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!scanningEnabled)
		bool L_0 = __this->___scanningEnabled_11;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = __this->___cameraManager_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// var conversionParams = new XRCpuImage.ConversionParams
		// {
		//     // Get the entire image
		//     inputRect = new RectInt(0, 0, image.width, image.height),
		// 
		//     // Downsample by 2
		//     outputDimensions = new Vector2Int(image.width / 2, image.height / 2),
		// 
		//     // Choose RGBA format
		//     outputFormat = TextureFormat.RGBA32,
		// 
		//     // Flip across the vertical axis (mirror image)
		//     transformation = XRCpuImage.Transformation.MirrorY
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62));
		int32_t L_3;
		L_3 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_4;
		L_4 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_5), 0, 0, L_3, L_4, /*hidden argument*/NULL);
		ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline((&V_5), L_5, NULL);
		int32_t L_6;
		L_6 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_7;
		L_7 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), ((int32_t)(L_6/2)), ((int32_t)(L_7/2)), /*hidden argument*/NULL);
		ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline((&V_5), L_8, NULL);
		ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline((&V_5), 4, NULL);
		ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline((&V_5), 2, NULL);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_9 = V_5;
		V_1 = L_9;
		// int size = image.GetConvertedDataSize(conversionParams);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_10 = V_1;
		int32_t L_11;
		L_11 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_10, NULL);
		V_2 = L_11;
		// var buffer = new NativeArray<byte>(size, Allocator.Temp);
		int32_t L_12 = V_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_3), L_12, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// image.Convert(conversionParams, buffer);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_13 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_14 = V_3;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_15;
		L_15 = NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73(L_14, NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var);
		XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1((&V_0), L_13, L_15, NULL);
		// image.Dispose();
		XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_0), NULL);
		// cameraImageTexture = new Texture2D
		// (
		//     conversionParams.outputDimensions.x,
		//     conversionParams.outputDimensions.y,
		//     conversionParams.outputFormat,
		//     false
		// );
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16;
		L_16 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_16;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_6), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18;
		L_18 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_18;
		int32_t L_19;
		L_19 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_6), NULL);
		int32_t L_20;
		L_20 = ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline((&V_1), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_21, L_17, L_19, L_20, (bool)0, NULL);
		__this->___cameraImageTexture_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_9), (void*)L_21);
		// cameraImageTexture.LoadRawTextureData(buffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = __this->___cameraImageTexture_9;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_3;
		NullCheck(L_22);
		Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3(L_22, L_23, Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		// cameraImageTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___cameraImageTexture_9;
		NullCheck(L_24);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_24, NULL);
		// buffer.Dispose();
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_3), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_25 = __this->___reader_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = __this->___cameraImageTexture_9;
		NullCheck(L_26);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_27;
		L_27 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_26, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___cameraImageTexture_9;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___cameraImageTexture_9;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		NullCheck(L_25);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_32;
		L_32 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_25, L_27, L_29, L_31);
		V_4 = L_32;
		// if (result != null)
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_33 = V_4;
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		// SetQrCodeRecenterTarget(result.Text);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_34 = V_4;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_34, NULL);
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_35, NULL);
		// ToggleScanning();
		QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD(__this, NULL);
	}

IL_012c:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* V_0 = NULL;
	{
		// TargetFacade currentTarget = targetHandler.GetCurrentTargetByTargetText(targetText);
		TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_0 = __this->___targetHandler_7;
		String_t* L_1 = ___targetText0;
		NullCheck(L_0);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_2;
		L_2 = TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E(L_0, L_1, NULL);
		V_0 = L_2;
		// if (currentTarget != null)
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// session.Reset();
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = __this->___session_4;
		NullCheck(L_5);
		ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91(L_5, NULL);
		// sessionOrigin.transform.position = currentTarget.transform.position;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = __this->___sessionOrigin_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_10, NULL);
		// sessionOrigin.transform.rotation = currentTarget.transform.rotation;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_11 = __this->___sessionOrigin_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::ChangeActiveFloor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ChangeActiveFloor_m16AB91252BF9D24E2D48F2789F0BE512A6813E99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___floorEntrance0, const RuntimeMethod* method) 
{
	{
		// SetQrCodeRecenterTarget(floorEntrance);
		String_t* L_0 = ___floorEntrance0;
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	{
		// scanningEnabled = !scanningEnabled;
		bool L_0 = __this->___scanningEnabled_11;
		__this->___scanningEnabled_11 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// qrCodeScanningPanel.SetActive(scanningEnabled);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___qrCodeScanningPanel_8;
		bool L_2 = __this->___scanningEnabled_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter__ctor_mA089181E2E59AC0F2538D1DF51D403784D4D5EDD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IBarcodeReader reader = new BarcodeReader(); // create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_0 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_0, NULL);
		__this->___reader_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_0);
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
// System.Void TargetHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_Start_m56B9094E87064E32320FF4212D9B2E415580A4E5 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	{
		// GenerateTargetItems();
		TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D(__this, NULL);
		// FillDropdownWithTargetItems();
		TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	{
		// IEnumerable<Target> targets = GenerateTargetDataFromSource();
		RuntimeObject* L_0;
		L_0 = TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F(__this, NULL);
		// foreach (Target target in targets)
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Target>::GetEnumerator() */, IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_000e_1:
			{
				// foreach (Target target in targets)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_5;
				L_5 = InterfaceFuncInvoker0< Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Target>::get_Current() */, IEnumerator_1_t03400D16907E6F18C6A96BC8077E180A40CF2BEB_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// currentTargetItems.Add(CreateTargetFacade(target));
				List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_6 = __this->___currentTargetItems_9;
				Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = V_1;
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_8;
				L_8 = TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A(__this, L_7, NULL);
				NullCheck(L_6);
				List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline(L_6, L_8, List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
			}

IL_0027_1:
			{
				// foreach (Target target in targets)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Target> TargetHandler::GenerateTargetDataFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_GenerateTargetDataFromSource_mD66D3551EB6DB26C917D581030F8FD15664ECF5F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<TargetWrapper>(targetModelData.text).TargetList;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->___targetModelData_5;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_0, NULL);
		TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* L_2;
		L_2 = JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE(L_1, JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var);
		NullCheck(L_2);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_3 = L_2->___TargetList_0;
		return (RuntimeObject*)L_3;
	}
}
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject targetObject = Instantiate(targetObjectPrefab, targetObjectsParentTransforms[target.FloorNumber], false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetObjectPrefab_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___targetObjectsParentTransforms_8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___FloorNumber_1;
		NullCheck(L_1);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_0, L_5, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		// targetObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// targetObject.name = $"{target.FloorNumber} - {target.Name}";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_9 = ___target0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___FloorNumber_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_13 = ___target0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Name_0;
		String_t* L_15;
		L_15 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, L_12, L_14, NULL);
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_15, NULL);
		// targetObject.transform.localPosition = target.Position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_18 = ___target0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___Position_2;
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_19, NULL);
		// targetObject.transform.localRotation = Quaternion.Euler(target.Rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_16;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_22 = ___target0;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___Rotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_23, NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_24, NULL);
		// TargetFacade targetData = targetObject.GetComponent<TargetFacade>();
		NullCheck(L_20);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_25;
		L_25 = GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9(L_20, GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		// targetData.Name = target.Name;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_26 = L_25;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_27 = ___target0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___Name_0;
		NullCheck(L_26);
		L_26->___Name_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Name_4), (void*)L_28);
		// targetData.FloorNumber = target.FloorNumber;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_29 = L_26;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_30 = ___target0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___FloorNumber_1;
		NullCheck(L_29);
		L_29->___FloorNumber_5 = L_31;
		// return targetData;
		return L_29;
	}
}
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* V_0 = NULL;
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B2_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B2_1 = NULL;
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B1_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B1_1 = NULL;
	{
		// List<TMP_Dropdown.OptionData> targetFacadeOptionData =
		//     currentTargetItems.Select(x => new TMP_Dropdown.OptionData
		//     {
		//         text = $"{x.FloorNumber} - {x.Name}"
		//     }).ToList();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = __this->___currentTargetItems_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_1 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_3 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_4 = (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*)il2cpp_codegen_object_new(Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718_RuntimeMethod_var), NULL);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_5 = L_4;
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1(G_B2_1, G_B2_0, Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_7;
		L_7 = Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30(L_6, Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var);
		V_0 = L_7;
		// targetDataDropdown.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_8 = __this->___targetDataDropdown_6;
		NullCheck(L_8);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_8, NULL);
		// targetDataDropdown.AddOptions(targetFacadeOptionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_9 = __this->___targetDataDropdown_6;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_10 = V_0;
		NullCheck(L_9);
		TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::SetSelectedTargetPositionWithDropdown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SetSelectedTargetPositionWithDropdown_mF065641E0F1AA3710569A24A543535AC7A269CE3 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	{
		// navigationController.TargetPosition = GetCurrentlySelectedTarget(selectedValue);
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		int32_t L_1 = ___selectedValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847(__this, L_1, NULL);
		NullCheck(L_0);
		NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selectedValue >= currentTargetItems.Count)
		int32_t L_0 = ___selectedValue0;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_1 = __this->___currentTargetItems_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline(L_1, List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_3;
	}

IL_0014:
	{
		// return currentTargetItems[selectedValue].transform.position;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_4 = __this->___currentTargetItems_9;
		int32_t L_5 = ___selectedValue0;
		NullCheck(L_4);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6;
		L_6 = List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D(L_4, L_5, List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		return L_8;
	}
}
// TargetFacade TargetHandler::GetCurrentTargetByTargetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_GetCurrentTargetByTargetText_mE318E32826DAF7A5175F84911CD68946C7A7A38E (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, String_t* ___targetText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_0 = (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_1 = V_0;
		String_t* L_2 = ___targetText0;
		NullCheck(L_1);
		L_1->___targetText_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___targetText_0), (void*)L_2);
		// return currentTargetItems.Find(x =>
		//     x.Name.ToLower().Equals(targetText.ToLower()));
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_3 = __this->___currentTargetItems_9;
		U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* L_4 = V_0;
		Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A* L_5 = (Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A*)il2cpp_codegen_object_new(Predicate_1_t065BD5D89F24F9EFF54190758B6B91110320132A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m12E7562663181EB5C096D32D4CC8AA69C6948DB5(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6;
		L_6 = List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D(L_3, L_5, List_1_Find_mBA6730BBEE4D4BF61E0723D32D43F5E7DF32409D_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void TargetHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler__ctor_m4960DCAB72C0C58A6E03EA5ED0DE395C8B8B34D4 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<TargetFacade> currentTargetItems = new List<TargetFacade>();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*)il2cpp_codegen_object_new(List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4(L_0, List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		__this->___currentTargetItems_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTargetItems_9), (void*)L_0);
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
// System.Void TargetHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD91864D9863E45E24B985B31CC5BE54CEA80DEAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_0 = (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47*)il2cpp_codegen_object_new(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D(L_0, NULL);
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// TMPro.TMP_Dropdown/OptionData TargetHandler/<>c::<FillDropdownWithTargetItems>b__10_0(TargetFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__10_0_m975329254106D2DBB005D2D5EE5B4CA78F26F718 (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTargetItems.Select(x => new TMP_Dropdown.OptionData
		// {
		//     text = $"{x.FloorNumber} - {x.Name}"
		// }).ToList();
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_0 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6(L_0, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_1 = L_0;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_2 = ___x0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___FloorNumber_5;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6 = ___x0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Name_4;
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, L_5, L_7, NULL);
		NullCheck(L_1);
		OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline(L_1, L_8, NULL);
		return L_1;
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
// System.Void TargetHandler/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2AC827ADC7FC6E412662C150748A4ECD91A1B5E2 (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TargetHandler/<>c__DisplayClass13_0::<GetCurrentTargetByTargetText>b__0(TargetFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetCurrentTargetByTargetTextU3Eb__0_mC933BC44CCCE45C4841672F0EDFD6655EDCD239C (U3CU3Ec__DisplayClass13_0_t83FB2AD6EC26151274AEDE3E1ED442238DACCE95* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___x0, const RuntimeMethod* method) 
{
	{
		// x.Name.ToLower().Equals(targetText.ToLower()));
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->___targetText_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
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
// System.Void GoogleAuthentication::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_Awake_mF13AD09A7469CE49A7E82FEDB3433D08A94D9D6C (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configuration = new GoogleSignInConfiguration
		// {
		//     WebClientId = webClientId,
		//     RequestIdToken = true,
		//     UseGameSignIn = false,
		//     RequestEmail = true
		// };
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)il2cpp_codegen_object_new(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589(L_0, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = L_0;
		String_t* L_2 = __this->___webClientId_12;
		NullCheck(L_1);
		L_1->___WebClientId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___WebClientId_1), (void*)L_2);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = L_1;
		NullCheck(L_3);
		L_3->___RequestIdToken_5 = (bool)1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = L_3;
		NullCheck(L_4);
		L_4->___UseGameSignIn_0 = (bool)0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_5 = L_4;
		NullCheck(L_5);
		L_5->___RequestEmail_4 = (bool)1;
		__this->___configuration_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_11), (void*)L_5);
		// }
		return;
	}
}
// System.Void GoogleAuthentication::OnSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_OnSignIn_mAC8BA4AC11EFF04DD140862AB09BCD1DB1E70604 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAuthentication_OnAuthenticationFinished_m5F751D05DE65D3394F44A963C75B0EF05B2BB893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m768FDCB2B51FF46AB8700FAC2C739F41176F0143_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoogleSignIn.Configuration = configuration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = __this->___configuration_11;
		GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17(L_0, NULL);
		// GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
		//     OnAuthenticationFinished, TaskScheduler.Default);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_1;
		L_1 = GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB(NULL);
		NullCheck(L_1);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_2;
		L_2 = GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D(L_1, NULL);
		Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* L_3 = (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*)il2cpp_codegen_object_new(Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE(L_3, __this, (intptr_t)((void*)GoogleAuthentication_OnAuthenticationFinished_m5F751D05DE65D3394F44A963C75B0EF05B2BB893_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_4;
		L_4 = TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline(NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_1_ContinueWith_m768FDCB2B51FF46AB8700FAC2C739F41176F0143(L_2, L_3, L_4, Task_1_ContinueWith_m768FDCB2B51FF46AB8700FAC2C739F41176F0143_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GoogleAuthentication::OnAuthenticationFinished(System.Threading.Tasks.Task`1<Google.GoogleSignInUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_OnAuthenticationFinished_m5F751D05DE65D3394F44A963C75B0EF05B2BB893 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E112574B21018982FEA5F49395F54545F3D2D3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* V_1 = NULL;
	int32_t V_2 = 0;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (task.IsFaulted)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// using (IEnumerator<System.Exception> enumerator =
		//     task.Exception.InnerExceptions.GetEnumerator())
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		NullCheck(L_3);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_4;
		L_4 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_4, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_008c;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_008c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (enumerator.MoveNext())
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (!L_9)
				{
					goto IL_0060_1;
				}
			}
			{
				// GoogleSignIn.SignInException error =
				//     (GoogleSignIn.SignInException)enumerator.Current;
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				Exception_t* L_11;
				L_11 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_10);
				V_1 = ((SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)CastclassClass((RuntimeObject*)L_11, SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var));
				// Debug.LogError("Got Error: " + error.Status + " " + error.Message);
				SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline(L_12, NULL);
				V_2 = L_13;
				Il2CppFakeBox<int32_t> L_14(GoogleSignInStatusCode_t3AEC2A455C7DB2C736F01D352EA10EFDCB011D7B_il2cpp_TypeInfo_var, (&V_2));
				String_t* L_15;
				L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
				SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_16 = V_1;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
				String_t* L_18;
				L_18 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral68CCAEFA2D0D8C4A9C1B054BB5F1AF05C8E3F4AC, L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_18, NULL);
				goto IL_00b3;
			}

IL_0060_1:
			{
				// Debug.LogError("Got unexpected exception?!?" + task.Exception);
				Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_19 = ___task0;
				NullCheck(L_19);
				AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_20;
				L_20 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_19, NULL);
				AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_21 = L_20;
				G_B5_0 = L_21;
				G_B5_1 = _stringLiteral3E112574B21018982FEA5F49395F54545F3D2D3D;
				if (L_21)
				{
					G_B6_0 = L_21;
					G_B6_1 = _stringLiteral3E112574B21018982FEA5F49395F54545F3D2D3D;
					goto IL_0072_1;
				}
			}
			{
				G_B7_0 = ((String_t*)(NULL));
				G_B7_1 = G_B5_1;
				goto IL_0077_1;
			}

IL_0072_1:
			{
				NullCheck(G_B6_0);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
				G_B7_0 = L_22;
				G_B7_1 = G_B6_1;
			}

IL_0077_1:
			{
				String_t* L_23;
				L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B7_1, G_B7_0, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_23, NULL);
				// }
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// else if (task.IsCanceled)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_24 = ___task0;
		NullCheck(L_24);
		bool L_25;
		L_25 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_24, NULL);
		if (!L_25)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.LogError("Cancelled");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA, NULL);
		return;
	}

IL_00a0:
	{
		// StartCoroutine(UpdateUI(task.Result));
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_26 = ___task0;
		NullCheck(L_26);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_27;
		L_27 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_26, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		RuntimeObject* L_28;
		L_28 = GoogleAuthentication_UpdateUI_mAD2AE82494F57C643AF7E4DA4723A9F6723FC717(__this, L_27, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GoogleAuthentication::UpdateUI(Google.GoogleSignInUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleAuthentication_UpdateUI_mAD2AE82494F57C643AF7E4DA4723A9F6723FC717 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___user0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* L_0 = (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB*)il2cpp_codegen_object_new(U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateUIU3Ed__12__ctor_m20F767EE7972204AC0BB1DC950B5C1E0FE4FE220(L_0, 0, NULL);
		U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* L_2 = L_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_3 = ___user0;
		NullCheck(L_2);
		L_2->___user_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___user_2), (void*)L_3);
		return L_2;
	}
}
// System.Void GoogleAuthentication::OnSignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_OnSignOut_mD693C1D158553067A3C1C46ABF9F771894EAB561 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userNameTxt.text = "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___userNameTxt_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// userEmailTxt.text = "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___userEmailTxt_6;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// imageURL = "";
		__this->___imageURL_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageURL_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// loginPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___loginPanel_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// profilePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___profilePanel_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// confirmationPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___confirmationPanel_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Debug.Log("Calling SignOut");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2E1AD0E83130989E2515696D6D5B828CD141AAE6, NULL);
		// GoogleSignIn.DefaultInstance.SignOut();
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_5;
		L_5 = GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB(NULL);
		NullCheck(L_5);
		GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6(L_5, NULL);
		// }
		return;
	}
}
// System.Void GoogleAuthentication::OpenConfirmationPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_OpenConfirmationPanel_mA155F79BCA5D63C8735073149919D931CBB66989 (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	{
		// loginPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// profilePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___profilePanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// confirmationPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___confirmationPanel_10;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GoogleAuthentication::OpenProfilePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication_OpenProfilePanel_m92DA52BBC991D04653B27A0ACE1D1171EDC9F73E (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	{
		// loginPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// profilePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___profilePanel_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// confirmationPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___confirmationPanel_10;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GoogleAuthentication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleAuthentication__ctor_m2D6A249BE48A0B4A550DC0E9E5ADC6D2A2D8F52B (GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06C431D26B567ABCCC91EEF608B28E2E2CE43AFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string webClientId = "944453339117-mtvefe806edqhlut1kctjr180lbjlgk8.apps.googleusercontent.com";
		__this->___webClientId_12 = _stringLiteral06C431D26B567ABCCC91EEF608B28E2E2CE43AFC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webClientId_12), (void*)_stringLiteral06C431D26B567ABCCC91EEF608B28E2E2CE43AFC);
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
// System.Void GoogleAuthentication/<UpdateUI>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUIU3Ed__12__ctor_m20F767EE7972204AC0BB1DC950B5C1E0FE4FE220 (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GoogleAuthentication/<UpdateUI>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUIU3Ed__12_System_IDisposable_Dispose_m5204EF84AB81D6C1A923A64961CDAFE3A1B70A51 (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GoogleAuthentication/<UpdateUI>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateUIU3Ed__12_MoveNext_m2F19E30F7CD472219C6426DDBBA23EFE42B86F07 (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Welcome: " + user.DisplayName + "!");
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_4 = __this->___user_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral769A2FDAB9A0B414C5BC97D6424E60561429FDA7, L_5, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// userNameTxt.text = user.DisplayName;
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___userNameTxt_5;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_9 = __this->___user_2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// userEmailTxt.text = user.Email;
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_11 = V_1;
		NullCheck(L_11);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = L_11->___userEmailTxt_6;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_13 = __this->___user_2;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
		// imageURL = user.ImageUrl.ToString();
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_15 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_16 = __this->___user_2;
		NullCheck(L_16);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17;
		L_17 = GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		NullCheck(L_15);
		L_15->___imageURL_4 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___imageURL_4), (void*)L_18);
		// UnityWebRequest request = UnityWebRequestTexture.GetTexture(imageURL);
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = L_19->___imageURL_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21;
		L_21 = UnityWebRequestTexture_GetTexture_m1FF74632D01EB259222C145B266A2CB56B70C553(L_20, NULL);
		__this->___U3CrequestU3E5__2_4 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)L_21);
		// yield return request.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CrequestU3E5__2_4;
		NullCheck(L_22);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_23;
		L_23 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_22, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Texture2D downloadedTexture = DownloadHandlerTexture.GetContent(request);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CrequestU3E5__2_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25;
		L_25 = DownloadHandlerTexture_GetContent_m3C0020931D97DCD43BC39A613C5066F340B22361(L_24, NULL);
		V_2 = L_25;
		// Rect rect = new Rect(0, 0, downloadedTexture.width, downloadedTexture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), (0.0f), (0.0f), ((float)L_27), ((float)L_29), NULL);
		// Vector2 pivot = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), (0.5f), (0.5f), NULL);
		// profilePic.sprite = Sprite.Create(downloadedTexture, rect, pivot);
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_30 = V_1;
		NullCheck(L_30);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = L_30->___profilePic_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_32 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35;
		L_35 = Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79(L_32, L_33, L_34, NULL);
		NullCheck(L_31);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_35, NULL);
		// loginPanel.SetActive(false);
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_36 = V_1;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___loginPanel_8;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// profilePanel.SetActive(true);
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_38 = V_1;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = L_38->___profilePanel_9;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)1, NULL);
		// confirmationPanel.SetActive(false);
		GoogleAuthentication_tBC5BAF1BCC97846ED0186E0FB55EBC85B1B111E9* L_40 = V_1;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___confirmationPanel_10;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GoogleAuthentication/<UpdateUI>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateUIU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D0DC1ECA3E98CAC8CEE407C5A7E38BF454C2B77 (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GoogleAuthentication/<UpdateUI>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateUIU3Ed__12_System_Collections_IEnumerator_Reset_mA9F82F59954514E209CD344C25EBD0048CA0DC2D (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateUIU3Ed__12_System_Collections_IEnumerator_Reset_mA9F82F59954514E209CD344C25EBD0048CA0DC2D_RuntimeMethod_var)));
	}
}
// System.Object GoogleAuthentication/<UpdateUI>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateUIU3Ed__12_System_Collections_IEnumerator_get_Current_mFE1FAA5AFAD1FDBB10DCF04FF60BDADD79F1BF2F (U3CUpdateUIU3Ed__12_t8074E7DAA0E21556E82A1684A01E85087FF055FB* __this, const RuntimeMethod* method) 
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
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void TargetFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFacade__ctor_mE11CAF4E53BAE3BECF7DE207337FDD38C30002A6 (TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* __this, const RuntimeMethod* method) 
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
// System.Void TargetWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWrapper__ctor_mCFEF636C6168DA23D079B9D639C2BACA9829D288 (TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void NavigationButtonHandler::OpenMainSceneWithTargetPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationButtonHandler_OpenMainSceneWithTargetPanel_m23FFFB045A9453FF68BCE46822B1C17B10DCA20E (NavigationButtonHandler_tDE609544FB44408AB1F45F1F59482DEEF4EAD1DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneData.TargetPanel = targetPanelName;
		String_t* L_0 = __this->___targetPanelName_4;
		il2cpp_codegen_runtime_class_init_inline(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0), (void*)L_0);
		// SceneManager.LoadScene("MainScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		// }
		return;
	}
}
// System.Void NavigationButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationButtonHandler__ctor_m10186CC23E03C6C36599C98954A89310BA07BD21 (NavigationButtonHandler_tDE609544FB44408AB1F45F1F59482DEEF4EAD1DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string targetPanelName = "ProfilePanel";
		__this->___targetPanelName_4 = _stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPanelName_4), (void*)_stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95);
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
// System.Void OpenURL::OpenFeedback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenURL_OpenFeedback_mF5FF05DEF87699A4B726476428CC0301C173ED2C (OpenURL_t9DA86971C4C6E34FF922861FA8D7BAD7E0024D0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24ECCBBAA1E1402A2EB20F608A5D510006B45474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E078DE955A506D891A76734D886C648085235A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://docs.google.com/forms/d/e/1FAIpQLSdSkNmGXAJ6zCJwqnbtanie99cS3aZpIwCmEr6rlhYgt8yYvA/viewform");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteral24ECCBBAA1E1402A2EB20F608A5D510006B45474, NULL);
		// Debug.Log("Open Feedback Form");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral39E078DE955A506D891A76734D886C648085235A, NULL);
		// }
		return;
	}
}
// System.Void OpenURL::OpenContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenURL_OpenContact_m21B5FB48468B3B3AA9888689E544E64DAE3FE6DC (OpenURL_t9DA86971C4C6E34FF922861FA8D7BAD7E0024D0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral394BE7DCCC73B3CCB50368608FD6BDC1C100D48A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C3AFC073D9C9233F0371331B5722E7429C49FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://linktr.ee/AizadOsman");
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(_stringLiteral394BE7DCCC73B3CCB50368608FD6BDC1C100D48A, NULL);
		// Debug.Log("Open Linktree link");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral95C3AFC073D9C9233F0371331B5722E7429C49FA, NULL);
		// }
		return;
	}
}
// System.Void OpenURL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenURL__ctor_m9DCD529CEA922A3F80E72D9C86916C3BD48D41CB (OpenURL_t9DA86971C4C6E34FF922861FA8D7BAD7E0024D0A* __this, const RuntimeMethod* method) 
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
// System.Void PanelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelManager_Start_mF9498EEBBBDDBE74F1313E95E4C65767076893AC (PanelManager_tD4561B132CAC817094CB325908EC8FA11419020D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7D46D73BAA693C07079DE75AE2F991407BF0A6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75E4C3AFF2703E6FDC294B7355CFFA1C3425AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5347AB3B036AB2E3EA3E15342F02A2152204BC5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// loginPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loginPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// profilePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___profilePanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// confirmationPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___confirmationPanel_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// if (!string.IsNullOrEmpty(SceneData.TargetPanel))
		il2cpp_codegen_runtime_class_init_inline(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		String_t* L_3 = ((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_009a;
		}
	}
	{
		// switch (SceneData.TargetPanel)
		il2cpp_codegen_runtime_class_init_inline(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0;
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralB7D46D73BAA693C07079DE75AE2F991407BF0A6E, NULL);
		if (L_7)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralC53A9FE4D474F078A91B677C27FF601EFC896A95, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralD75E4C3AFF2703E6FDC294B7355CFFA1C3425AD6, NULL);
		if (L_11)
		{
			goto IL_0079;
		}
	}
	{
		goto IL_0086;
	}

IL_005f:
	{
		// loginPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___loginPanel_4;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// break;
		return;
	}

IL_006c:
	{
		// profilePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___profilePanel_5;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// break;
		return;
	}

IL_0079:
	{
		// confirmationPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___confirmationPanel_6;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// break;
		return;
	}

IL_0086:
	{
		// Debug.LogWarning("Unknown panel: " + SceneData.TargetPanel);
		il2cpp_codegen_runtime_class_init_inline(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		String_t* L_15 = ((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0;
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE5347AB3B036AB2E3EA3E15342F02A2152204BC5, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_16, NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void PanelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelManager__ctor_mA86BE5A7EC580FAD466DFEC12569D38F584473BB (PanelManager_tD4561B132CAC817094CB325908EC8FA11419020D* __this, const RuntimeMethod* method) 
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
// System.Void SceneData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneData__cctor_mDAEB2DE6B8960190EDCCD3178B1E9D61E6476A27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string TargetPanel = "";
		((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void ScManager::LoadSceneAndSetPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScManager_LoadSceneAndSetPanel_m257A49BB2316D1CB7659835C9F2E646A773C05C6 (ScManager_tF038470CA09807B50B844D2EFC2D2028B56F3A16* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneData.TargetPanel = targetPanelName;
		String_t* L_0 = __this->___targetPanelName_4;
		il2cpp_codegen_runtime_class_init_inline(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var);
		((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_StaticFields*)il2cpp_codegen_static_fields_for(SceneData_t9D5B8E07ECB433A3E56D6096911C01B9EBEFFAE6_il2cpp_TypeInfo_var))->___TargetPanel_0), (void*)L_0);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void ScManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScManager__ctor_m1F7F73C428DC7B689D2AA25770FC0ED4F2AD0B10 (ScManager_tF038470CA09807B50B844D2EFC2D2028B56F3A16* __this, const RuntimeMethod* method) 
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
// System.Void SetNavigationTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_Start_m0CFEEDEE4BC72DD7486B429949C561630DED0FB6 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_7), (void*)L_0);
		// line = transform.GetComponent<LineRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2;
		L_2 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_1, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_8), (void*)L_2);
		// line.enabled = lineToggle;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___line_8;
		bool L_4 = __this->___lineToggle_11;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SetNavigationTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_Update_m24DD885D08F1EA5725F6B65E56B8706FBC72EF66 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		// if (lineToggle && targetPosition != Vector3.zero)
		bool L_0 = __this->___lineToggle_11;
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___targetPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		// NavMesh.CalculatePath(transform.position, targetPosition, NavMesh.AllAreas, path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___targetPosition_9;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_7 = __this->___path_7;
		bool L_8;
		L_8 = NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E(L_5, L_6, (-1), L_7, NULL);
		// line.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->___line_8;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_10 = __this->___path_7;
		NullCheck(L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11;
		L_11 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_10, NULL);
		NullCheck(L_11);
		NullCheck(L_9);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_9, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// Vector3[] calculatedPathAndOffset = AddLineOffset();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
		L_12 = SetNavigationTarget_AddLineOffset_m223C483B58A62F30F4A284F18FF877D04FABF668(__this, NULL);
		V_0 = L_12;
		// line.SetPositions(calculatedPathAndOffset);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___line_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_13);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_13, L_14, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void SetNavigationTarget::SetCurrentNavigationTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_SetCurrentNavigationTarget_mCF7202CD55D545AB5824302F77079A6E010E0CF5 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CSetCurrentNavigationTargetU3Eb__0_mB1FD55AEBABD9DFCE55990DDA538F5A3C7D959DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* L_0 = (U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m2F30D6BEEA42042B74947F1F245A7A22FC49994C(L_0, NULL);
		V_0 = L_0;
		// targetPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetPosition_9 = L_1;
		// string selectedText = navigationTargetDropDown.options[selectedValue].text;
		U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* L_2 = V_0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_3 = __this->___navigationTargetDropDown_4;
		NullCheck(L_3);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_4;
		L_4 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_3, NULL);
		int32_t L_5 = ___selectedValue0;
		NullCheck(L_4);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_6;
		L_6 = List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA(L_4, L_5, List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline(L_6, NULL);
		NullCheck(L_2);
		L_2->___selectedText_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___selectedText_0), (void*)L_7);
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(selectedText.ToLower()));
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_8 = __this->___navigationTargetObjects_5;
		U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* L_9 = V_0;
		Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70* L_10 = (Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70*)il2cpp_codegen_object_new(Predicate_1_t20287AEA8C42BE98D3E87A6245361D7AF842FC70_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Predicate_1__ctor_m526CCFEBC03A459518F5001C34CE272E89902287(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CSetCurrentNavigationTargetU3Eb__0_mB1FD55AEBABD9DFCE55990DDA538F5A3C7D959DD_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_11;
		L_11 = List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720(L_8, L_10, List_1_Find_m830774A37EBA7DBAA97D47E4491E1314313EE720_RuntimeMethod_var);
		// if (currentTarget != null)
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// if (line.enabled)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = __this->___line_8;
		NullCheck(L_12);
		bool L_13;
		L_13 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_12, NULL);
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// ToggleVisibility();
		SetNavigationTarget_ToggleVisibility_mC7A0DE8BDD3E020F14A2E788B81724587C1E1459(__this, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void SetNavigationTarget::ToggleVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_ToggleVisibility_mC7A0DE8BDD3E020F14A2E788B81724587C1E1459 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) 
{
	{
		// lineToggle = !lineToggle;
		bool L_0 = __this->___lineToggle_11;
		__this->___lineToggle_11 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// line.enabled = lineToggle;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___line_8;
		bool L_2 = __this->___lineToggle_11;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SetNavigationTarget::ChangeActiveFloor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_ChangeActiveFloor_m55DDF9B8E2F9B271E4F3658A58AC47EF656B94A9 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, int32_t ___floorNumber0, const RuntimeMethod* method) 
{
	{
		// currentFloor = floorNumber;
		int32_t L_0 = ___floorNumber0;
		__this->___currentFloor_10 = L_0;
		// SetNavigationTargetDropDownOptions(currentFloor);
		int32_t L_1 = __this->___currentFloor_10;
		SetNavigationTarget_SetNavigationTargetDropDownOptions_m27FD211294FCD4525389A4E7C17AB5ABCB0E6977(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3[] SetNavigationTarget::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* SetNavigationTarget_AddLineOffset_m223C483B58A62F30F4A284F18FF877D04FABF668 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (navigationYOffset.value == 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// return path.corners;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_2 = __this->___path_7;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_2, NULL);
		return L_3;
	}

IL_001e:
	{
		// Vector3[] calculatedLine = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_4 = __this->___path_7;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5;
		L_5 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_4, NULL);
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_0 = L_6;
		// for (int i=0; i<path.corners.Length; i++)
		V_1 = 0;
		goto IL_0070;
	}

IL_0035:
	{
		// calculatedLine[i] = path.corners[i] + new Vector3(0, navigationYOffset.value, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		int32_t L_8 = V_1;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_9 = __this->___path_7;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10;
		L_10 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_9, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___navigationYOffset_6;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// for (int i=0; i<path.corners.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0070:
	{
		// for (int i=0; i<path.corners.Length; i++)
		int32_t L_19 = V_1;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_20 = __this->___path_7;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21;
		L_21 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_20, NULL);
		NullCheck(L_21);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// return calculatedLine;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		return L_22;
	}
}
// System.Void SetNavigationTarget::SetNavigationTargetDropDownOptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget_SetNavigationTargetDropDownOptions_m27FD211294FCD4525389A4E7C17AB5ABCB0E6977 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, int32_t ___floorNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral014894C6326BD14EF9C75CB62D99AC0C417C056F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038E876A060266EA97105DE3A304B371562888C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04426A9B1B9D6F113C9502121C265280A07C6901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0562B5C2BE1ABC915AC2CE0F40A3908D30273C4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06079C41056F790064486A325DDC2517FF89916C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08FFFD0FAAAE40FDF04605B2AFA00E0F02257147);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B9D83DE181B1CEA106741BFD9320E85327F4DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C32BEF03C3B4717F9BC525A7FF85BBD8ED6FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E702BB93255EF664350ED02486133AD5C5186A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6CE3304236D795601C979C0BC30D6587345F08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6F75F829944578CDF32224B64862018E13FD92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral101856CED3894807851C982F3ADDFDB3CDF52BE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral108B4F81EE308DE82D54520F7B864C82293182B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138ABD9514DA2AAAE4358E0F7F0CA623C0EAB9A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14CDAE8C796EA81F5B731360400CB2695311843D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE5E08124EF50819A31285A01ED4C77EF4DA9F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D7174F650392327343D219ED99E53AE1B994CBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F6A16E1F6DC0D860BFE155CAA32FDE7C030E081);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20DA695275375BFF63ACE6EAABAABE6083FD5DB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229B5AB956AB06878DA33090F4B4E2C5022C64CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BE6CEDFEA6724B56C608930D5442B481B74994D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E782F8C452BED9E38580FE0B797C763B546A9F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A835C505E220425CADAFE7BE0DB7EBDEC51110D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAEB94C2BCD4C1D03D16DBF86AA23636C82C52C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40DE9C258BF34D273194C6914A62A1BB6880A2E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412EF416D64A334A845C0BA4943C0A024EBCDB14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46C9E43FC28A9A5BC41DA3EF80173C0D95A373F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CD266B31F2A55FF21411862612A1FF26F8F470A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1026522F4BBB8A131D925581C161B56D205251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1AD6E293ED062131945827B2FE672753336EEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F9C81898EDA8CDD43231357C0DB907893340DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51F1778B3A96B44E8A28B7B16C4749CC83EFFDFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5372A474816BD7DC0CA5E55171724B9140B52EDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF27205AE608B6490E4B686CBE1944FEE3C180E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B57A60427E4183BDDEA667747A0DDBA1272AA3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D519D19E48F64BE4EA9A793A2554954252E1A89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62A1377C473426D24CA7B6B630067E7A070F239A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral657062F3B1413BACC9328173542D2D3D50A44A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ACB0A6D4775E02A20F2C52D80CDF9561EA2457A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709D3F72B5AABCCE8F1E64F84577452213DCE10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7204D82B2FF027CDA0F03D158FD3A863D0FE1563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B0610EC0B26B6E460032BD1388DDBDC34B2C45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A50C3AE27005DDF80B813A23076D2A59B65C0B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8028FA20022A371C9F7D8F5D5E4325339C487840);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral825933763E2EB6B8A3F938B04CC7FDCD82C293FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8443F7D727AC79032B0BE7BC1DADB8307601E721);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845AD0F82ACF1EA06B87350A9128E6FCBA67E8DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848BDFD49F8BFE11DA95D6656AFC4782556AD061);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C96F975BBFCBCFF976E8259892479A2A554B42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC80465381CEF893F94E7488BB31BB6925C639A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E2D569C05AAD0A3F1D050890C46190BF8761D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90D9CA70E170D6F9E5A05D4FC3E0E2ECDB19B5D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94B441D3721D498DDF0C5C2BD82E9CABDD2E6097);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral956E396EAE331F38AAF9045C2B7C6EB407AC1ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F3B9A49923286DB60D385300166DD0DA8767FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9601D314D689FB8E0EAFF5D4EA6BE678FF24D89B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B740AB0BB4F90201405948DFDBAABE694FCA664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0922B85175D61A3495B95C4C85DCCE74D487152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA14A1C92F24D3A8E6FF158ED461101CA4F3FEEA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CB3951E19B1151E3A59F82783E567B1FEF1209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4257557A22321785593E30D434D9D4B8D372502);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA58C02ABC5AF4D13D458AF3D63DE1F4A2B8B232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC4EC55EEA0700C886616DC2EC50097D54C09271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE46C973094B60EB340BE35C84BABBA2D8794298);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0DBC6181512268BE6BE32A0F8D9C598F9D8BDDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39CD8EDA5616D19B84E59280FEEB4074461BD54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4822143145DF2236229E0B7024FDDE74D72E8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D42B1C4BCADAA032950EC95CEE934D2793B6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E652EBA6D9E27F0972B8A1296C195AB546FDAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA7B262153D4B29652018407029E3D7DB3556285);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAE21F25C8FE99931DAD5B82890DC7AB3D03430E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCDCEA14110360AC6CBD2DA8EBB81A17E596D7AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFF66555F7B9324714CE3A2D37D592266ADBD918);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0316F59FE7A52AA2C3DB78ADA7FEABE7F01CC27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66A6F901CBFC37E61C44F4343088F2A97D3C3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC896DB46E019CA0800607785A4600AF7AFCC5EB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D79F550DA7CA4684E4C2EEAE3F99D0FBD9461B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E49EC1106EBA82D0033008A87EDC6CC257DB95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFE2DBE50D38FA09EC84DDE3E860F8E8B996D903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD16972158E954C249D3728A4B34324F4BF037696);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3ABF4012F8D99991A90B0666484E77EE1A9FD24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD582C11C63A9DE1D8CE669C84FEC3E9481FC041B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBC230F0A5A4062E892C3941D5B0F18723C343C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2989B64B8599CB74A18AAEE92671DCC2647A316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3E86EE6A2F832A44E224D7D412CF9DA6A7BD954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E780868586EBBABAA66F2FD8A30DE4F281D6D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F55D71778EE0C53930BB20FEE3ECE666BF9B96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8893425E2D18DEC8F381D5D346EE7EFD24563F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE89797D9338209F04C178D4DB0BB1DBF983F52E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD2E78DBD20FC8E9DEEE53D7059B670E1EC4661);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1330B49F85AEF6E6245CF3A2A1DA1C9E5FD0FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23F42411CB620102A99D0593BDA057F7E95A81E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24633A76605537D939871FBC4E2960A28EF6200);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF381C30E53BA1C0AEDA875A3F4D63A1E93CA2F27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6F018C7C79EDD8E1502CC30909A7D9CEE0003AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF97AA1B5221C0B0FAE01AFD5A8CC75D40BA351E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D995C91B43D0B2C9FB7F4E8A7DBD4E9F72101A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9F97BFB7EBDC43D235B6BEAEF83276924A6611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB8FA360FF0406EEBA6F6C148EBCE105B8FD135A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF7351FF72EAA11CB0CFCBAD1A2C82B5306E934);
		s_Il2CppMethodInitialized = true;
	}
	{
		// navigationTargetDropDown.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___navigationTargetDropDown_4;
		NullCheck(L_0);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_0, NULL);
		// navigationTargetDropDown.value = 0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___navigationTargetDropDown_4;
		NullCheck(L_1);
		TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_1, 0, NULL);
		// if (line.enabled)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// ToggleVisibility();
		SetNavigationTarget_ToggleVisibility_mC7A0DE8BDD3E020F14A2E788B81724587C1E1459(__this, NULL);
	}

IL_002a:
	{
		// if(floorNumber == 3)
		int32_t L_4 = ___floorNumber0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_03d9;
		}
	}
	{
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Perbincangan 1 & 2"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_5 = __this->___navigationTargetDropDown_4;
		NullCheck(L_5);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_6;
		L_6 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_5, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_7 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_7, _stringLiteral4E1026522F4BBB8A131D925581C161B56D205251, NULL);
		NullCheck(L_6);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_6, L_7, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Natrah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_8 = __this->___navigationTargetDropDown_4;
		NullCheck(L_8);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_9;
		L_9 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_8, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_10 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_10, _stringLiteralFB8FA360FF0406EEBA6F6C148EBCE105B8FD135A, NULL);
		NullCheck(L_9);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_9, L_10, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Iqbal"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_11 = __this->___navigationTargetDropDown_4;
		NullCheck(L_11);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_12;
		L_12 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_11, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_13 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_13, _stringLiteralE6F55D71778EE0C53930BB20FEE3ECE666BF9B96, NULL);
		NullCheck(L_12);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_12, L_13, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Aziah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_14 = __this->___navigationTargetDropDown_4;
		NullCheck(L_14);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_15;
		L_15 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_14, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_16 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_16, _stringLiteral3BAEB94C2BCD4C1D03D16DBF86AA23636C82C52C, NULL);
		NullCheck(L_15);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_15, L_16, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Zambri"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_17 = __this->___navigationTargetDropDown_4;
		NullCheck(L_17);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_18;
		L_18 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_17, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_19 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_19, _stringLiteralF9F97BFB7EBDC43D235B6BEAEF83276924A6611D, NULL);
		NullCheck(L_18);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_18, L_19, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Huda"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_20 = __this->___navigationTargetDropDown_4;
		NullCheck(L_20);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_21;
		L_21 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_20, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_22 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_22, _stringLiteral4CD266B31F2A55FF21411862612A1FF26F8F470A, NULL);
		NullCheck(L_21);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_21, L_22, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azhar"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_23 = __this->___navigationTargetDropDown_4;
		NullCheck(L_23);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_24;
		L_24 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_23, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_25 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_25, _stringLiteralE2989B64B8599CB74A18AAEE92671DCC2647A316, NULL);
		NullCheck(L_24);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_24, L_25, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Miss Wan Athirah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_26 = __this->___navigationTargetDropDown_4;
		NullCheck(L_26);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_27;
		L_27 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_26, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_28 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_28, _stringLiteral46C9E43FC28A9A5BC41DA3EF80173C0D95A373F6, NULL);
		NullCheck(L_27);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_27, L_28, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Suzana"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_29 = __this->___navigationTargetDropDown_4;
		NullCheck(L_29);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_30;
		L_30 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_29, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_31 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_31, _stringLiteral4E1AD6E293ED062131945827B2FE672753336EEB, NULL);
		NullCheck(L_30);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_30, L_31, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Rozianawaty"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_32 = __this->___navigationTargetDropDown_4;
		NullCheck(L_32);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_33;
		L_33 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_32, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_34 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_34, _stringLiteral101856CED3894807851C982F3ADDFDB3CDF52BE7, NULL);
		NullCheck(L_33);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_33, L_34, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ariza"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_35 = __this->___navigationTargetDropDown_4;
		NullCheck(L_35);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_36;
		L_36 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_35, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_37 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_37, _stringLiteralF9D995C91B43D0B2C9FB7F4E8A7DBD4E9F72101A, NULL);
		NullCheck(L_36);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_36, L_37, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Afdal"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_38 = __this->___navigationTargetDropDown_4;
		NullCheck(L_38);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_39;
		L_39 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_38, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_40 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_40, _stringLiteralC0316F59FE7A52AA2C3DB78ADA7FEABE7F01CC27, NULL);
		NullCheck(L_39);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_39, L_40, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Wan Faezah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_41 = __this->___navigationTargetDropDown_4;
		NullCheck(L_41);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_42;
		L_42 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_41, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_43 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_43, _stringLiteralF381C30E53BA1C0AEDA875A3F4D63A1E93CA2F27, NULL);
		NullCheck(L_42);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_42, L_43, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fariza Hanis"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_44 = __this->___navigationTargetDropDown_4;
		NullCheck(L_44);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_45;
		L_45 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_44, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_46 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_46, _stringLiteral412EF416D64A334A845C0BA4943C0A024EBCDB14, NULL);
		NullCheck(L_45);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_45, L_46, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Syaripah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_47 = __this->___navigationTargetDropDown_4;
		NullCheck(L_47);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_48;
		L_48 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_47, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_49 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_49, _stringLiteral8DC80465381CEF893F94E7488BB31BB6925C639A, NULL);
		NullCheck(L_48);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_48, L_49, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azlin"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_50 = __this->___navigationTargetDropDown_4;
		NullCheck(L_50);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_51;
		L_51 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_50, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_52 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_52, _stringLiteralAA58C02ABC5AF4D13D458AF3D63DE1F4A2B8B232, NULL);
		NullCheck(L_51);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_51, L_52, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Maslina"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_53 = __this->___navigationTargetDropDown_4;
		NullCheck(L_53);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_54;
		L_54 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_53, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_55 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_55, _stringLiteralC9D79F550DA7CA4684E4C2EEAE3F99D0FBD9461B, NULL);
		NullCheck(L_54);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_54, L_55, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Ezzatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_56 = __this->___navigationTargetDropDown_4;
		NullCheck(L_56);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_57;
		L_57 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_56, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_58 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_58, _stringLiteral76B0610EC0B26B6E460032BD1388DDBDC34B2C45, NULL);
		NullCheck(L_57);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_57, L_58, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fauziah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_59 = __this->___navigationTargetDropDown_4;
		NullCheck(L_59);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_60;
		L_60 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_59, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_61 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_61, _stringLiteral95F3B9A49923286DB60D385300166DD0DA8767FB, NULL);
		NullCheck(L_60);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_60, L_61, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Mudiana"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_62 = __this->___navigationTargetDropDown_4;
		NullCheck(L_62);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_63;
		L_63 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_62, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_64 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_64, _stringLiteralBFF66555F7B9324714CE3A2D37D592266ADBD918, NULL);
		NullCheck(L_63);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_63, L_64, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suriyati"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_65 = __this->___navigationTargetDropDown_4;
		NullCheck(L_65);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_66;
		L_66 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_65, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_67 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_67, _stringLiteral0E702BB93255EF664350ED02486133AD5C5186A7, NULL);
		NullCheck(L_66);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_66, L_67, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Zatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_68 = __this->___navigationTargetDropDown_4;
		NullCheck(L_68);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_69;
		L_69 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_68, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_70 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_70, _stringLiteral8028FA20022A371C9F7D8F5D5E4325339C487840, NULL);
		NullCheck(L_69);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_69, L_70, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Kamalia"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_71 = __this->___navigationTargetDropDown_4;
		NullCheck(L_71);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_72;
		L_72 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_71, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_73 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_73, _stringLiteral88C96F975BBFCBCFF976E8259892479A2A554B42, NULL);
		NullCheck(L_72);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_72, L_73, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Emma"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_74 = __this->___navigationTargetDropDown_4;
		NullCheck(L_74);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_75;
		L_75 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_74, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_76 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_76, _stringLiteralF6F018C7C79EDD8E1502CC30909A7D9CEE0003AA, NULL);
		NullCheck(L_75);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_75, L_76, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Marina"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_77 = __this->___navigationTargetDropDown_4;
		NullCheck(L_77);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_78;
		L_78 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_77, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_79 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_79, _stringLiteral40DE9C258BF34D273194C6914A62A1BB6880A2E2, NULL);
		NullCheck(L_78);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_78, L_79, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Anitawati"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_80 = __this->___navigationTargetDropDown_4;
		NullCheck(L_80);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_81;
		L_81 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_80, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_82 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_82, _stringLiteral0F6CE3304236D795601C979C0BC30D6587345F08, NULL);
		NullCheck(L_81);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_81, L_82, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Jasber"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_83 = __this->___navigationTargetDropDown_4;
		NullCheck(L_83);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_84;
		L_84 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_83, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_85 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_85, _stringLiteralC66A6F901CBFC37E61C44F4343088F2A97D3C3AF, NULL);
		NullCheck(L_84);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_84, L_85, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Rogayah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_86 = __this->___navigationTargetDropDown_4;
		NullCheck(L_86);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_87;
		L_87 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_86, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_88 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_88, _stringLiteral709D3F72B5AABCCE8F1E64F84577452213DCE10E, NULL);
		NullCheck(L_87);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_87, L_88, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norisan"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_89 = __this->___navigationTargetDropDown_4;
		NullCheck(L_89);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_90;
		L_90 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_89, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_91 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_91, _stringLiteral657062F3B1413BACC9328173542D2D3D50A44A5D, NULL);
		NullCheck(L_90);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_90, L_91, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Saidatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_92 = __this->___navigationTargetDropDown_4;
		NullCheck(L_92);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_93;
		L_93 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_92, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_94 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_94, _stringLiteralB0DBC6181512268BE6BE32A0F8D9C598F9D8BDDE, NULL);
		NullCheck(L_93);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_93, L_94, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Fauziah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_95 = __this->___navigationTargetDropDown_4;
		NullCheck(L_95);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_96;
		L_96 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_95, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_97 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_97, _stringLiteral108B4F81EE308DE82D54520F7B864C82293182B3, NULL);
		NullCheck(L_96);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_96, L_97, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norjan"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_98 = __this->___navigationTargetDropDown_4;
		NullCheck(L_98);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_99;
		L_99 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_98, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_100 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_100, _stringLiteral08FFFD0FAAAE40FDF04605B2AFA00E0F02257147, NULL);
		NullCheck(L_99);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_99, L_100, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Shuzlina"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_101 = __this->___navigationTargetDropDown_4;
		NullCheck(L_101);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_102;
		L_102 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_101, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_103 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_103, _stringLiteral9601D314D689FB8E0EAFF5D4EA6BE678FF24D89B, NULL);
		NullCheck(L_102);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_102, L_103, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Sofianita"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_104 = __this->___navigationTargetDropDown_4;
		NullCheck(L_104);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_105;
		L_105 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_104, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_106 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_106, _stringLiteralA4257557A22321785593E30D434D9D4B8D372502, NULL);
		NullCheck(L_105);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_105, L_106, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Shamimi"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_107 = __this->___navigationTargetDropDown_4;
		NullCheck(L_107);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_108;
		L_108 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_107, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_109 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_109, _stringLiteralE8893425E2D18DEC8F381D5D346EE7EFD24563F7, NULL);
		NullCheck(L_108);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_108, L_109, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Azliza"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_110 = __this->___navigationTargetDropDown_4;
		NullCheck(L_110);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_111;
		L_111 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_110, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_112 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_112, _stringLiteral956E396EAE331F38AAF9045C2B7C6EB407AC1ED6, NULL);
		NullCheck(L_111);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_111, L_112, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
	}

IL_03d9:
	{
		// if(floorNumber == 2)
		int32_t L_113 = ___floorNumber0;
		if ((!(((uint32_t)L_113) == ((uint32_t)2))))
		{
			goto IL_073a;
		}
	}
	{
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof. Zaidah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_114 = __this->___navigationTargetDropDown_4;
		NullCheck(L_114);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_115;
		L_115 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_114, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_116 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_116, _stringLiteral9B740AB0BB4F90201405948DFDBAABE694FCA664, NULL);
		NullCheck(L_115);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_115, L_116, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Ruhaila"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_117 = __this->___navigationTargetDropDown_4;
		NullCheck(L_117);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_118;
		L_118 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_117, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_119 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_119);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_119, _stringLiteral2E782F8C452BED9E38580FE0B797C763B546A9F2, NULL);
		NullCheck(L_118);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_118, L_119, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norzeatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_120 = __this->___navigationTargetDropDown_4;
		NullCheck(L_120);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_121;
		L_121 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_120, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_122 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_122);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_122, _stringLiteralC896DB46E019CA0800607785A4600AF7AFCC5EB1, NULL);
		NullCheck(L_121);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_121, L_122, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Jasni"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_123 = __this->___navigationTargetDropDown_4;
		NullCheck(L_123);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_124;
		L_124 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_123, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_125 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_125);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_125, _stringLiteral5D519D19E48F64BE4EA9A793A2554954252E1A89, NULL);
		NullCheck(L_124);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_124, L_125, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Mohd Zahid"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_126 = __this->___navigationTargetDropDown_4;
		NullCheck(L_126);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_127;
		L_127 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_126, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_128 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_128, _stringLiteralDFBC230F0A5A4062E892C3941D5B0F18723C343C, NULL);
		NullCheck(L_127);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_127, L_128, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Siti Mariam"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_129 = __this->___navigationTargetDropDown_4;
		NullCheck(L_129);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_130;
		L_130 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_129, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_131 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_131, _stringLiteral1AE5E08124EF50819A31285A01ED4C77EF4DA9F5, NULL);
		NullCheck(L_130);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_130, L_131, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Haslizatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_132 = __this->___navigationTargetDropDown_4;
		NullCheck(L_132);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_133;
		L_133 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_132, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_134 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_134);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_134, _stringLiteral8E2D569C05AAD0A3F1D050890C46190BF8761D12, NULL);
		NullCheck(L_133);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_133, L_134, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Noraini"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_135 = __this->___navigationTargetDropDown_4;
		NullCheck(L_135);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_136;
		L_136 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_135, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_137 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_137, _stringLiteral4F9C81898EDA8CDD43231357C0DB907893340DBE, NULL);
		NullCheck(L_136);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_136, L_137, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norasiah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_138 = __this->___navigationTargetDropDown_4;
		NullCheck(L_138);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_139;
		L_139 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_138, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_140 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_140);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_140, _stringLiteralBAE21F25C8FE99931DAD5B82890DC7AB3D03430E, NULL);
		NullCheck(L_139);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_139, L_140, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suriyani"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_141 = __this->___navigationTargetDropDown_4;
		NullCheck(L_141);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_142;
		L_142 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_141, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_143 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_143);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_143, _stringLiteral90D9CA70E170D6F9E5A05D4FC3E0E2ECDB19B5D8, NULL);
		NullCheck(L_142);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_142, L_143, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Saidatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_144 = __this->___navigationTargetDropDown_4;
		NullCheck(L_144);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_145;
		L_145 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_144, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_146 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_146);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_146, _stringLiteral3A835C505E220425CADAFE7BE0DB7EBDEC51110D, NULL);
		NullCheck(L_145);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_145, L_146, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Marshima"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_147 = __this->___navigationTargetDropDown_4;
		NullCheck(L_147);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_148;
		L_148 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_147, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_149 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_149);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_149, _stringLiteralBA7B262153D4B29652018407029E3D7DB3556285, NULL);
		NullCheck(L_148);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_148, L_149, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norshahida"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_150 = __this->___navigationTargetDropDown_4;
		NullCheck(L_150);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_151;
		L_151 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_150, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_152 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_152);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_152, _stringLiteralD582C11C63A9DE1D8CE669C84FEC3E9481FC041B, NULL);
		NullCheck(L_151);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_151, L_152, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Ridhwan & Sir Taufiq"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_153 = __this->___navigationTargetDropDown_4;
		NullCheck(L_153);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_154;
		L_154 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_153, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_155 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_155);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_155, _stringLiteralB39CD8EDA5616D19B84E59280FEEB4074461BD54, NULL);
		NullCheck(L_154);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_154, L_155, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Izzad"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_156 = __this->___navigationTargetDropDown_4;
		NullCheck(L_156);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_157;
		L_157 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_156, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_158 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_158);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_158, _stringLiteral229B5AB956AB06878DA33090F4B4E2C5022C64CC, NULL);
		NullCheck(L_157);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_157, L_158, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ali"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_159 = __this->___navigationTargetDropDown_4;
		NullCheck(L_159);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_160;
		L_160 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_159, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_161 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_161);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_161, _stringLiteralC9E49EC1106EBA82D0033008A87EDC6CC257DB95, NULL);
		NullCheck(L_160);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_160, L_161, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Azizian"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_162 = __this->___navigationTargetDropDown_4;
		NullCheck(L_162);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_163;
		L_163 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_162, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_164 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_164);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_164, _stringLiteral6ACB0A6D4775E02A20F2C52D80CDF9561EA2457A, NULL);
		NullCheck(L_163);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_163, L_164, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts. Dr. Surya"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_165 = __this->___navigationTargetDropDown_4;
		NullCheck(L_165);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_166;
		L_166 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_165, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_167 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_167);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_167, _stringLiteralF97AA1B5221C0B0FAE01AFD5A8CC75D40BA351E5, NULL);
		NullCheck(L_166);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_166, L_167, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Tajul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_168 = __this->___navigationTargetDropDown_4;
		NullCheck(L_168);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_169;
		L_169 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_168, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_170 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_170);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_170, _stringLiteral0C32BEF03C3B4717F9BC525A7FF85BBD8ED6FB03, NULL);
		NullCheck(L_169);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_169, L_170, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Razif"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_171 = __this->___navigationTargetDropDown_4;
		NullCheck(L_171);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_172;
		L_172 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_171, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_173 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_173);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_173, _stringLiteral845AD0F82ACF1EA06B87350A9128E6FCBA67E8DD, NULL);
		NullCheck(L_172);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_172, L_173, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Ashikin"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_174 = __this->___navigationTargetDropDown_4;
		NullCheck(L_174);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_175;
		L_175 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_174, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_176 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_176);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_176, _stringLiteralAC4EC55EEA0700C886616DC2EC50097D54C09271, NULL);
		NullCheck(L_175);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_175, L_176, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof. Ts. Dr. Wan Abdul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_177 = __this->___navigationTargetDropDown_4;
		NullCheck(L_177);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_178;
		L_178 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_177, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_179 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_179);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_179, _stringLiteralF23F42411CB620102A99D0593BDA057F7E95A81E, NULL);
		NullCheck(L_178);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_178, L_179, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Siti Khatijah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_180 = __this->___navigationTargetDropDown_4;
		NullCheck(L_180);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_181;
		L_181 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_180, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_182 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_182);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_182, _stringLiteral0F6F75F829944578CDF32224B64862018E13FD92, NULL);
		NullCheck(L_181);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_181, L_182, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mansir"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_183 = __this->___navigationTargetDropDown_4;
		NullCheck(L_183);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_184;
		L_184 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_183, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_185 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_185);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_185, _stringLiteral1F6A16E1F6DC0D860BFE155CAA32FDE7C030E081, NULL);
		NullCheck(L_184);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_184, L_185, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Azlan Ismail"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_186 = __this->___navigationTargetDropDown_4;
		NullCheck(L_186);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_187;
		L_187 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_186, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_188 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_188);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_188, _stringLiteral2BE6CEDFEA6724B56C608930D5442B481B74994D, NULL);
		NullCheck(L_187);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_187, L_188, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Nasirah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_189 = __this->___navigationTargetDropDown_4;
		NullCheck(L_189);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_190;
		L_190 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_189, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_191 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_191);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_191, _stringLiteral94B441D3721D498DDF0C5C2BD82E9CABDD2E6097, NULL);
		NullCheck(L_190);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_190, L_191, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Tengku Zatul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_192 = __this->___navigationTargetDropDown_4;
		NullCheck(L_192);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_193;
		L_193 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_192, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_194 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_194);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_194, _stringLiteralD16972158E954C249D3728A4B34324F4BF037696, NULL);
		NullCheck(L_193);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_193, L_194, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Nur Atiqah Sia"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_195 = __this->___navigationTargetDropDown_4;
		NullCheck(L_195);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_196;
		L_196 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_195, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_197 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_197);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_197, _stringLiteral14CDAE8C796EA81F5B731360400CB2695311843D, NULL);
		NullCheck(L_196);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_196, L_197, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ms Hana & Ms Hanin"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_198 = __this->___navigationTargetDropDown_4;
		NullCheck(L_198);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_199;
		L_199 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_198, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_200 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_200);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_200, _stringLiteral038E876A060266EA97105DE3A304B371562888C1, NULL);
		NullCheck(L_199);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_199, L_200, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norhaslinda"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_201 = __this->___navigationTargetDropDown_4;
		NullCheck(L_201);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_202;
		L_202 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_201, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_203 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_203);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_203, _stringLiteralE3E86EE6A2F832A44E224D7D412CF9DA6A7BD954, NULL);
		NullCheck(L_202);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_202, L_203, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Zainura"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_204 = __this->___navigationTargetDropDown_4;
		NullCheck(L_204);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_205;
		L_205 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_204, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_206 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_206);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_206, _stringLiteral8443F7D727AC79032B0BE7BC1DADB8307601E721, NULL);
		NullCheck(L_205);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_205, L_206, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof Madya Dr Haryani"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_207 = __this->___navigationTargetDropDown_4;
		NullCheck(L_207);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_208;
		L_208 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_207, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_209 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_209);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_209, _stringLiteralA0922B85175D61A3495B95C4C85DCCE74D487152, NULL);
		NullCheck(L_208);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_208, L_209, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Guna Sama"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_210 = __this->___navigationTargetDropDown_4;
		NullCheck(L_210);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_211;
		L_211 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_210, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_212 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_212);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_212, _stringLiteralE89797D9338209F04C178D4DB0BB1DBF983F52E4, NULL);
		NullCheck(L_211);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_211, L_212, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
	}

IL_073a:
	{
		// if (floorNumber == 1)
		int32_t L_213 = ___floorNumber0;
		if ((!(((uint32_t)L_213) == ((uint32_t)1))))
		{
			goto IL_0a67;
		}
	}
	{
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Siti Nur Kamaliah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_214 = __this->___navigationTargetDropDown_4;
		NullCheck(L_214);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_215;
		L_215 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_214, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_216 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_216);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_216, _stringLiteral138ABD9514DA2AAAE4358E0F7F0CA623C0EAB9A8, NULL);
		NullCheck(L_215);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_215, L_216, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Rosanita"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_217 = __this->___navigationTargetDropDown_4;
		NullCheck(L_217);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_218;
		L_218 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_217, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_219 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_219);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_219, _stringLiteral5B57A60427E4183BDDEA667747A0DDBA1272AA3A, NULL);
		NullCheck(L_218);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_218, L_219, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Siti Arpah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_220 = __this->___navigationTargetDropDown_4;
		NullCheck(L_220);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_221;
		L_221 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_220, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_222 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_222);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_222, _stringLiteralB4822143145DF2236229E0B7024FDDE74D72E8E0, NULL);
		NullCheck(L_221);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_221, L_222, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Norzilah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_223 = __this->___navigationTargetDropDown_4;
		NullCheck(L_223);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_224;
		L_224 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_223, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_225 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_225);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_225, _stringLiteral7A50C3AE27005DDF80B813A23076D2A59B65C0B0, NULL);
		NullCheck(L_224);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_224, L_225, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Azizi"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_226 = __this->___navigationTargetDropDown_4;
		NullCheck(L_226);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_227;
		L_227 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_226, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_228 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_228);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_228, _stringLiteralF1330B49F85AEF6E6245CF3A2A1DA1C9E5FD0FEB, NULL);
		NullCheck(L_227);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_227, L_228, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Fakariah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_229 = __this->___navigationTargetDropDown_4;
		NullCheck(L_229);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_230;
		L_230 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_229, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_231 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_231);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_231, _stringLiteral5AF27205AE608B6490E4B686CBE1944FEE3C180E, NULL);
		NullCheck(L_230);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_230, L_231, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Zarina"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_232 = __this->___navigationTargetDropDown_4;
		NullCheck(L_232);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_233;
		L_233 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_232, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_234 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_234);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_234, _stringLiteral014894C6326BD14EF9C75CB62D99AC0C417C056F, NULL);
		NullCheck(L_233);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_233, L_234, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Prof Madya Dr Yusof"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_235 = __this->___navigationTargetDropDown_4;
		NullCheck(L_235);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_236;
		L_236 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_235, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_237 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_237);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_237, _stringLiteral06079C41056F790064486A325DDC2517FF89916C, NULL);
		NullCheck(L_236);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_236, L_237, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Sir Kamarul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_238 = __this->___navigationTargetDropDown_4;
		NullCheck(L_238);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_239;
		L_239 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_238, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_240 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_240);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_240, _stringLiteralE5E780868586EBBABAA66F2FD8A30DE4F281D6D6, NULL);
		NullCheck(L_239);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_239, L_240, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norkhushaini"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_241 = __this->___navigationTargetDropDown_4;
		NullCheck(L_241);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_242;
		L_242 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_241, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_243 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_243);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_243, _stringLiteralA14A1C92F24D3A8E6FF158ED461101CA4F3FEEA7, NULL);
		NullCheck(L_242);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_242, L_243, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Erny"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_244 = __this->___navigationTargetDropDown_4;
		NullCheck(L_244);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_245;
		L_245 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_244, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_246 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_246);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_246, _stringLiteral20DA695275375BFF63ACE6EAABAABE6083FD5DB2, NULL);
		NullCheck(L_245);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_245, L_246, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mohsen"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_247 = __this->___navigationTargetDropDown_4;
		NullCheck(L_247);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_248;
		L_248 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_247, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_249 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_249);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_249, _stringLiteralF24633A76605537D939871FBC4E2960A28EF6200, NULL);
		NullCheck(L_248);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_248, L_249, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nor Azimah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_250 = __this->___navigationTargetDropDown_4;
		NullCheck(L_250);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_251;
		L_251 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_250, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_252 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_252);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_252, _stringLiteral09B9D83DE181B1CEA106741BFD9320E85327F4DC, NULL);
		NullCheck(L_251);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_251, L_252, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Nurshahrily"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_253 = __this->___navigationTargetDropDown_4;
		NullCheck(L_253);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_254;
		L_254 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_253, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_255 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_255);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_255, _stringLiteral848BDFD49F8BFE11DA95D6656AFC4782556AD061, NULL);
		NullCheck(L_254);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_254, L_255, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Ts Dr Razulaimi"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_256 = __this->___navigationTargetDropDown_4;
		NullCheck(L_256);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_257;
		L_257 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_256, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_258 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_258);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_258, _stringLiteral7204D82B2FF027CDA0F03D158FD3A863D0FE1563, NULL);
		NullCheck(L_257);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_257, L_258, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Shapina"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_259 = __this->___navigationTargetDropDown_4;
		NullCheck(L_259);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_260;
		L_260 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_259, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_261 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_261);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_261, _stringLiteralA3CB3951E19B1151E3A59F82783E567B1FEF1209, NULL);
		NullCheck(L_260);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_260, L_261, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Zaridah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_262 = __this->___navigationTargetDropDown_4;
		NullCheck(L_262);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_263;
		L_263 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_262, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_264 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_264);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_264, _stringLiteral04426A9B1B9D6F113C9502121C265280A07C6901, NULL);
		NullCheck(L_263);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_263, L_264, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Kamarul"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_265 = __this->___navigationTargetDropDown_4;
		NullCheck(L_265);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_266;
		L_266 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_265, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_267 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_267);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_267, _stringLiteral5372A474816BD7DC0CA5E55171724B9140B52EDB, NULL);
		NullCheck(L_266);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_266, L_267, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Farah Aqilah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_268 = __this->___navigationTargetDropDown_4;
		NullCheck(L_268);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_269;
		L_269 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_268, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_270 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_270);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_270, _stringLiteralEDD2E78DBD20FC8E9DEEE53D7059B670E1EC4661, NULL);
		NullCheck(L_269);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_269, L_270, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Yuzi"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_271 = __this->___navigationTargetDropDown_4;
		NullCheck(L_271);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_272;
		L_272 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_271, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_273 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_273);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_273, _stringLiteral62A1377C473426D24CA7B6B630067E7A070F239A, NULL);
		NullCheck(L_272);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_272, L_273, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Noor Hayati"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_274 = __this->___navigationTargetDropDown_4;
		NullCheck(L_274);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_275;
		L_275 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_274, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_276 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_276);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_276, _stringLiteralD3ABF4012F8D99991A90B0666484E77EE1A9FD24, NULL);
		NullCheck(L_275);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_275, L_276, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Sharifah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_277 = __this->___navigationTargetDropDown_4;
		NullCheck(L_277);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_278;
		L_278 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_277, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_279 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_279);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_279, _stringLiteralB8E652EBA6D9E27F0972B8A1296C195AB546FDAB, NULL);
		NullCheck(L_278);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_278, L_279, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Ahmad Faiz"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_280 = __this->___navigationTargetDropDown_4;
		NullCheck(L_280);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_281;
		L_281 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_280, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_282 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_282);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_282, _stringLiteral51F1778B3A96B44E8A28B7B16C4749CC83EFFDFF, NULL);
		NullCheck(L_281);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_281, L_282, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Afiza"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_283 = __this->___navigationTargetDropDown_4;
		NullCheck(L_283);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_284;
		L_284 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_283, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_285 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_285);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_285, _stringLiteral825933763E2EB6B8A3F938B04CC7FDCD82C293FD, NULL);
		NullCheck(L_284);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_284, L_285, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Norizan"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_286 = __this->___navigationTargetDropDown_4;
		NullCheck(L_286);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_287;
		L_287 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_286, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_288 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_288);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_288, _stringLiteralBCDCEA14110360AC6CBD2DA8EBB81A17E596D7AE, NULL);
		NullCheck(L_287);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_287, L_288, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Hayati"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_289 = __this->___navigationTargetDropDown_4;
		NullCheck(L_289);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_290;
		L_290 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_289, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_291 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_291);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_291, _stringLiteralFBF7351FF72EAA11CB0CFCBAD1A2C82B5306E934, NULL);
		NullCheck(L_290);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_290, L_291, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Mohd Suffian"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_292 = __this->___navigationTargetDropDown_4;
		NullCheck(L_292);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_293;
		L_293 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_292, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_294 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_294);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_294, _stringLiteralAE46C973094B60EB340BE35C84BABBA2D8794298, NULL);
		NullCheck(L_293);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_293, L_294, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Sharifalillah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_295 = __this->___navigationTargetDropDown_4;
		NullCheck(L_295);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_296;
		L_296 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_295, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_297 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_297);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_297, _stringLiteral1D7174F650392327343D219ED99E53AE1B994CBC, NULL);
		NullCheck(L_296);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_296, L_297, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Madam Noor Latiffah"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_298 = __this->___navigationTargetDropDown_4;
		NullCheck(L_298);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_299;
		L_299 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_298, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_300 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_300);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_300, _stringLiteralCFE2DBE50D38FA09EC84DDE3E860F8E8B996D903, NULL);
		NullCheck(L_299);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_299, L_300, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Dr Suzana Ahmad"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_301 = __this->___navigationTargetDropDown_4;
		NullCheck(L_301);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_302;
		L_302 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_301, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_303 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_303);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_303, _stringLiteralB5D42B1C4BCADAA032950EC95CEE934D2793B6EB, NULL);
		NullCheck(L_302);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_302, L_303, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
		// navigationTargetDropDown.options.Add(new TMP_Dropdown.OptionData("Bilik Rehat"));
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_304 = __this->___navigationTargetDropDown_4;
		NullCheck(L_304);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_305;
		L_305 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_304, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_306 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_306);
		OptionData__ctor_mC08B019055F1AFA7CFC262EF24A64F6D8E7C84E6(L_306, _stringLiteral0562B5C2BE1ABC915AC2CE0F40A3908D30273C4E, NULL);
		NullCheck(L_305);
		List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_inline(L_305, L_306, List_1_Add_mAF553D7B893E33551C9C7CCF0CC4AC4CDA81B821_RuntimeMethod_var);
	}

IL_0a67:
	{
		// }
		return;
	}
}
// System.Void SetNavigationTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigationTarget__ctor_m40AA3B1240C215E094DE629C3BFAD2C4859E6D18 (SetNavigationTarget_tA053396DB09D0C8D8DAF5086C1A993785B7196A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Target> navigationTargetObjects = new List<Target>();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_0 = (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*)il2cpp_codegen_object_new(List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F(L_0, List_1__ctor_mE436230BB8A75F6CFA6557297F3D21AAB9BF282F_RuntimeMethod_var);
		__this->___navigationTargetObjects_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTargetObjects_5), (void*)L_0);
		// private Vector3 targetPosition = Vector3.zero; // current target position
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___targetPosition_9 = L_1;
		// private int currentFloor = 1;
		__this->___currentFloor_10 = 1;
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
// System.Void SetNavigationTarget/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m2F30D6BEEA42042B74947F1F245A7A22FC49994C (U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SetNavigationTarget/<>c__DisplayClass10_0::<SetCurrentNavigationTarget>b__0(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CSetCurrentNavigationTargetU3Eb__0_mB1FD55AEBABD9DFCE55990DDA538F5A3C7D959DD (U3CU3Ec__DisplayClass10_0_t11F95301C8835017149A0352A75FE52435C47BEE* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___x0, const RuntimeMethod* method) 
{
	{
		// Target currentTarget = navigationTargetObjects.Find(x => x.Name.ToLower().Equals(selectedText.ToLower()));
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->___selectedText_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
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
// System.Void GetImageAlternative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetImageAlternative_Update_mA046E7E3C6731086AA2AC43B2560BACD09C5F3CA (GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_0 = NULL;
	{
		// Graphics.Blit(null, targetRenderTexture, arCameraBackground.material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___targetRenderTexture_5;
		ARCameraBackground_t5E400069BEB27E2F5ECE553C3C23475FC80A1703* L_1 = __this->___arCameraBackground_4;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ARCameraBackground_get_material_mD444C30747216E7E7B5FF0F714EE0DF57CC93EC8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m4055EA37BA8BAEF7EF29830F86ED13227780F4DD((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_0, L_2, NULL);
		// cameraImageTexture = new Texture2D(targetRenderTexture.width, targetRenderTexture.height, TextureFormat.RGBA32, false);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___targetRenderTexture_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___targetRenderTexture_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_7, L_4, L_6, 4, (bool)0, NULL);
		__this->___cameraImageTexture_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_7), (void*)L_7);
		// Graphics.CopyTexture(targetRenderTexture, cameraImageTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___targetRenderTexture_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___cameraImageTexture_7;
		Graphics_CopyTexture_m34BA416A531684743117976772DD8B218441DB93(L_8, L_9, NULL);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_10 = __this->___reader_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___cameraImageTexture_7;
		NullCheck(L_11);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_12;
		L_12 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_11, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___cameraImageTexture_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = __this->___cameraImageTexture_7;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		NullCheck(L_10);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_17;
		L_17 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_10, L_12, L_14, L_16);
		V_0 = L_17;
		// if (result != null)
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_18 = V_0;
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		// qrCodeText.text = result.Text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = __this->___qrCodeText_6;
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_21);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void GetImageAlternative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetImageAlternative__ctor_m6ADE9089C9D895A989EFAA5864A174DBDA2B5A21 (GetImageAlternative_t4AD9915FCE33B62597BF3AE183556E5D68801C68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IBarcodeReader reader = new BarcodeReader(); //create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_0 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_0, NULL);
		__this->___reader_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_0);
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
// System.Void PathArrowVisualization::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_Update_m32B7D245C93C7061F103742024A460D4D464EA1C (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	{
		// path = navigationController.CalculatedPath;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		NullCheck(L_0);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1;
		L_1 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(L_0, NULL);
		__this->___path_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_8), (void*)L_1);
		// AddOffsetToPath();
		PathArrowVisualization_AddOffsetToPath_m759245C732330E474B5038503EBE7C5594895C52(__this, NULL);
		// SelectNextNavigationPoint();
		PathArrowVisualization_SelectNextNavigationPoint_mFDA6A6AA44733800F05FA3D63324F193F8FA2777(__this, NULL);
		// AddArrowOffset();
		PathArrowVisualization_AddArrowOffset_mE5EEE9B766B17D04A8700CC91B8983AD514CD6BD(__this, NULL);
		// arrow.transform.LookAt(nextNavigationPoint);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___arrow_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___nextNavigationPoint_11;
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PathArrowVisualization::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_AddOffsetToPath_m759245C732330E474B5038503EBE7C5594895C52 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pathOffset = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___path_8;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_0, NULL);
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___pathOffset_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathOffset_10), (void*)L_2);
		// for (int i = 0; i < path.corners.Length; i++)
		V_0 = 0;
		goto IL_006d;
	}

IL_001c:
	{
		// pathOffset[i] = new Vector3(path.corners[i].x, transform.position.y, path.corners[i].z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___pathOffset_10;
		int32_t L_4 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_5 = __this->___path_8;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_12 = __this->___path_8;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_8, L_11, L_15, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = 0; i < path.corners.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < path.corners.Length; i++)
		int32_t L_18 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_19 = __this->___path_8;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_19, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PathArrowVisualization::SelectNextNavigationPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_SelectNextNavigationPoint_mFDA6A6AA44733800F05FA3D63324F193F8FA2777 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	{
		// nextNavigationPoint = SelectNextNavigationPointWithinDistance();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = PathArrowVisualization_SelectNextNavigationPointWithinDistance_m37AA57332DAAD5185713AA4A74371EDBEEBA2AC7(__this, NULL);
		__this->___nextNavigationPoint_11 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 PathArrowVisualization::SelectNextNavigationPointWithinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PathArrowVisualization_SelectNextNavigationPointWithinDistance_m37AA57332DAAD5185713AA4A74371EDBEEBA2AC7 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pathOffset.Length; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// currentDistance = Vector3.Distance(transform.position, pathOffset[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___pathOffset_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_1, L_5, NULL);
		__this->___currentDistance_9 = L_6;
		// if (currentDistance > moveOnDistance)
		float L_7 = __this->___currentDistance_9;
		float L_8 = __this->___moveOnDistance_7;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_0041;
		}
	}
	{
		// return pathOffset[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___pathOffset_10;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0041:
	{
		// for (int i = 0; i < pathOffset.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < pathOffset.Length; i++)
		int32_t L_14 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___pathOffset_10;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return navigationController.TargetPosition;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_16 = __this->___navigationController_4;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(L_16, NULL);
		return L_17;
	}
}
// System.Void PathArrowVisualization::AddArrowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization_AddArrowOffset_mE5EEE9B766B17D04A8700CC91B8983AD514CD6BD (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	{
		// if (navigationYOffset.value != 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_005c;
		}
	}
	{
		// arrow.transform.position = new Vector3(arrow.transform.position.x, navigationYOffset.value, arrow.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___arrow_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___arrow_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___navigationYOffset_6;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___arrow_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_7, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_14, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void PathArrowVisualization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathArrowVisualization__ctor_m32AB129854D06EAF07D5FFB30DAEB1DA278CD834 (PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 nextNavigationPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___nextNavigationPoint_11 = L_0;
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
// System.Void PathLineVisualization::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_Update_m692420E5F9B5F54513A92057C3ACEED93C3957C6 (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) 
{
	{
		// path = navigationController.CalculatedPath;
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		NullCheck(L_0);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1;
		L_1 = NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline(L_0, NULL);
		__this->___path_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_7), (void*)L_1);
		// AddOffsetToPath();
		PathLineVisualization_AddOffsetToPath_mA95216A791F9EFA751DD6A0431F3B17ADCEF611E(__this, NULL);
		// AddLineOffset();
		PathLineVisualization_AddLineOffset_m9343091344FADD119D606522CDAA4B93C9F396D1(__this, NULL);
		// SetLineRendererPositions();
		PathLineVisualization_SetLineRendererPositions_m748D9AE17A82E8E08AD34A02877426F0B146775A(__this, NULL);
		// }
		return;
	}
}
// System.Void PathLineVisualization::AddOffsetToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_AddOffsetToPath_mA95216A791F9EFA751DD6A0431F3B17ADCEF611E (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// calculatedPathAndOffset = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___path_7;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_0, NULL);
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___calculatedPathAndOffset_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___calculatedPathAndOffset_8), (void*)L_2);
		// for (int i = 0; i < path.corners.Length; i++)
		V_0 = 0;
		goto IL_006d;
	}

IL_001c:
	{
		// calculatedPathAndOffset[i] = new Vector3(path.corners[i].x, transform.position.y, path.corners[i].z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___calculatedPathAndOffset_8;
		int32_t L_4 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_5 = __this->___path_7;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6;
		L_6 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_12 = __this->___path_7;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_12, NULL);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_8, L_11, L_15, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// for (int i = 0; i < path.corners.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < path.corners.Length; i++)
		int32_t L_18 = V_0;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_19 = __this->___path_7;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
		L_20 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_19, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PathLineVisualization::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_AddLineOffset_m9343091344FADD119D606522CDAA4B93C9F396D1 (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (navigationYOffset.value != 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_005b;
		}
	}
	{
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_0016:
	{
		// calculatedPathAndOffset[i] += new Vector3(0, navigationYOffset.value, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___calculatedPathAndOffset_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___navigationYOffset_6;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_8, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_9;
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < calculatedPathAndOffset.Length; i++)
		int32_t L_11 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0016;
		}
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void PathLineVisualization::SetLineRendererPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization_SetLineRendererPositions_m748D9AE17A82E8E08AD34A02877426F0B146775A (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) 
{
	{
		// line.positionCount = calculatedPathAndOffset.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_1);
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// line.SetPositions(calculatedPathAndOffset);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___calculatedPathAndOffset_8;
		NullCheck(L_2);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PathLineVisualization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathLineVisualization__ctor_m3B4D77B8C672322F81577D3CE57F9AA6B25CBEC9 (PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* __this, const RuntimeMethod* method) 
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
// System.Void SwitchPathVisualization::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_Start_m0428F5ABD551E5A0112E2121360FD29C9E2A7A8C (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) 
{
	{
		// activeVisualization = pathLineVis.gameObject;
		PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* L_0 = __this->___pathLineVis_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		__this->___activeVisualization_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualization_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void SwitchPathVisualization::NextLineVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_NextLineVisualization_m0A371BCF57F16D8EBD075CA7274D812035129D9C (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) 
{
	{
		// visualizationCounter++;
		int32_t L_0 = __this->___visualizationCounter_6;
		__this->___visualizationCounter_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// DisableAllPathVisuals();
		SwitchPathVisualization_DisableAllPathVisuals_mD84227958837618E88ECA522163BDCCE4BF66190(__this, NULL);
		// EnablePathVisualsByIndex(visualizationCounter);
		int32_t L_1 = __this->___visualizationCounter_6;
		SwitchPathVisualization_EnablePathVisualsByIndex_m8BAF76AD9D39EF2787EFFFF352F35B36FA80528B(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualization::DisableAllPathVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_DisableAllPathVisuals_mD84227958837618E88ECA522163BDCCE4BF66190 (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) 
{
	{
		// pathLineVis.gameObject.SetActive(false);
		PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* L_0 = __this->___pathLineVis_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// arrowLineVis.gameObject.SetActive(false);
		PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* L_2 = __this->___arrowLineVis_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualization::EnablePathVisualsByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_EnablePathVisualsByIndex_m8BAF76AD9D39EF2787EFFFF352F35B36FA80528B (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, int32_t ___visIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___visIndex0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// activeVisualization = arrowLineVis.gameObject;
		PathArrowVisualization_t9A120A95C07FE85C9F149FD9ABE4D7561E0F90CE* L_1 = __this->___arrowLineVis_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___activeVisualization_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualization_7), (void*)L_2);
		// break;
		goto IL_002f;
	}

IL_0017:
	{
		// activeVisualization = pathLineVis.gameObject;
		PathLineVisualization_tFEFF99196C8113C6095378722BDF9DDAA973B9D8* L_3 = __this->___pathLineVis_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		__this->___activeVisualization_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeVisualization_7), (void*)L_4);
		// visualizationCounter = 0;
		__this->___visualizationCounter_6 = 0;
	}

IL_002f:
	{
		// activeVisualization.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___activeVisualization_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualization::ToggleVisualVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization_ToggleVisualVisibility_mFA0C130639F47F8C6D5DBC4BDEDD13BEB303C880 (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) 
{
	{
		// activeVisualization.SetActive(!activeVisualization.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeVisualization_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___activeVisualization_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void SwitchPathVisualization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchPathVisualization__ctor_m6694CCFF6D8D2878B190B8F160DCF1B6D023DF02 (SwitchPathVisualization_t06107E7DE3B1BF96FCD35CFF1B8FB6A1F021E115* __this, const RuntimeMethod* method) 
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
// System.Void SetUIText::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUIText_OnSliderValueChanged_m4049862211BCA4F705D3A47BF281F38E7B1D613D (SetUIText_tF89CCAB602C938CA025BC2B6C4A49410EF4A6B05* __this, float ___numericValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textField.text = $"{fixedText}: {numericValue}";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___textField_4;
		String_t* L_1 = __this->___fixedText_5;
		float L_2 = ___numericValue0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_1, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void SetUIText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUIText__ctor_m7492B8C419134961A1886C4841538BEFB5C34736 (SetUIText_tF89CCAB602C938CA025BC2B6C4A49410EF4A6B05* __this, const RuntimeMethod* method) 
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null || theConfiguration == value || theConfiguration == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___value0;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		// theConfiguration = value;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___value0;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)L_4);
		return;
	}

IL_001d:
	{
		// throw new SignInException(GoogleSignInStatusCode.DeveloperError,
		//     "DefaultInstance already created. " +
		//     " Cannot change configuration after creation.");
		SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_5 = (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B(L_5, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD400EB487C20E145E8637C4026A2356D9E546258)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17_RuntimeMethod_var)));
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// theInstance = new GoogleSignIn(new GoogleSignInImpl(Configuration));
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline(NULL);
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_2 = (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349*)il2cpp_codegen_object_new(GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A(L_2, L_1, NULL);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3 = (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA*)il2cpp_codegen_object_new(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52(L_3, L_2, NULL);
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0), (void*)L_3);
	}

IL_001b:
	{
		// return theInstance;
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) 
{
	{
		// internal GoogleSignIn(GoogleSignInImpl impl) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.impl = impl;
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_0 = ___impl0;
		__this->___impl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_m14A29DE697ECC64D8A0A5CBA47278ECAE9D26F29 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.EnableDebugLogging(flag);
		RuntimeObject* L_0 = __this->___impl_2;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//   impl.SignIn().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//     impl.SignInSilently().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theConfiguration = null;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL);
		// impl.SignOut();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.Disconnect();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
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
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_mF0A5634485EAF28ED443E3FB31248C2C1B1BE942 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SignInException(GoogleSignInStatusCode status) {
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(message) {
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// Status = status;
		int32_t L_1 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m84BD804BE5ECAFDF85A48095572AA861C1E9D931 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Exception innerException) : base(message, innerException) {
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m97D47EE86A6870059BDA9F858818670FBAFA3812 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(info, context) {
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.GoogleSignInUser::get_AuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m086556E7DADF3850F2A70EC022F5BF9870DAAE34 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CAuthCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_m1955EAFF719827C4118F9B7D2DF30E490F6A6797 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CGivenNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_mB8E944CF7D941E7F823C079410D45071ECE203A7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CFamilyNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_mCBF326EFC373DEF983AB1E87082AF49D81D1082E (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) 
{
	{
		// public BaseObject(IntPtr intPtr) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// selfHandleRef = new HandleRef(this, intPtr);
		intptr_t L_0 = ___intPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->___selfHandleRef_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfHandleRef.Equals(nullSelf)) {
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___selfHandleRef_0);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1;
		RuntimeObject* L_3 = Box(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F> L_4(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException(
		//   "Attempted to use object after it was cleaned up");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return selfHandleRef;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___selfHandleRef_0;
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selfHandleRef = nullSelf;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		__this->___selfHandleRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// UIntPtr requiredSize = outStringMethod(null, UIntPtr.Zero);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_0 = ___outStringMethod0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		uintptr_t L_1;
		L_1 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, (0), NULL);
		V_0 = L_1;
		// if (requiredSize.Equals(UIntPtr.Zero)) {
		uintptr_t L_2 = (0);
		RuntimeObject* L_3 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4;
		L_4 = UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0022:
	{
		// string str = null;
		V_1 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// byte[] array = new byte[requiredSize.ToUInt32()];
		uint32_t L_5;
		L_5 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// outStringMethod(array, requiredSize);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_7 = ___outStringMethod0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		uintptr_t L_9 = V_0;
		NullCheck(L_7);
		uintptr_t L_10;
		L_10 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_7, L_8, L_9, NULL);
		// str = Encoding.UTF8.GetString(array, 0,
		//         (int)requiredSize.ToUInt32() - 1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		uint32_t L_13;
		L_13 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1)));
		V_1 = L_14;
		// } catch (Exception e) {
		goto IL_0077;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Exception creating string from char array: " + e);
			Exception_t* L_15 = V_3;
			Exception_t* L_16 = L_15;
			G_B5_0 = L_16;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
			if (L_16)
			{
				G_B6_0 = L_16;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
				goto IL_0060;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0065;
		}

IL_0060:
		{
			NullCheck(G_B6_0);
			String_t* L_17;
			L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_17;
			G_B7_1 = G_B6_1;
		}

IL_0065:
		{
			String_t* L_18;
			L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_18, NULL);
			// str = string.Empty;
			String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_1 = L_19;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0077;
		}
	}// end catch (depth: 1)

IL_0077:
	{
		// return str;
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__cctor_m5F932A577375E70C1A127B6FA5694F4B57989711 (const RuntimeMethod* method) 
{
	{
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
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef uintptr_t (*FunctionPointerType) (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method);
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* currentDelegate = reinterpret_cast<OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Open(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Closed(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___out_bytes0, ___out_size1);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uintptr_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___out_bytes0, ___out_size1);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___out_bytes0' to native representation
	uint8_t* ____out_bytes0_marshaled = NULL;
	if (___out_bytes0 != NULL)
	{
		____out_bytes0_marshaled = reinterpret_cast<uint8_t*>((___out_bytes0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____out_bytes0_marshaled, ___out_size1);

	return returnValue;
}
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Closed;
	}
	else
	{
		bool isOpen = methodCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.Impl.BaseObject/OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_m608A23F502DE02D618CCA39D6D865C7D18CDFDF7 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___out_bytes0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___out_size1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_m1559888E67A55BCBDCFA90C6873D68C33E8AFE2A (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// : base(GoogleSignIn_Create(GetPlayerActivity())) {
		intptr_t L_0;
		L_0 = GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88(NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_1, NULL);
		// if (configuration != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___configuration0;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		// List<string> scopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// if (configuration.AdditionalScopes != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___configuration0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___AdditionalScopes_9;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// scopes.AddRange(configuration.AdditionalScopes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_7 = ___configuration0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___AdditionalScopes_9;
		NullCheck(L_6);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_6, L_8, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_002d:
	{
		// GoogleSignIn_Configure(SelfPtr(), configuration.UseGameSignIn,
		//              configuration.WebClientId,
		//              configuration.RequestAuthCode,
		//              configuration.ForceTokenRefresh,
		//              configuration.RequestEmail,
		//              configuration.RequestIdToken,
		//              configuration.HidePopups,
		//              scopes.ToArray(),
		//              scopes.Count,
		//              configuration.AccountName);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		L_9 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_10 = ___configuration0;
		NullCheck(L_10);
		bool L_11 = L_10->___UseGameSignIn_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_12 = ___configuration0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___WebClientId_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_14 = ___configuration0;
		NullCheck(L_14);
		bool L_15 = L_14->___RequestAuthCode_2;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_16 = ___configuration0;
		NullCheck(L_16);
		bool L_17 = L_16->___ForceTokenRefresh_3;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_18 = ___configuration0;
		NullCheck(L_18);
		bool L_19 = L_18->___RequestEmail_4;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_20 = ___configuration0;
		NullCheck(L_20);
		bool L_21 = L_20->___RequestIdToken_5;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_22 = ___configuration0;
		NullCheck(L_22);
		bool L_23 = L_22->___HidePopups_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_24, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_26, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_28 = ___configuration0;
		NullCheck(L_28);
		String_t* L_29 = L_28->___AccountName_8;
		bool L_30;
		L_30 = GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m527A8F7AAE6B947A8EC6DC25E23E661D2B6E117F (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_EnableDebugLogging(SelfPtr(), flag);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1 = ___flag0;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54(L_0, L_1, NULL);
		// }
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignIn_m859A15256A86DF1873867F49B79B69163EAB9BE8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignIn(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignInSilently_mE92B6CCBDA838381A21703691FB9C5F461A477F8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignInSilently(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m88FED0CCBAA20F403B838BAA20FBD5FC5CC2416B (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Signout(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m136F2268A549DA9A13D7BBB198BE4B286380ECA1 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Disconnect(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D (intptr_t ___data0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___data0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___data0);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_EnableDebugLogging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____self0_marshaled, static_cast<int32_t>(___flag1));
	#else
	il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___flag1));
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4 + sizeof(char*) + 4 + 4 + 4 + 4 + 4 + sizeof(void*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___webClientId2' to native representation
	char* ____webClientId2_marshaled = NULL;
	____webClientId2_marshaled = il2cpp_codegen_marshal_string(___webClientId2);

	// Marshaling of parameter '___additionalScopes8' to native representation
	char** ____additionalScopes8_marshaled = NULL;
	if (___additionalScopes8 != NULL)
	{
		il2cpp_array_size_t ____additionalScopes8_Length = (___additionalScopes8)->max_length;
		____additionalScopes8_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____additionalScopes8_Length + 1);
		(____additionalScopes8_marshaled)[____additionalScopes8_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_Length); i++)
		{
			(____additionalScopes8_marshaled)[i] = il2cpp_codegen_marshal_string((___additionalScopes8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling of parameter '___accountName10' to native representation
	char* ____accountName10_marshaled = NULL;
	____accountName10_marshaled = il2cpp_codegen_marshal_string(___accountName10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___webClientId2' native representation
	il2cpp_codegen_marshal_free(____webClientId2_marshaled);
	____webClientId2_marshaled = NULL;

	// Marshaling cleanup of parameter '___additionalScopes8' native representation
	if (____additionalScopes8_marshaled != NULL)
	{
		const il2cpp_array_size_t ____additionalScopes8_marshaled_CleanupLoopCount = (___additionalScopes8 != NULL) ? (___additionalScopes8)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____additionalScopes8_marshaled)[i]);
			(____additionalScopes8_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____additionalScopes8_marshaled);
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___accountName10' native representation
	il2cpp_codegen_marshal_free(____accountName10_marshaled);
	____accountName10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignIn", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignInSilently", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Signout", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Disconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_DisposeFuture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Pending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Result", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetServerAuthCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetDisplayName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetFamilyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetGivenName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetIdToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetImageUrl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetUserId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.AndroidJavaClass jc = new UnityEngine.AndroidJavaClass(
		//   "com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return jc.GetStatic<UnityEngine.AndroidJavaObject>("currentActivity")
		//          .GetRawObject();
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
		return L_2;
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NativeFuture(IntPtr ptr) : base(ptr) {
		intptr_t L_0 = ___ptr0;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m86BBFC01575F8083B39FAEFDD779267FE212C669 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_DisposeFuture(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6(L_0, NULL);
		// base.Dispose();
		BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mF70898B348D8019990176CA0B7D46936E7EDA741 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return GoogleSignInImpl.GoogleSignIn_Pending(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42(L_0, NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* NativeFuture_get_Result_m9A5DF2B826B14BC6D847C0CB12ACC2F5549B1A2A (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* V_1 = NULL;
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// IntPtr ptr = GoogleSignInImpl.GoogleSignIn_Result(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1(L_0, NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero) {
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_4 = (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A(L_4, NULL);
		V_1 = L_4;
		// GoogleSignInUser user = new GoogleSignInUser();
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_5 = (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)il2cpp_codegen_object_new(GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91(L_5, NULL);
		V_2 = L_5;
		// HandleRef userPtr = new HandleRef(user, ptr);
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_6 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_7 = V_2;
		intptr_t L_8 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		memset((&L_9), 0, sizeof(L_9));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->___userPtr_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_6->___userPtr_0))->____wrapper_0), (void*)NULL);
		// user.DisplayName = OutParamsToString((out_string, out_size) =>
		//         GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                                      out_string,
		//                                                      out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_10 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_11 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_12 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_12, NULL);
		NullCheck(L_10);
		GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline(L_10, L_13, NULL);
		// user.Email = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                            out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_14 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_15 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_16 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var), NULL);
		String_t* L_17;
		L_17 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_16, NULL);
		NullCheck(L_14);
		GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline(L_14, L_17, NULL);
		// user.FamilyName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                                 out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_18 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_19 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_20 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var), NULL);
		String_t* L_21;
		L_21 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_20, NULL);
		NullCheck(L_18);
		GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline(L_18, L_21, NULL);
		// user.GivenName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                                out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_22 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_23 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_24 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var), NULL);
		String_t* L_25;
		L_25 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_24, NULL);
		NullCheck(L_22);
		GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline(L_22, L_25, NULL);
		// user.IdToken = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                              out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_26 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_27 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_28 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var), NULL);
		String_t* L_29;
		L_29 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_28, NULL);
		NullCheck(L_26);
		GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline(L_26, L_29, NULL);
		// user.AuthCode = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                     out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_30 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_31 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_32 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var), NULL);
		String_t* L_33;
		L_33 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_32, NULL);
		NullCheck(L_30);
		GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline(L_30, L_33, NULL);
		// string url = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                               out_size));
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_34 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_35 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var), NULL);
		String_t* L_36;
		L_36 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_35, NULL);
		V_3 = L_36;
		// if (url.Length > 0) {
		String_t* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		// user.ImageUrl = new System.Uri(url);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_39 = V_2;
		String_t* L_40 = V_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_41 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_41, L_40, NULL);
		NullCheck(L_39);
		GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline(L_39, L_41, NULL);
	}

IL_00e6:
	{
		// user.UserId = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                             out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_42 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_43 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_44 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_45;
		L_45 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_44, NULL);
		NullCheck(L_42);
		GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline(L_42, L_45, NULL);
		// return user;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_46 = V_2;
		return L_46;
	}

IL_00ff:
	{
		// return null;
		return (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mC727AD36BDCDD64E381FA4991E58694ABA9561F4 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return (GoogleSignInStatusCode)GoogleSignInImpl.GoogleSignIn_Status(
		//   SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		int32_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60(L_0, NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                              out_string,
		//                                              out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                        out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                             out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                            out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                          out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                 out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                           out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                         out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46(L_0, L_1, L_2, NULL);
		return L_3;
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// GameObject obj = new GameObject("GoogleSignInHelperObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		// instance = obj.AddComponent<SignInHelperObject>();
		NullCheck(L_2);
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_3;
		L_3 = GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF(L_2, GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		goto IL_002d;
	}

IL_0023:
	{
		// instance = new SignInHelperObject();
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_4 = (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B*)il2cpp_codegen_object_new(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3(L_4, NULL);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
	}

IL_002d:
	{
		// return instance;
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_5 = ((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4;
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_CalculatedPath_m104DCC698C93B121B57A4C5BBAC8A4BF77141131_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath {  get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = ___value0;
		__this->___U3CCalculatedPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCalculatedPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* NavigationController_get_CalculatedPath_m172B1A93A6C7E56459535C314D16B8637AFAE99D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public NavMeshPath CalculatedPath {  get; private set; }
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = __this->___U3CCalculatedPathU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InputRect = value;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = ___value0;
		__this->___m_InputRect_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___m_OutputDimensions_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___value0;
		__this->___m_Format_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___value0;
		__this->___m_Transformation_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OutputDimensions;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___m_OutputDimensions_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Format;
		int32_t L_0 = __this->___m_Format_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = ___value0;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		// public string text { get { return m_Text; } set { m_Text = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
