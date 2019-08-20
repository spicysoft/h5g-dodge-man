#pragma once
/*
 * AUTO-GENERATED, DO NOT EDIT BY HAND
 */
#include <cstdint>
#include "EntityTypes.h"
#include "artifacts/bindgen/Unity.Entities.CPlusPlus-asmjs-debug/bind-Unity_Entities_CPlusPlus.h"
#include "artifacts/bindgen/Unity.Tiny.Core2D-asmjs-debug/bind-Unity_Tiny_Core2D.h"
#include "artifacts/bindgen/Unity.Tiny.Core2DTypes-asmjs-debug/bind-Unity_Tiny_Core2DTypes.h"
#include "artifacts/bindgen/Unity.Tiny.Image2D-asmjs-debug/bind-Unity_Tiny_Image2D.h"
#include "artifacts/bindgen/Unity.Tiny.Text-asmjs-debug/bind-Unity_Tiny_Text.h"
#include "artifacts/bindgen/Unity.Tiny.Image2DIOHTML-asmjs-debug/bind-Unity_Tiny_Image2DIOHTML.h"
#include "artifacts/bindgen/Unity.Tiny.HTML-asmjs-debug/bind-Unity_Tiny_HTML.h"
namespace Unity { namespace Tiny { namespace TextHTML { 
struct Text2DPrivateCacheHTML : Unity::Entities::ISystemStateComponentData {
  bool italic;
  int32_t weight;
  float size;
  Unity::Tiny::Core2D::Color color;
  float minSizeAutoFit;
  float maxSizeAutoFit;
  Unity::Mathematics::float2 rect;
  int32_t cacheIndex;
};
}}}

#if !defined(BUILD_UNITY_TINY_TEXTHTML_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_TextHTML_1_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_TextHTML_1_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::TextHTML::Text2DPrivateCacheHTML>() {
    return priv_bind_Unity_Tiny_TextHTML_1_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::TextHTML::Text2DPrivateCacheHTML>()
{
    if (priv_bind_Unity_Tiny_TextHTML_1_cid == -1) {
        priv_bind_Unity_Tiny_TextHTML_1_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(4468721106077100996ull);
    }
    return priv_bind_Unity_Tiny_TextHTML_1_cid;
}


