#pragma once
/*
 * AUTO-GENERATED, DO NOT EDIT BY HAND
 */
#include <cstdint>
#include "EntityTypes.h"
#include "artifacts/bindgen/Unity.Entities.CPlusPlus-asmjs-debug/bind-Unity_Entities_CPlusPlus.h"
#include "artifacts/bindgen/Unity.Tiny.Core2D-asmjs-debug/bind-Unity_Tiny_Core2D.h"
#include "artifacts/bindgen/Unity.Tiny.Image2D-asmjs-debug/bind-Unity_Tiny_Image2D.h"
namespace Unity { namespace Tiny { namespace HTML { 
struct Image2DHTMLLoading : Unity::Entities::ISystemStateComponentData {
  int32_t dummy;
};
}}}

#if !defined(BUILD_UNITY_TINY_IMAGE2DIOHTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_Image2DIOHTML_1_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_Image2DIOHTML_1_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::Image2DHTMLLoading>() {
    return priv_bind_Unity_Tiny_Image2DIOHTML_1_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::Image2DHTMLLoading>()
{
    if (priv_bind_Unity_Tiny_Image2DIOHTML_1_cid == -1) {
        priv_bind_Unity_Tiny_Image2DIOHTML_1_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(3151422592198150417ull);
    }
    return priv_bind_Unity_Tiny_Image2DIOHTML_1_cid;
}

namespace Unity { namespace Tiny { namespace HTML { 
struct Image2DHTML : Unity::Entities::ISystemStateComponentData {
  int32_t imageIndex;
  bool externalOwner;
};
}}}

#if !defined(BUILD_UNITY_TINY_IMAGE2DIOHTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_Image2DIOHTML_2_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_Image2DIOHTML_2_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::HTML::Image2DHTML>() {
    return priv_bind_Unity_Tiny_Image2DIOHTML_2_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::HTML::Image2DHTML>()
{
    if (priv_bind_Unity_Tiny_Image2DIOHTML_2_cid == -1) {
        priv_bind_Unity_Tiny_Image2DIOHTML_2_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(15529339893849585841ull);
    }
    return priv_bind_Unity_Tiny_Image2DIOHTML_2_cid;
}


