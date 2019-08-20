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
struct HTMLTintedSpriteDesc {
  int32_t imageIndex;
  Unity::Tiny::Core2D::Rect texRect;
  Unity::Tiny::Core2D::Color tintColor;
};
}}}
namespace Unity { namespace Tiny { namespace Rendering { 
struct Image2DRenderToTextureHTMLEntry {
  int32_t imageIndex;
  int32_t w;
  int32_t h;
};
}}}
namespace Unity { namespace Tiny { namespace Rendering { 
struct TextBitmapHTML : Unity::Entities::IBufferElementData {
  uint16_t c;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_1_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_1_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::TextBitmapHTML>() {
    return priv_bind_Unity_Tiny_RendererCanvas_1_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::TextBitmapHTML>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_1_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_1_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(5408123004397900439ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_1_cid;
}

namespace Unity { namespace Tiny { namespace Rendering { 
struct TintedGlyphIndex : Unity::Entities::ISystemStateComponentData {
  int32_t index;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_2_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_2_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::TintedGlyphIndex>() {
    return priv_bind_Unity_Tiny_RendererCanvas_2_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::TintedGlyphIndex>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_2_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_2_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(648917970477854097ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_2_cid;
}

namespace Unity { namespace Tiny { namespace Rendering { 
struct TintedGlyphHTML : Unity::Entities::IBufferElementData {
  uint32_t value;
  int32_t tintedIndex;
  Unity::Tiny::Rendering::HTMLTintedSpriteDesc desc;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_3_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_3_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::TintedGlyphHTML>() {
    return priv_bind_Unity_Tiny_RendererCanvas_3_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::TintedGlyphHTML>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_3_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_3_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(17086937518643867681ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_3_cid;
}

namespace Unity { namespace Tiny { namespace Rendering { 
struct TileHTML : Unity::Entities::ISystemStateComponentData {
  int32_t tintedIndex;
  Unity::Tiny::Rendering::HTMLTintedSpriteDesc desc;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_4_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_4_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::TileHTML>() {
    return priv_bind_Unity_Tiny_RendererCanvas_4_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::TileHTML>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_4_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_4_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(7856106120191126073ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_4_cid;
}

namespace Unity { namespace Tiny { namespace Rendering { 
struct Sprite2DRendererHTML : Unity::Entities::ISystemStateComponentData {
  int32_t tintedIndex;
  Unity::Tiny::Rendering::HTMLTintedSpriteDesc desc;
  bool haspattern;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_5_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_5_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::Sprite2DRendererHTML>() {
    return priv_bind_Unity_Tiny_RendererCanvas_5_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::Sprite2DRendererHTML>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_5_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_5_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(17864728509861486888ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_5_cid;
}

namespace Unity { namespace Tiny { namespace Rendering { 
struct Image2DRenderToTextureHTML : Unity::Entities::ISystemStateComponentData {
  Unity::Tiny::Rendering::Image2DRenderToTextureHTMLEntry rendering;
  Unity::Tiny::Rendering::Image2DRenderToTextureHTMLEntry displaying;
};
}}}

#if !defined(BUILD_UNITY_TINY_RENDERERCANVAS_DLL)
    extern DLLIMPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_6_cid;
#else
    extern DLLEXPORT ComponentTypeId priv_bind_Unity_Tiny_RendererCanvas_6_cid;
#endif

template<> inline ComponentTypeId ComponentId<::Unity::Tiny::Rendering::Image2DRenderToTextureHTML>() {
    return priv_bind_Unity_Tiny_RendererCanvas_6_cid;
}

template<> inline ComponentTypeId InitComponentId<::Unity::Tiny::Rendering::Image2DRenderToTextureHTML>()
{
    if (priv_bind_Unity_Tiny_RendererCanvas_6_cid == -1) {
        priv_bind_Unity_Tiny_RendererCanvas_6_cid = Unity::Entities::TypeManager::TypeIndexForStableTypeHash(11821363792700816677ull);
    }
    return priv_bind_Unity_Tiny_RendererCanvas_6_cid;
}


