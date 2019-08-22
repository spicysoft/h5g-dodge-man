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
#include "artifacts/bindgen/Unity.Tiny.Sprite2D-asmjs-debug/bind-Unity_Tiny_Sprite2D.h"
#include "artifacts/bindgen/Unity.Tiny.Image2DIOHTML-asmjs-debug/bind-Unity_Tiny_Image2DIOHTML.h"
#include "artifacts/bindgen/Unity.Tiny.HTML-asmjs-debug/bind-Unity_Tiny_HTML.h"
#include "artifacts/bindgen/Unity.Tiny.Text-asmjs-debug/bind-Unity_Tiny_Text.h"
#include "artifacts/bindgen/Unity.Tiny.TextHTML-asmjs-debug/bind-Unity_Tiny_TextHTML.h"
namespace Unity { namespace Tiny { namespace Rendering { 
struct Image2DGLES2 : Unity::Entities::ISystemStateComponentData {
  uint32_t glTexId;
  bool externalOwner;
  bool smoothingEnabled;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERGLES2_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererGLES2_1_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererGLES2_1_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::Image2DGLES2>() {
    return priv_bind_Unity_Tiny_RendererGLES2_1_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::Image2DGLES2>()
{
    if (priv_bind_Unity_Tiny_RendererGLES2_1_cid == -1) {
        priv_bind_Unity_Tiny_RendererGLES2_1_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(3063756540820139518ull);
    }
    return priv_bind_Unity_Tiny_RendererGLES2_1_cid;
}


