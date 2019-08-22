#pragma once
/*
 * AUTO-GENERATED, DO NOT EDIT BY HAND
 */
#include <cstdint>
#include "EntityTypes.h"
#include "artifacts/bindgen/Unity.Tiny.Core2D-asmjs-debug/bind-Unity_Tiny_Core2D.h"
#include "artifacts/bindgen/Unity.Entities.CPlusPlus-asmjs-debug/bind-Unity_Entities_CPlusPlus.h"
namespace Unity { namespace Tiny { namespace HTML { 
struct NativeMessageByte : Unity::Entities::IBufferElementData {
  uint8_t Value;
};
}}}

#if !defined(BUILD_UNITY_TINY_HTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_1_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_1_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::NativeMessageByte>() {
    return priv_bind_Unity_Tiny_HTML_1_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::NativeMessageByte>()
{
    if (priv_bind_Unity_Tiny_HTML_1_cid == -1) {
        priv_bind_Unity_Tiny_HTML_1_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(8744016360746683232ull);
    }
    return priv_bind_Unity_Tiny_HTML_1_cid;
}

namespace Unity { namespace Tiny { namespace HTML { 
struct NativeMessageFloat : Unity::Entities::IBufferElementData {
  float Value;
};
}}}

#if !defined(BUILD_UNITY_TINY_HTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_2_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_2_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::NativeMessageFloat>() {
    return priv_bind_Unity_Tiny_HTML_2_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::NativeMessageFloat>()
{
    if (priv_bind_Unity_Tiny_HTML_2_cid == -1) {
        priv_bind_Unity_Tiny_HTML_2_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(1591430452672033054ull);
    }
    return priv_bind_Unity_Tiny_HTML_2_cid;
}

namespace Unity { namespace Tiny { namespace HTML { 
struct NativeMessageInt : Unity::Entities::IBufferElementData {
  int32_t Value;
};
}}}

#if !defined(BUILD_UNITY_TINY_HTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_3_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_3_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::NativeMessageInt>() {
    return priv_bind_Unity_Tiny_HTML_3_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::NativeMessageInt>()
{
    if (priv_bind_Unity_Tiny_HTML_3_cid == -1) {
        priv_bind_Unity_Tiny_HTML_3_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(16886521662777716685ull);
    }
    return priv_bind_Unity_Tiny_HTML_3_cid;
}

namespace Unity { namespace Tiny { namespace HTML { 
struct NativeMessage {
  Unity::Entities::NativeString512 message;
};
}}}

#if !defined(BUILD_UNITY_TINY_HTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_4_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_HTML_4_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::NativeMessage>() {
    return priv_bind_Unity_Tiny_HTML_4_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::NativeMessage>()
{
    if (priv_bind_Unity_Tiny_HTML_4_cid == -1) {
        priv_bind_Unity_Tiny_HTML_4_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(4112909372269293975ull);
    }
    return priv_bind_Unity_Tiny_HTML_4_cid;
}


