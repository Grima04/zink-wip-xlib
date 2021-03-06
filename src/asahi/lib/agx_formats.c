/*
 * Copyright (C) 2021 Alyssa Rosenzweig
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "agx_pack.h"
#include "agx_formats.h"

#define T true
#define F false

#define AGX_FMT(pipe, channels, type, is_renderable) \
   [PIPE_FORMAT_ ## pipe] = { \
      .hw = (AGX_CHANNELS_ ## channels) | ((AGX_TEXTURE_TYPE_ ## type) << 7), \
      .renderable = is_renderable \
   }

const struct agx_pixel_format_entry agx_pixel_format[PIPE_FORMAT_COUNT] = {
   AGX_FMT(R8_UNORM,                R8,               UNORM,      T),
   AGX_FMT(R8G8_UNORM,              R8G8,             UNORM,      T),
   AGX_FMT(R8G8B8A8_UNORM,          R8G8B8A8,         UNORM,      T),
   AGX_FMT(A8R8G8B8_UNORM,          R8G8B8A8,         UNORM,      T),
   AGX_FMT(A8B8G8R8_UNORM,          R8G8B8A8,         UNORM,      T),
   AGX_FMT(B8G8R8A8_UNORM,          R8G8B8A8,         UNORM,      T),

   AGX_FMT(R16_UNORM,               R16,              UNORM,      T),
   AGX_FMT(R16G16_UNORM,            R16G16,           UNORM,      T),
   AGX_FMT(R16G16B16A16_UNORM,      R16G16B16A16,     UNORM,      T),

   AGX_FMT(R8_SRGB,                 R8,               UNORM,      T),
   AGX_FMT(R8G8_SRGB,               R8G8,             UNORM,      T),
   AGX_FMT(R8G8B8A8_SRGB,           R8G8B8A8,         UNORM,      T),
   AGX_FMT(A8R8G8B8_SRGB,           R8G8B8A8,         UNORM,      T),
   AGX_FMT(A8B8G8R8_SRGB,           R8G8B8A8,         UNORM,      T),
   AGX_FMT(B8G8R8A8_SRGB,           R8G8B8A8,         UNORM,      T),

   AGX_FMT(R8_SNORM,                R8,               SNORM,      F),
   AGX_FMT(R8G8_SNORM,              R8G8,             SNORM,      F),
   AGX_FMT(R8G8B8A8_SNORM,          R8G8B8A8,         SNORM,      F),
   AGX_FMT(A8R8G8B8_SNORM,          R8G8B8A8,         SNORM,      F),
   AGX_FMT(A8B8G8R8_SNORM,          R8G8B8A8,         SNORM,      F),
   AGX_FMT(B8G8R8A8_SNORM,          R8G8B8A8,         SNORM,      F),

   AGX_FMT(R16_FLOAT,               R16,              FLOAT,      T),
   AGX_FMT(R16G16_FLOAT,            R16G16,           FLOAT,      T),
   AGX_FMT(R16G16B16A16_FLOAT,      R16G16B16A16,     FLOAT,      T),

   AGX_FMT(R32_FLOAT,               R32,              FLOAT,      T),
   AGX_FMT(R32G32_FLOAT,            R32G32,           FLOAT,      T),
   AGX_FMT(R32G32B32A32_FLOAT,      R32G32B32A32,     FLOAT,      T),

   AGX_FMT(Z32_FLOAT,               R32,              FLOAT,      F),
   AGX_FMT(Z32_FLOAT_S8X24_UINT,    R32,              FLOAT,      F),

   AGX_FMT(R10G10B10A2_UNORM,       R10G10B10A2,      UNORM,      F),
   AGX_FMT(B10G10R10A2_UNORM,       R10G10B10A2,      UNORM,      F),
   AGX_FMT(R11G11B10_FLOAT,         R11G11B10,        FLOAT,      T),
   AGX_FMT(R9G9B9E5_FLOAT,          R9G9B9E5,         FLOAT,      F),

   AGX_FMT(ETC2_RGB8,               ETC2_RGB8,        UNORM,      F),
   AGX_FMT(ETC2_SRGB8,              ETC2_RGB8,        UNORM,      F),
   AGX_FMT(ETC2_RGB8A1,             ETC2_RGB8A1,      UNORM,      F),
   AGX_FMT(ETC2_SRGB8A1,            ETC2_RGB8A1,      UNORM,      F),
   AGX_FMT(ETC2_RGBA8,              ETC2_RGBA8,       UNORM,      F),
   AGX_FMT(ETC2_SRGBA8,             ETC2_RGBA8,       UNORM,      F),
   AGX_FMT(ETC2_R11_UNORM,          EAC_R11,          UNORM,      F),
   AGX_FMT(ETC2_R11_SNORM,          EAC_R11,          SNORM,      F),
   AGX_FMT(ETC2_RG11_UNORM,         EAC_RG11,         UNORM,      F),
   AGX_FMT(ETC2_RG11_SNORM,         EAC_RG11,         SNORM,      F),
};

const enum agx_format
agx_vertex_format[PIPE_FORMAT_COUNT] = {
   [PIPE_FORMAT_R32_FLOAT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32_SINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32_UINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32_FLOAT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32_SINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32_UINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32_FLOAT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32_UINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32_SINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32A32_FLOAT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32A32_UINT] = AGX_FORMAT_I32,
   [PIPE_FORMAT_R32G32B32A32_SINT] = AGX_FORMAT_I32,

   [PIPE_FORMAT_R8_UNORM] = AGX_FORMAT_U8NORM,
   [PIPE_FORMAT_R8G8_UNORM] = AGX_FORMAT_U8NORM,
   [PIPE_FORMAT_R8G8B8_UNORM] = AGX_FORMAT_U8NORM,
   [PIPE_FORMAT_R8G8B8A8_UNORM] = AGX_FORMAT_U8NORM,

   [PIPE_FORMAT_R8_SNORM] = AGX_FORMAT_S8NORM,
   [PIPE_FORMAT_R8G8_SNORM] = AGX_FORMAT_S8NORM,
   [PIPE_FORMAT_R8G8B8_SNORM] = AGX_FORMAT_S8NORM,
   [PIPE_FORMAT_R8G8B8A8_SNORM] = AGX_FORMAT_S8NORM,

   [PIPE_FORMAT_R16_UNORM] = AGX_FORMAT_U16NORM,
   [PIPE_FORMAT_R16G16_UNORM] = AGX_FORMAT_U16NORM,
   [PIPE_FORMAT_R16G16B16_UNORM] = AGX_FORMAT_U16NORM,
   [PIPE_FORMAT_R16G16B16A16_UNORM] = AGX_FORMAT_U16NORM,

   [PIPE_FORMAT_R16_SNORM] = AGX_FORMAT_S16NORM,
   [PIPE_FORMAT_R16G16_SNORM] = AGX_FORMAT_S16NORM,
   [PIPE_FORMAT_R16G16B16_SNORM] = AGX_FORMAT_S16NORM,
   [PIPE_FORMAT_R16G16B16A16_SNORM] = AGX_FORMAT_S16NORM,
};
