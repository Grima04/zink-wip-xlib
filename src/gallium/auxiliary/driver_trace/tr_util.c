
/*
 * Generated file, please do not edit
 */
#include "tr_util.h"


const char *
tr_util_pipe_texture_target_name(enum pipe_texture_target value)
{
   switch (value) {
      case PIPE_BUFFER: return "PIPE_BUFFER";
      case PIPE_TEXTURE_1D: return "PIPE_TEXTURE_1D";
      case PIPE_TEXTURE_2D: return "PIPE_TEXTURE_2D";
      case PIPE_TEXTURE_3D: return "PIPE_TEXTURE_3D";
      case PIPE_TEXTURE_CUBE: return "PIPE_TEXTURE_CUBE";
      case PIPE_TEXTURE_RECT: return "PIPE_TEXTURE_RECT";
      case PIPE_TEXTURE_1D_ARRAY: return "PIPE_TEXTURE_1D_ARRAY";
      case PIPE_TEXTURE_2D_ARRAY: return "PIPE_TEXTURE_2D_ARRAY";
      case PIPE_TEXTURE_CUBE_ARRAY: return "PIPE_TEXTURE_CUBE_ARRAY";
      case PIPE_MAX_TEXTURE_TYPES: return "PIPE_MAX_TEXTURE_TYPES";
      default: return "PIPE_TEXTURE_TARGET_UNKNOWN";
   }
}

const char *
tr_util_pipe_shader_type_name(enum pipe_shader_type value)
{
   switch (value) {
      case PIPE_SHADER_VERTEX: return "PIPE_SHADER_VERTEX";
      case PIPE_SHADER_FRAGMENT: return "PIPE_SHADER_FRAGMENT";
      case PIPE_SHADER_GEOMETRY: return "PIPE_SHADER_GEOMETRY";
      case PIPE_SHADER_TESS_CTRL: return "PIPE_SHADER_TESS_CTRL";
      case PIPE_SHADER_TESS_EVAL: return "PIPE_SHADER_TESS_EVAL";
      case PIPE_SHADER_COMPUTE: return "PIPE_SHADER_COMPUTE";
      case PIPE_SHADER_TYPES: return "PIPE_SHADER_TYPES";
      default: return "PIPE_SHADER_TYPE_UNKNOWN";
   }
}

const char *
tr_util_pipe_shader_cap_name(enum pipe_shader_cap value)
{
   switch (value) {
      case PIPE_SHADER_CAP_MAX_INSTRUCTIONS: return "PIPE_SHADER_CAP_MAX_INSTRUCTIONS";
      case PIPE_SHADER_CAP_MAX_ALU_INSTRUCTIONS: return "PIPE_SHADER_CAP_MAX_ALU_INSTRUCTIONS";
      case PIPE_SHADER_CAP_MAX_TEX_INSTRUCTIONS: return "PIPE_SHADER_CAP_MAX_TEX_INSTRUCTIONS";
      case PIPE_SHADER_CAP_MAX_TEX_INDIRECTIONS: return "PIPE_SHADER_CAP_MAX_TEX_INDIRECTIONS";
      case PIPE_SHADER_CAP_MAX_CONTROL_FLOW_DEPTH: return "PIPE_SHADER_CAP_MAX_CONTROL_FLOW_DEPTH";
      case PIPE_SHADER_CAP_MAX_INPUTS: return "PIPE_SHADER_CAP_MAX_INPUTS";
      case PIPE_SHADER_CAP_MAX_OUTPUTS: return "PIPE_SHADER_CAP_MAX_OUTPUTS";
      case PIPE_SHADER_CAP_MAX_CONST_BUFFER_SIZE: return "PIPE_SHADER_CAP_MAX_CONST_BUFFER_SIZE";
      case PIPE_SHADER_CAP_MAX_CONST_BUFFERS: return "PIPE_SHADER_CAP_MAX_CONST_BUFFERS";
      case PIPE_SHADER_CAP_MAX_TEMPS: return "PIPE_SHADER_CAP_MAX_TEMPS";
      case PIPE_SHADER_CAP_TGSI_CONT_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_CONT_SUPPORTED";
      case PIPE_SHADER_CAP_INDIRECT_INPUT_ADDR: return "PIPE_SHADER_CAP_INDIRECT_INPUT_ADDR";
      case PIPE_SHADER_CAP_INDIRECT_OUTPUT_ADDR: return "PIPE_SHADER_CAP_INDIRECT_OUTPUT_ADDR";
      case PIPE_SHADER_CAP_INDIRECT_TEMP_ADDR: return "PIPE_SHADER_CAP_INDIRECT_TEMP_ADDR";
      case PIPE_SHADER_CAP_INDIRECT_CONST_ADDR: return "PIPE_SHADER_CAP_INDIRECT_CONST_ADDR";
      case PIPE_SHADER_CAP_SUBROUTINES: return "PIPE_SHADER_CAP_SUBROUTINES";
      case PIPE_SHADER_CAP_INTEGERS: return "PIPE_SHADER_CAP_INTEGERS";
      case PIPE_SHADER_CAP_INT64_ATOMICS: return "PIPE_SHADER_CAP_INT64_ATOMICS";
      case PIPE_SHADER_CAP_FP16: return "PIPE_SHADER_CAP_FP16";
      case PIPE_SHADER_CAP_FP16_DERIVATIVES: return "PIPE_SHADER_CAP_FP16_DERIVATIVES";
      case PIPE_SHADER_CAP_FP16_CONST_BUFFERS: return "PIPE_SHADER_CAP_FP16_CONST_BUFFERS";
      case PIPE_SHADER_CAP_INT16: return "PIPE_SHADER_CAP_INT16";
      case PIPE_SHADER_CAP_GLSL_16BIT_CONSTS: return "PIPE_SHADER_CAP_GLSL_16BIT_CONSTS";
      case PIPE_SHADER_CAP_MAX_TEXTURE_SAMPLERS: return "PIPE_SHADER_CAP_MAX_TEXTURE_SAMPLERS";
      case PIPE_SHADER_CAP_PREFERRED_IR: return "PIPE_SHADER_CAP_PREFERRED_IR";
      case PIPE_SHADER_CAP_TGSI_SQRT_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_SQRT_SUPPORTED";
      case PIPE_SHADER_CAP_MAX_SAMPLER_VIEWS: return "PIPE_SHADER_CAP_MAX_SAMPLER_VIEWS";
      case PIPE_SHADER_CAP_TGSI_DROUND_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_DROUND_SUPPORTED";
      case PIPE_SHADER_CAP_TGSI_DFRACEXP_DLDEXP_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_DFRACEXP_DLDEXP_SUPPORTED";
      case PIPE_SHADER_CAP_TGSI_FMA_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_FMA_SUPPORTED";
      case PIPE_SHADER_CAP_TGSI_ANY_INOUT_DECL_RANGE: return "PIPE_SHADER_CAP_TGSI_ANY_INOUT_DECL_RANGE";
      case PIPE_SHADER_CAP_MAX_UNROLL_ITERATIONS_HINT: return "PIPE_SHADER_CAP_MAX_UNROLL_ITERATIONS_HINT";
      case PIPE_SHADER_CAP_MAX_SHADER_BUFFERS: return "PIPE_SHADER_CAP_MAX_SHADER_BUFFERS";
      case PIPE_SHADER_CAP_SUPPORTED_IRS: return "PIPE_SHADER_CAP_SUPPORTED_IRS";
      case PIPE_SHADER_CAP_MAX_SHADER_IMAGES: return "PIPE_SHADER_CAP_MAX_SHADER_IMAGES";
      case PIPE_SHADER_CAP_LOWER_IF_THRESHOLD: return "PIPE_SHADER_CAP_LOWER_IF_THRESHOLD";
      case PIPE_SHADER_CAP_TGSI_SKIP_MERGE_REGISTERS: return "PIPE_SHADER_CAP_TGSI_SKIP_MERGE_REGISTERS";
      case PIPE_SHADER_CAP_TGSI_LDEXP_SUPPORTED: return "PIPE_SHADER_CAP_TGSI_LDEXP_SUPPORTED";
      case PIPE_SHADER_CAP_MAX_HW_ATOMIC_COUNTERS: return "PIPE_SHADER_CAP_MAX_HW_ATOMIC_COUNTERS";
      case PIPE_SHADER_CAP_MAX_HW_ATOMIC_COUNTER_BUFFERS: return "PIPE_SHADER_CAP_MAX_HW_ATOMIC_COUNTER_BUFFERS";
      default: return "PIPE_SHADER_CAP_UNKNOWN";
   }
}

const char *
tr_util_pipe_shader_ir_name(enum pipe_shader_ir value)
{
   switch (value) {
      case PIPE_SHADER_IR_TGSI: return "PIPE_SHADER_IR_TGSI";
      case PIPE_SHADER_IR_NATIVE: return "PIPE_SHADER_IR_NATIVE";
      case PIPE_SHADER_IR_NIR: return "PIPE_SHADER_IR_NIR";
      case PIPE_SHADER_IR_NIR_SERIALIZED: return "PIPE_SHADER_IR_NIR_SERIALIZED";
      default: return "PIPE_SHADER_IR_UNKNOWN";
   }
}

const char *
tr_util_pipe_cap_name(enum pipe_cap value)
{
   switch (value) {
      case PIPE_CAP_GRAPHICS: return "PIPE_CAP_GRAPHICS";
      case PIPE_CAP_NPOT_TEXTURES: return "PIPE_CAP_NPOT_TEXTURES";
      case PIPE_CAP_MAX_DUAL_SOURCE_RENDER_TARGETS: return "PIPE_CAP_MAX_DUAL_SOURCE_RENDER_TARGETS";
      case PIPE_CAP_ANISOTROPIC_FILTER: return "PIPE_CAP_ANISOTROPIC_FILTER";
      case PIPE_CAP_POINT_SPRITE: return "PIPE_CAP_POINT_SPRITE";
      case PIPE_CAP_MAX_RENDER_TARGETS: return "PIPE_CAP_MAX_RENDER_TARGETS";
      case PIPE_CAP_OCCLUSION_QUERY: return "PIPE_CAP_OCCLUSION_QUERY";
      case PIPE_CAP_QUERY_TIME_ELAPSED: return "PIPE_CAP_QUERY_TIME_ELAPSED";
      case PIPE_CAP_TEXTURE_SHADOW_MAP: return "PIPE_CAP_TEXTURE_SHADOW_MAP";
      case PIPE_CAP_TEXTURE_SWIZZLE: return "PIPE_CAP_TEXTURE_SWIZZLE";
      case PIPE_CAP_MAX_TEXTURE_2D_SIZE: return "PIPE_CAP_MAX_TEXTURE_2D_SIZE";
      case PIPE_CAP_MAX_TEXTURE_3D_LEVELS: return "PIPE_CAP_MAX_TEXTURE_3D_LEVELS";
      case PIPE_CAP_MAX_TEXTURE_CUBE_LEVELS: return "PIPE_CAP_MAX_TEXTURE_CUBE_LEVELS";
      case PIPE_CAP_TEXTURE_MIRROR_CLAMP: return "PIPE_CAP_TEXTURE_MIRROR_CLAMP";
      case PIPE_CAP_BLEND_EQUATION_SEPARATE: return "PIPE_CAP_BLEND_EQUATION_SEPARATE";
      case PIPE_CAP_MAX_STREAM_OUTPUT_BUFFERS: return "PIPE_CAP_MAX_STREAM_OUTPUT_BUFFERS";
      case PIPE_CAP_PRIMITIVE_RESTART: return "PIPE_CAP_PRIMITIVE_RESTART";
      case PIPE_CAP_PRIMITIVE_RESTART_FIXED_INDEX: return "PIPE_CAP_PRIMITIVE_RESTART_FIXED_INDEX";
      case PIPE_CAP_INDEP_BLEND_ENABLE: return "PIPE_CAP_INDEP_BLEND_ENABLE";
      case PIPE_CAP_INDEP_BLEND_FUNC: return "PIPE_CAP_INDEP_BLEND_FUNC";
      case PIPE_CAP_MAX_TEXTURE_ARRAY_LAYERS: return "PIPE_CAP_MAX_TEXTURE_ARRAY_LAYERS";
      case PIPE_CAP_TGSI_FS_COORD_ORIGIN_UPPER_LEFT: return "PIPE_CAP_TGSI_FS_COORD_ORIGIN_UPPER_LEFT";
      case PIPE_CAP_TGSI_FS_COORD_ORIGIN_LOWER_LEFT: return "PIPE_CAP_TGSI_FS_COORD_ORIGIN_LOWER_LEFT";
      case PIPE_CAP_TGSI_FS_COORD_PIXEL_CENTER_HALF_INTEGER: return "PIPE_CAP_TGSI_FS_COORD_PIXEL_CENTER_HALF_INTEGER";
      case PIPE_CAP_TGSI_FS_COORD_PIXEL_CENTER_INTEGER: return "PIPE_CAP_TGSI_FS_COORD_PIXEL_CENTER_INTEGER";
      case PIPE_CAP_DEPTH_CLIP_DISABLE: return "PIPE_CAP_DEPTH_CLIP_DISABLE";
      case PIPE_CAP_DEPTH_CLIP_DISABLE_SEPARATE: return "PIPE_CAP_DEPTH_CLIP_DISABLE_SEPARATE";
      case PIPE_CAP_SHADER_STENCIL_EXPORT: return "PIPE_CAP_SHADER_STENCIL_EXPORT";
      case PIPE_CAP_TGSI_INSTANCEID: return "PIPE_CAP_TGSI_INSTANCEID";
      case PIPE_CAP_VERTEX_ELEMENT_INSTANCE_DIVISOR: return "PIPE_CAP_VERTEX_ELEMENT_INSTANCE_DIVISOR";
      case PIPE_CAP_FRAGMENT_COLOR_CLAMPED: return "PIPE_CAP_FRAGMENT_COLOR_CLAMPED";
      case PIPE_CAP_MIXED_COLORBUFFER_FORMATS: return "PIPE_CAP_MIXED_COLORBUFFER_FORMATS";
      case PIPE_CAP_SEAMLESS_CUBE_MAP: return "PIPE_CAP_SEAMLESS_CUBE_MAP";
      case PIPE_CAP_SEAMLESS_CUBE_MAP_PER_TEXTURE: return "PIPE_CAP_SEAMLESS_CUBE_MAP_PER_TEXTURE";
      case PIPE_CAP_MIN_TEXEL_OFFSET: return "PIPE_CAP_MIN_TEXEL_OFFSET";
      case PIPE_CAP_MAX_TEXEL_OFFSET: return "PIPE_CAP_MAX_TEXEL_OFFSET";
      case PIPE_CAP_CONDITIONAL_RENDER: return "PIPE_CAP_CONDITIONAL_RENDER";
      case PIPE_CAP_TEXTURE_BARRIER: return "PIPE_CAP_TEXTURE_BARRIER";
      case PIPE_CAP_MAX_STREAM_OUTPUT_SEPARATE_COMPONENTS: return "PIPE_CAP_MAX_STREAM_OUTPUT_SEPARATE_COMPONENTS";
      case PIPE_CAP_MAX_STREAM_OUTPUT_INTERLEAVED_COMPONENTS: return "PIPE_CAP_MAX_STREAM_OUTPUT_INTERLEAVED_COMPONENTS";
      case PIPE_CAP_STREAM_OUTPUT_PAUSE_RESUME: return "PIPE_CAP_STREAM_OUTPUT_PAUSE_RESUME";
      case PIPE_CAP_TGSI_CAN_COMPACT_CONSTANTS: return "PIPE_CAP_TGSI_CAN_COMPACT_CONSTANTS";
      case PIPE_CAP_VERTEX_COLOR_UNCLAMPED: return "PIPE_CAP_VERTEX_COLOR_UNCLAMPED";
      case PIPE_CAP_VERTEX_COLOR_CLAMPED: return "PIPE_CAP_VERTEX_COLOR_CLAMPED";
      case PIPE_CAP_GLSL_FEATURE_LEVEL: return "PIPE_CAP_GLSL_FEATURE_LEVEL";
      case PIPE_CAP_GLSL_FEATURE_LEVEL_COMPATIBILITY: return "PIPE_CAP_GLSL_FEATURE_LEVEL_COMPATIBILITY";
      case PIPE_CAP_ESSL_FEATURE_LEVEL: return "PIPE_CAP_ESSL_FEATURE_LEVEL";
      case PIPE_CAP_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION: return "PIPE_CAP_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION";
      case PIPE_CAP_USER_VERTEX_BUFFERS: return "PIPE_CAP_USER_VERTEX_BUFFERS";
      case PIPE_CAP_VERTEX_BUFFER_OFFSET_4BYTE_ALIGNED_ONLY: return "PIPE_CAP_VERTEX_BUFFER_OFFSET_4BYTE_ALIGNED_ONLY";
      case PIPE_CAP_VERTEX_BUFFER_STRIDE_4BYTE_ALIGNED_ONLY: return "PIPE_CAP_VERTEX_BUFFER_STRIDE_4BYTE_ALIGNED_ONLY";
      case PIPE_CAP_VERTEX_ELEMENT_SRC_OFFSET_4BYTE_ALIGNED_ONLY: return "PIPE_CAP_VERTEX_ELEMENT_SRC_OFFSET_4BYTE_ALIGNED_ONLY";
      case PIPE_CAP_COMPUTE: return "PIPE_CAP_COMPUTE";
      case PIPE_CAP_CONSTANT_BUFFER_OFFSET_ALIGNMENT: return "PIPE_CAP_CONSTANT_BUFFER_OFFSET_ALIGNMENT";
      case PIPE_CAP_START_INSTANCE: return "PIPE_CAP_START_INSTANCE";
      case PIPE_CAP_QUERY_TIMESTAMP: return "PIPE_CAP_QUERY_TIMESTAMP";
      case PIPE_CAP_TEXTURE_MULTISAMPLE: return "PIPE_CAP_TEXTURE_MULTISAMPLE";
      case PIPE_CAP_MIN_MAP_BUFFER_ALIGNMENT: return "PIPE_CAP_MIN_MAP_BUFFER_ALIGNMENT";
      case PIPE_CAP_CUBE_MAP_ARRAY: return "PIPE_CAP_CUBE_MAP_ARRAY";
      case PIPE_CAP_TEXTURE_BUFFER_OBJECTS: return "PIPE_CAP_TEXTURE_BUFFER_OBJECTS";
      case PIPE_CAP_TEXTURE_BUFFER_OFFSET_ALIGNMENT: return "PIPE_CAP_TEXTURE_BUFFER_OFFSET_ALIGNMENT";
      case PIPE_CAP_BUFFER_SAMPLER_VIEW_RGBA_ONLY: return "PIPE_CAP_BUFFER_SAMPLER_VIEW_RGBA_ONLY";
      case PIPE_CAP_TGSI_TEXCOORD: return "PIPE_CAP_TGSI_TEXCOORD";
      case PIPE_CAP_TEXTURE_BUFFER_SAMPLER: return "PIPE_CAP_TEXTURE_BUFFER_SAMPLER";
      case PIPE_CAP_PREFER_BLIT_BASED_TEXTURE_TRANSFER: return "PIPE_CAP_PREFER_BLIT_BASED_TEXTURE_TRANSFER";
      case PIPE_CAP_QUERY_PIPELINE_STATISTICS: return "PIPE_CAP_QUERY_PIPELINE_STATISTICS";
      case PIPE_CAP_TEXTURE_BORDER_COLOR_QUIRK: return "PIPE_CAP_TEXTURE_BORDER_COLOR_QUIRK";
      case PIPE_CAP_MAX_TEXTURE_BUFFER_SIZE: return "PIPE_CAP_MAX_TEXTURE_BUFFER_SIZE";
      case PIPE_CAP_MAX_VIEWPORTS: return "PIPE_CAP_MAX_VIEWPORTS";
      case PIPE_CAP_ENDIANNESS: return "PIPE_CAP_ENDIANNESS";
      case PIPE_CAP_MIXED_FRAMEBUFFER_SIZES: return "PIPE_CAP_MIXED_FRAMEBUFFER_SIZES";
      case PIPE_CAP_TGSI_VS_LAYER_VIEWPORT: return "PIPE_CAP_TGSI_VS_LAYER_VIEWPORT";
      case PIPE_CAP_MAX_GEOMETRY_OUTPUT_VERTICES: return "PIPE_CAP_MAX_GEOMETRY_OUTPUT_VERTICES";
      case PIPE_CAP_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS: return "PIPE_CAP_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS";
      case PIPE_CAP_MAX_TEXTURE_GATHER_COMPONENTS: return "PIPE_CAP_MAX_TEXTURE_GATHER_COMPONENTS";
      case PIPE_CAP_TEXTURE_GATHER_SM5: return "PIPE_CAP_TEXTURE_GATHER_SM5";
      case PIPE_CAP_BUFFER_MAP_PERSISTENT_COHERENT: return "PIPE_CAP_BUFFER_MAP_PERSISTENT_COHERENT";
      case PIPE_CAP_FAKE_SW_MSAA: return "PIPE_CAP_FAKE_SW_MSAA";
      case PIPE_CAP_TEXTURE_QUERY_LOD: return "PIPE_CAP_TEXTURE_QUERY_LOD";
      case PIPE_CAP_MIN_TEXTURE_GATHER_OFFSET: return "PIPE_CAP_MIN_TEXTURE_GATHER_OFFSET";
      case PIPE_CAP_MAX_TEXTURE_GATHER_OFFSET: return "PIPE_CAP_MAX_TEXTURE_GATHER_OFFSET";
      case PIPE_CAP_SAMPLE_SHADING: return "PIPE_CAP_SAMPLE_SHADING";
      case PIPE_CAP_TEXTURE_GATHER_OFFSETS: return "PIPE_CAP_TEXTURE_GATHER_OFFSETS";
      case PIPE_CAP_TGSI_VS_WINDOW_SPACE_POSITION: return "PIPE_CAP_TGSI_VS_WINDOW_SPACE_POSITION";
      case PIPE_CAP_MAX_VERTEX_STREAMS: return "PIPE_CAP_MAX_VERTEX_STREAMS";
      case PIPE_CAP_DRAW_INDIRECT: return "PIPE_CAP_DRAW_INDIRECT";
      case PIPE_CAP_TGSI_FS_FINE_DERIVATIVE: return "PIPE_CAP_TGSI_FS_FINE_DERIVATIVE";
      case PIPE_CAP_VENDOR_ID: return "PIPE_CAP_VENDOR_ID";
      case PIPE_CAP_DEVICE_ID: return "PIPE_CAP_DEVICE_ID";
      case PIPE_CAP_ACCELERATED: return "PIPE_CAP_ACCELERATED";
      case PIPE_CAP_VIDEO_MEMORY: return "PIPE_CAP_VIDEO_MEMORY";
      case PIPE_CAP_UMA: return "PIPE_CAP_UMA";
      case PIPE_CAP_CONDITIONAL_RENDER_INVERTED: return "PIPE_CAP_CONDITIONAL_RENDER_INVERTED";
      case PIPE_CAP_MAX_VERTEX_ATTRIB_STRIDE: return "PIPE_CAP_MAX_VERTEX_ATTRIB_STRIDE";
      case PIPE_CAP_SAMPLER_VIEW_TARGET: return "PIPE_CAP_SAMPLER_VIEW_TARGET";
      case PIPE_CAP_CLIP_HALFZ: return "PIPE_CAP_CLIP_HALFZ";
      case PIPE_CAP_VERTEXID_NOBASE: return "PIPE_CAP_VERTEXID_NOBASE";
      case PIPE_CAP_POLYGON_OFFSET_CLAMP: return "PIPE_CAP_POLYGON_OFFSET_CLAMP";
      case PIPE_CAP_MULTISAMPLE_Z_RESOLVE: return "PIPE_CAP_MULTISAMPLE_Z_RESOLVE";
      case PIPE_CAP_RESOURCE_FROM_USER_MEMORY: return "PIPE_CAP_RESOURCE_FROM_USER_MEMORY";
      case PIPE_CAP_RESOURCE_FROM_USER_MEMORY_COMPUTE_ONLY: return "PIPE_CAP_RESOURCE_FROM_USER_MEMORY_COMPUTE_ONLY";
      case PIPE_CAP_DEVICE_RESET_STATUS_QUERY: return "PIPE_CAP_DEVICE_RESET_STATUS_QUERY";
      case PIPE_CAP_MAX_SHADER_PATCH_VARYINGS: return "PIPE_CAP_MAX_SHADER_PATCH_VARYINGS";
      case PIPE_CAP_TEXTURE_FLOAT_LINEAR: return "PIPE_CAP_TEXTURE_FLOAT_LINEAR";
      case PIPE_CAP_TEXTURE_HALF_FLOAT_LINEAR: return "PIPE_CAP_TEXTURE_HALF_FLOAT_LINEAR";
      case PIPE_CAP_DEPTH_BOUNDS_TEST: return "PIPE_CAP_DEPTH_BOUNDS_TEST";
      case PIPE_CAP_TGSI_TXQS: return "PIPE_CAP_TGSI_TXQS";
      case PIPE_CAP_FORCE_PERSAMPLE_INTERP: return "PIPE_CAP_FORCE_PERSAMPLE_INTERP";
      case PIPE_CAP_SHAREABLE_SHADERS: return "PIPE_CAP_SHAREABLE_SHADERS";
      case PIPE_CAP_COPY_BETWEEN_COMPRESSED_AND_PLAIN_FORMATS: return "PIPE_CAP_COPY_BETWEEN_COMPRESSED_AND_PLAIN_FORMATS";
      case PIPE_CAP_CLEAR_TEXTURE: return "PIPE_CAP_CLEAR_TEXTURE";
      case PIPE_CAP_CLEAR_SCISSORED: return "PIPE_CAP_CLEAR_SCISSORED";
      case PIPE_CAP_DRAW_PARAMETERS: return "PIPE_CAP_DRAW_PARAMETERS";
      case PIPE_CAP_TGSI_PACK_HALF_FLOAT: return "PIPE_CAP_TGSI_PACK_HALF_FLOAT";
      case PIPE_CAP_MULTI_DRAW_INDIRECT: return "PIPE_CAP_MULTI_DRAW_INDIRECT";
      case PIPE_CAP_MULTI_DRAW_INDIRECT_PARAMS: return "PIPE_CAP_MULTI_DRAW_INDIRECT_PARAMS";
      case PIPE_CAP_TGSI_FS_POSITION_IS_SYSVAL: return "PIPE_CAP_TGSI_FS_POSITION_IS_SYSVAL";
      case PIPE_CAP_TGSI_FS_POINT_IS_SYSVAL: return "PIPE_CAP_TGSI_FS_POINT_IS_SYSVAL";
      case PIPE_CAP_TGSI_FS_FACE_IS_INTEGER_SYSVAL: return "PIPE_CAP_TGSI_FS_FACE_IS_INTEGER_SYSVAL";
      case PIPE_CAP_SHADER_BUFFER_OFFSET_ALIGNMENT: return "PIPE_CAP_SHADER_BUFFER_OFFSET_ALIGNMENT";
      case PIPE_CAP_INVALIDATE_BUFFER: return "PIPE_CAP_INVALIDATE_BUFFER";
      case PIPE_CAP_GENERATE_MIPMAP: return "PIPE_CAP_GENERATE_MIPMAP";
      case PIPE_CAP_STRING_MARKER: return "PIPE_CAP_STRING_MARKER";
      case PIPE_CAP_SURFACE_REINTERPRET_BLOCKS: return "PIPE_CAP_SURFACE_REINTERPRET_BLOCKS";
      case PIPE_CAP_QUERY_BUFFER_OBJECT: return "PIPE_CAP_QUERY_BUFFER_OBJECT";
      case PIPE_CAP_QUERY_MEMORY_INFO: return "PIPE_CAP_QUERY_MEMORY_INFO";
      case PIPE_CAP_PCI_GROUP: return "PIPE_CAP_PCI_GROUP";
      case PIPE_CAP_PCI_BUS: return "PIPE_CAP_PCI_BUS";
      case PIPE_CAP_PCI_DEVICE: return "PIPE_CAP_PCI_DEVICE";
      case PIPE_CAP_PCI_FUNCTION: return "PIPE_CAP_PCI_FUNCTION";
      case PIPE_CAP_FRAMEBUFFER_NO_ATTACHMENT: return "PIPE_CAP_FRAMEBUFFER_NO_ATTACHMENT";
      case PIPE_CAP_ROBUST_BUFFER_ACCESS_BEHAVIOR: return "PIPE_CAP_ROBUST_BUFFER_ACCESS_BEHAVIOR";
      case PIPE_CAP_CULL_DISTANCE: return "PIPE_CAP_CULL_DISTANCE";
      case PIPE_CAP_PRIMITIVE_RESTART_FOR_PATCHES: return "PIPE_CAP_PRIMITIVE_RESTART_FOR_PATCHES";
      case PIPE_CAP_TGSI_VOTE: return "PIPE_CAP_TGSI_VOTE";
      case PIPE_CAP_MAX_WINDOW_RECTANGLES: return "PIPE_CAP_MAX_WINDOW_RECTANGLES";
      case PIPE_CAP_POLYGON_OFFSET_UNITS_UNSCALED: return "PIPE_CAP_POLYGON_OFFSET_UNITS_UNSCALED";
      case PIPE_CAP_VIEWPORT_SUBPIXEL_BITS: return "PIPE_CAP_VIEWPORT_SUBPIXEL_BITS";
      case PIPE_CAP_RASTERIZER_SUBPIXEL_BITS: return "PIPE_CAP_RASTERIZER_SUBPIXEL_BITS";
      case PIPE_CAP_MIXED_COLOR_DEPTH_BITS: return "PIPE_CAP_MIXED_COLOR_DEPTH_BITS";
      case PIPE_CAP_TGSI_ARRAY_COMPONENTS: return "PIPE_CAP_TGSI_ARRAY_COMPONENTS";
      case PIPE_CAP_STREAM_OUTPUT_INTERLEAVE_BUFFERS: return "PIPE_CAP_STREAM_OUTPUT_INTERLEAVE_BUFFERS";
      case PIPE_CAP_TGSI_CAN_READ_OUTPUTS: return "PIPE_CAP_TGSI_CAN_READ_OUTPUTS";
      case PIPE_CAP_NATIVE_FENCE_FD: return "PIPE_CAP_NATIVE_FENCE_FD";
      case PIPE_CAP_GLSL_OPTIMIZE_CONSERVATIVELY: return "PIPE_CAP_GLSL_OPTIMIZE_CONSERVATIVELY";
      case PIPE_CAP_GLSL_TESS_LEVELS_AS_INPUTS: return "PIPE_CAP_GLSL_TESS_LEVELS_AS_INPUTS";
      case PIPE_CAP_FBFETCH: return "PIPE_CAP_FBFETCH";
      case PIPE_CAP_TGSI_MUL_ZERO_WINS: return "PIPE_CAP_TGSI_MUL_ZERO_WINS";
      case PIPE_CAP_DOUBLES: return "PIPE_CAP_DOUBLES";
      case PIPE_CAP_INT64: return "PIPE_CAP_INT64";
      case PIPE_CAP_INT64_DIVMOD: return "PIPE_CAP_INT64_DIVMOD";
      case PIPE_CAP_TGSI_TEX_TXF_LZ: return "PIPE_CAP_TGSI_TEX_TXF_LZ";
      case PIPE_CAP_TGSI_CLOCK: return "PIPE_CAP_TGSI_CLOCK";
      case PIPE_CAP_POLYGON_MODE_FILL_RECTANGLE: return "PIPE_CAP_POLYGON_MODE_FILL_RECTANGLE";
      case PIPE_CAP_SPARSE_BUFFER_PAGE_SIZE: return "PIPE_CAP_SPARSE_BUFFER_PAGE_SIZE";
      case PIPE_CAP_TGSI_BALLOT: return "PIPE_CAP_TGSI_BALLOT";
      case PIPE_CAP_TGSI_TES_LAYER_VIEWPORT: return "PIPE_CAP_TGSI_TES_LAYER_VIEWPORT";
      case PIPE_CAP_CAN_BIND_CONST_BUFFER_AS_VERTEX: return "PIPE_CAP_CAN_BIND_CONST_BUFFER_AS_VERTEX";
      case PIPE_CAP_ALLOW_MAPPED_BUFFERS_DURING_EXECUTION: return "PIPE_CAP_ALLOW_MAPPED_BUFFERS_DURING_EXECUTION";
      case PIPE_CAP_POST_DEPTH_COVERAGE: return "PIPE_CAP_POST_DEPTH_COVERAGE";
      case PIPE_CAP_BINDLESS_TEXTURE: return "PIPE_CAP_BINDLESS_TEXTURE";
      case PIPE_CAP_NIR_SAMPLERS_AS_DEREF: return "PIPE_CAP_NIR_SAMPLERS_AS_DEREF";
      case PIPE_CAP_QUERY_SO_OVERFLOW: return "PIPE_CAP_QUERY_SO_OVERFLOW";
      case PIPE_CAP_MEMOBJ: return "PIPE_CAP_MEMOBJ";
      case PIPE_CAP_LOAD_CONSTBUF: return "PIPE_CAP_LOAD_CONSTBUF";
      case PIPE_CAP_TGSI_ANY_REG_AS_ADDRESS: return "PIPE_CAP_TGSI_ANY_REG_AS_ADDRESS";
      case PIPE_CAP_TILE_RASTER_ORDER: return "PIPE_CAP_TILE_RASTER_ORDER";
      case PIPE_CAP_MAX_COMBINED_SHADER_OUTPUT_RESOURCES: return "PIPE_CAP_MAX_COMBINED_SHADER_OUTPUT_RESOURCES";
      case PIPE_CAP_FRAMEBUFFER_MSAA_CONSTRAINTS: return "PIPE_CAP_FRAMEBUFFER_MSAA_CONSTRAINTS";
      case PIPE_CAP_SIGNED_VERTEX_BUFFER_OFFSET: return "PIPE_CAP_SIGNED_VERTEX_BUFFER_OFFSET";
      case PIPE_CAP_CONTEXT_PRIORITY_MASK: return "PIPE_CAP_CONTEXT_PRIORITY_MASK";
      case PIPE_CAP_FENCE_SIGNAL: return "PIPE_CAP_FENCE_SIGNAL";
      case PIPE_CAP_CONSTBUF0_FLAGS: return "PIPE_CAP_CONSTBUF0_FLAGS";
      case PIPE_CAP_PACKED_UNIFORMS: return "PIPE_CAP_PACKED_UNIFORMS";
      case PIPE_CAP_CONSERVATIVE_RASTER_POST_SNAP_TRIANGLES: return "PIPE_CAP_CONSERVATIVE_RASTER_POST_SNAP_TRIANGLES";
      case PIPE_CAP_CONSERVATIVE_RASTER_POST_SNAP_POINTS_LINES: return "PIPE_CAP_CONSERVATIVE_RASTER_POST_SNAP_POINTS_LINES";
      case PIPE_CAP_CONSERVATIVE_RASTER_PRE_SNAP_TRIANGLES: return "PIPE_CAP_CONSERVATIVE_RASTER_PRE_SNAP_TRIANGLES";
      case PIPE_CAP_CONSERVATIVE_RASTER_PRE_SNAP_POINTS_LINES: return "PIPE_CAP_CONSERVATIVE_RASTER_PRE_SNAP_POINTS_LINES";
      case PIPE_CAP_MAX_CONSERVATIVE_RASTER_SUBPIXEL_PRECISION_BIAS: return "PIPE_CAP_MAX_CONSERVATIVE_RASTER_SUBPIXEL_PRECISION_BIAS";
      case PIPE_CAP_CONSERVATIVE_RASTER_POST_DEPTH_COVERAGE: return "PIPE_CAP_CONSERVATIVE_RASTER_POST_DEPTH_COVERAGE";
      case PIPE_CAP_CONSERVATIVE_RASTER_INNER_COVERAGE: return "PIPE_CAP_CONSERVATIVE_RASTER_INNER_COVERAGE";
      case PIPE_CAP_PROGRAMMABLE_SAMPLE_LOCATIONS: return "PIPE_CAP_PROGRAMMABLE_SAMPLE_LOCATIONS";
      case PIPE_CAP_MAX_GS_INVOCATIONS: return "PIPE_CAP_MAX_GS_INVOCATIONS";
      case PIPE_CAP_MAX_SHADER_BUFFER_SIZE: return "PIPE_CAP_MAX_SHADER_BUFFER_SIZE";
      case PIPE_CAP_TEXTURE_MIRROR_CLAMP_TO_EDGE: return "PIPE_CAP_TEXTURE_MIRROR_CLAMP_TO_EDGE";
      case PIPE_CAP_MAX_COMBINED_SHADER_BUFFERS: return "PIPE_CAP_MAX_COMBINED_SHADER_BUFFERS";
      case PIPE_CAP_MAX_COMBINED_HW_ATOMIC_COUNTERS: return "PIPE_CAP_MAX_COMBINED_HW_ATOMIC_COUNTERS";
      case PIPE_CAP_MAX_COMBINED_HW_ATOMIC_COUNTER_BUFFERS: return "PIPE_CAP_MAX_COMBINED_HW_ATOMIC_COUNTER_BUFFERS";
      case PIPE_CAP_MAX_TEXTURE_UPLOAD_MEMORY_BUDGET: return "PIPE_CAP_MAX_TEXTURE_UPLOAD_MEMORY_BUDGET";
      case PIPE_CAP_MAX_VERTEX_ELEMENT_SRC_OFFSET: return "PIPE_CAP_MAX_VERTEX_ELEMENT_SRC_OFFSET";
      case PIPE_CAP_SURFACE_SAMPLE_COUNT: return "PIPE_CAP_SURFACE_SAMPLE_COUNT";
      case PIPE_CAP_TGSI_ATOMFADD: return "PIPE_CAP_TGSI_ATOMFADD";
      case PIPE_CAP_QUERY_PIPELINE_STATISTICS_SINGLE: return "PIPE_CAP_QUERY_PIPELINE_STATISTICS_SINGLE";
      case PIPE_CAP_RGB_OVERRIDE_DST_ALPHA_BLEND: return "PIPE_CAP_RGB_OVERRIDE_DST_ALPHA_BLEND";
      case PIPE_CAP_DEST_SURFACE_SRGB_CONTROL: return "PIPE_CAP_DEST_SURFACE_SRGB_CONTROL";
      case PIPE_CAP_NIR_COMPACT_ARRAYS: return "PIPE_CAP_NIR_COMPACT_ARRAYS";
      case PIPE_CAP_MAX_VARYINGS: return "PIPE_CAP_MAX_VARYINGS";
      case PIPE_CAP_COMPUTE_GRID_INFO_LAST_BLOCK: return "PIPE_CAP_COMPUTE_GRID_INFO_LAST_BLOCK";
      case PIPE_CAP_COMPUTE_SHADER_DERIVATIVES: return "PIPE_CAP_COMPUTE_SHADER_DERIVATIVES";
      case PIPE_CAP_TGSI_SKIP_SHRINK_IO_ARRAYS: return "PIPE_CAP_TGSI_SKIP_SHRINK_IO_ARRAYS";
      case PIPE_CAP_IMAGE_LOAD_FORMATTED: return "PIPE_CAP_IMAGE_LOAD_FORMATTED";
      case PIPE_CAP_THROTTLE: return "PIPE_CAP_THROTTLE";
      case PIPE_CAP_DMABUF: return "PIPE_CAP_DMABUF";
      case PIPE_CAP_PREFER_COMPUTE_FOR_MULTIMEDIA: return "PIPE_CAP_PREFER_COMPUTE_FOR_MULTIMEDIA";
      case PIPE_CAP_FRAGMENT_SHADER_INTERLOCK: return "PIPE_CAP_FRAGMENT_SHADER_INTERLOCK";
      case PIPE_CAP_FBFETCH_COHERENT: return "PIPE_CAP_FBFETCH_COHERENT";
      case PIPE_CAP_CS_DERIVED_SYSTEM_VALUES_SUPPORTED: return "PIPE_CAP_CS_DERIVED_SYSTEM_VALUES_SUPPORTED";
      case PIPE_CAP_ATOMIC_FLOAT_MINMAX: return "PIPE_CAP_ATOMIC_FLOAT_MINMAX";
      case PIPE_CAP_TGSI_DIV: return "PIPE_CAP_TGSI_DIV";
      case PIPE_CAP_FRAGMENT_SHADER_TEXTURE_LOD: return "PIPE_CAP_FRAGMENT_SHADER_TEXTURE_LOD";
      case PIPE_CAP_FRAGMENT_SHADER_DERIVATIVES: return "PIPE_CAP_FRAGMENT_SHADER_DERIVATIVES";
      case PIPE_CAP_VERTEX_SHADER_SATURATE: return "PIPE_CAP_VERTEX_SHADER_SATURATE";
      case PIPE_CAP_TEXTURE_SHADOW_LOD: return "PIPE_CAP_TEXTURE_SHADOW_LOD";
      case PIPE_CAP_SHADER_SAMPLES_IDENTICAL: return "PIPE_CAP_SHADER_SAMPLES_IDENTICAL";
      case PIPE_CAP_TGSI_ATOMINC_WRAP: return "PIPE_CAP_TGSI_ATOMINC_WRAP";
      case PIPE_CAP_PREFER_IMM_ARRAYS_AS_CONSTBUF: return "PIPE_CAP_PREFER_IMM_ARRAYS_AS_CONSTBUF";
      case PIPE_CAP_GL_SPIRV: return "PIPE_CAP_GL_SPIRV";
      case PIPE_CAP_GL_SPIRV_VARIABLE_POINTERS: return "PIPE_CAP_GL_SPIRV_VARIABLE_POINTERS";
      case PIPE_CAP_DEMOTE_TO_HELPER_INVOCATION: return "PIPE_CAP_DEMOTE_TO_HELPER_INVOCATION";
      case PIPE_CAP_TGSI_TG4_COMPONENT_IN_SWIZZLE: return "PIPE_CAP_TGSI_TG4_COMPONENT_IN_SWIZZLE";
      case PIPE_CAP_FLATSHADE: return "PIPE_CAP_FLATSHADE";
      case PIPE_CAP_ALPHA_TEST: return "PIPE_CAP_ALPHA_TEST";
      case PIPE_CAP_POINT_SIZE_FIXED: return "PIPE_CAP_POINT_SIZE_FIXED";
      case PIPE_CAP_TWO_SIDED_COLOR: return "PIPE_CAP_TWO_SIDED_COLOR";
      case PIPE_CAP_CLIP_PLANES: return "PIPE_CAP_CLIP_PLANES";
      case PIPE_CAP_MAX_VERTEX_BUFFERS: return "PIPE_CAP_MAX_VERTEX_BUFFERS";
      case PIPE_CAP_OPENCL_INTEGER_FUNCTIONS: return "PIPE_CAP_OPENCL_INTEGER_FUNCTIONS";
      case PIPE_CAP_INTEGER_MULTIPLY_32X16: return "PIPE_CAP_INTEGER_MULTIPLY_32X16";
      case PIPE_CAP_FRONTEND_NOOP: return "PIPE_CAP_FRONTEND_NOOP";
      case PIPE_CAP_NIR_IMAGES_AS_DEREF: return "PIPE_CAP_NIR_IMAGES_AS_DEREF";
      case PIPE_CAP_PACKED_STREAM_OUTPUT: return "PIPE_CAP_PACKED_STREAM_OUTPUT";
      case PIPE_CAP_VIEWPORT_TRANSFORM_LOWERED: return "PIPE_CAP_VIEWPORT_TRANSFORM_LOWERED";
      case PIPE_CAP_PSIZ_CLAMPED: return "PIPE_CAP_PSIZ_CLAMPED";
      case PIPE_CAP_GL_BEGIN_END_BUFFER_SIZE: return "PIPE_CAP_GL_BEGIN_END_BUFFER_SIZE";
      case PIPE_CAP_VIEWPORT_SWIZZLE: return "PIPE_CAP_VIEWPORT_SWIZZLE";
      case PIPE_CAP_SYSTEM_SVM: return "PIPE_CAP_SYSTEM_SVM";
      case PIPE_CAP_VIEWPORT_MASK: return "PIPE_CAP_VIEWPORT_MASK";
      case PIPE_CAP_ALPHA_TO_COVERAGE_DITHER_CONTROL: return "PIPE_CAP_ALPHA_TO_COVERAGE_DITHER_CONTROL";
      case PIPE_CAP_MAP_UNSYNCHRONIZED_THREAD_SAFE: return "PIPE_CAP_MAP_UNSYNCHRONIZED_THREAD_SAFE";
      case PIPE_CAP_GLSL_ZERO_INIT: return "PIPE_CAP_GLSL_ZERO_INIT";
      case PIPE_CAP_BLEND_EQUATION_ADVANCED: return "PIPE_CAP_BLEND_EQUATION_ADVANCED";
      case PIPE_CAP_NIR_ATOMICS_AS_DEREF: return "PIPE_CAP_NIR_ATOMICS_AS_DEREF";
      case PIPE_CAP_NO_CLIP_ON_COPY_TEX: return "PIPE_CAP_NO_CLIP_ON_COPY_TEX";
      case PIPE_CAP_MAX_TEXTURE_MB: return "PIPE_CAP_MAX_TEXTURE_MB";
      case PIPE_CAP_SHADER_ATOMIC_INT64: return "PIPE_CAP_SHADER_ATOMIC_INT64";
      case PIPE_CAP_DEVICE_PROTECTED_CONTENT: return "PIPE_CAP_DEVICE_PROTECTED_CONTENT";
      case PIPE_CAP_PREFER_REAL_BUFFER_IN_CONSTBUF0: return "PIPE_CAP_PREFER_REAL_BUFFER_IN_CONSTBUF0";
      case PIPE_CAP_GL_CLAMP: return "PIPE_CAP_GL_CLAMP";
      case PIPE_CAP_TEXRECT: return "PIPE_CAP_TEXRECT";
      case PIPE_CAP_SAMPLER_REDUCTION_MINMAX: return "PIPE_CAP_SAMPLER_REDUCTION_MINMAX";
      case PIPE_CAP_SAMPLER_REDUCTION_MINMAX_ARB: return "PIPE_CAP_SAMPLER_REDUCTION_MINMAX_ARB";
      case PIPE_CAP_ALLOW_DYNAMIC_VAO_FASTPATH: return "PIPE_CAP_ALLOW_DYNAMIC_VAO_FASTPATH";
      case PIPE_CAP_LAST: return "PIPE_CAP_LAST";
      default: return "PIPE_CAP_UNKNOWN";
   }
}

const char *
tr_util_pipe_capf_name(enum pipe_capf value)
{
   switch (value) {
      case PIPE_CAPF_MAX_LINE_WIDTH: return "PIPE_CAPF_MAX_LINE_WIDTH";
      case PIPE_CAPF_MAX_LINE_WIDTH_AA: return "PIPE_CAPF_MAX_LINE_WIDTH_AA";
      case PIPE_CAPF_MAX_POINT_WIDTH: return "PIPE_CAPF_MAX_POINT_WIDTH";
      case PIPE_CAPF_MAX_POINT_WIDTH_AA: return "PIPE_CAPF_MAX_POINT_WIDTH_AA";
      case PIPE_CAPF_MAX_TEXTURE_ANISOTROPY: return "PIPE_CAPF_MAX_TEXTURE_ANISOTROPY";
      case PIPE_CAPF_MAX_TEXTURE_LOD_BIAS: return "PIPE_CAPF_MAX_TEXTURE_LOD_BIAS";
      case PIPE_CAPF_MIN_CONSERVATIVE_RASTER_DILATE: return "PIPE_CAPF_MIN_CONSERVATIVE_RASTER_DILATE";
      case PIPE_CAPF_MAX_CONSERVATIVE_RASTER_DILATE: return "PIPE_CAPF_MAX_CONSERVATIVE_RASTER_DILATE";
      case PIPE_CAPF_CONSERVATIVE_RASTER_DILATE_GRANULARITY: return "PIPE_CAPF_CONSERVATIVE_RASTER_DILATE_GRANULARITY";
      default: return "PIPE_CAPF_UNKNOWN";
   }
}

const char *
tr_util_pipe_compute_cap_name(enum pipe_compute_cap value)
{
   switch (value) {
      case PIPE_COMPUTE_CAP_ADDRESS_BITS: return "PIPE_COMPUTE_CAP_ADDRESS_BITS";
      case PIPE_COMPUTE_CAP_IR_TARGET: return "PIPE_COMPUTE_CAP_IR_TARGET";
      case PIPE_COMPUTE_CAP_GRID_DIMENSION: return "PIPE_COMPUTE_CAP_GRID_DIMENSION";
      case PIPE_COMPUTE_CAP_MAX_GRID_SIZE: return "PIPE_COMPUTE_CAP_MAX_GRID_SIZE";
      case PIPE_COMPUTE_CAP_MAX_BLOCK_SIZE: return "PIPE_COMPUTE_CAP_MAX_BLOCK_SIZE";
      case PIPE_COMPUTE_CAP_MAX_THREADS_PER_BLOCK: return "PIPE_COMPUTE_CAP_MAX_THREADS_PER_BLOCK";
      case PIPE_COMPUTE_CAP_MAX_GLOBAL_SIZE: return "PIPE_COMPUTE_CAP_MAX_GLOBAL_SIZE";
      case PIPE_COMPUTE_CAP_MAX_LOCAL_SIZE: return "PIPE_COMPUTE_CAP_MAX_LOCAL_SIZE";
      case PIPE_COMPUTE_CAP_MAX_PRIVATE_SIZE: return "PIPE_COMPUTE_CAP_MAX_PRIVATE_SIZE";
      case PIPE_COMPUTE_CAP_MAX_INPUT_SIZE: return "PIPE_COMPUTE_CAP_MAX_INPUT_SIZE";
      case PIPE_COMPUTE_CAP_MAX_MEM_ALLOC_SIZE: return "PIPE_COMPUTE_CAP_MAX_MEM_ALLOC_SIZE";
      case PIPE_COMPUTE_CAP_MAX_CLOCK_FREQUENCY: return "PIPE_COMPUTE_CAP_MAX_CLOCK_FREQUENCY";
      case PIPE_COMPUTE_CAP_MAX_COMPUTE_UNITS: return "PIPE_COMPUTE_CAP_MAX_COMPUTE_UNITS";
      case PIPE_COMPUTE_CAP_IMAGES_SUPPORTED: return "PIPE_COMPUTE_CAP_IMAGES_SUPPORTED";
      case PIPE_COMPUTE_CAP_SUBGROUP_SIZE: return "PIPE_COMPUTE_CAP_SUBGROUP_SIZE";
      case PIPE_COMPUTE_CAP_MAX_VARIABLE_THREADS_PER_BLOCK: return "PIPE_COMPUTE_CAP_MAX_VARIABLE_THREADS_PER_BLOCK";
      default: return "PIPE_COMPUTE_CAP_UNKNOWN";
   }
}

const char *
tr_util_pipe_resource_param_name(enum pipe_resource_param value)
{
   switch (value) {
      case PIPE_RESOURCE_PARAM_NPLANES: return "PIPE_RESOURCE_PARAM_NPLANES";
      case PIPE_RESOURCE_PARAM_STRIDE: return "PIPE_RESOURCE_PARAM_STRIDE";
      case PIPE_RESOURCE_PARAM_OFFSET: return "PIPE_RESOURCE_PARAM_OFFSET";
      case PIPE_RESOURCE_PARAM_MODIFIER: return "PIPE_RESOURCE_PARAM_MODIFIER";
      case PIPE_RESOURCE_PARAM_HANDLE_TYPE_SHARED: return "PIPE_RESOURCE_PARAM_HANDLE_TYPE_SHARED";
      case PIPE_RESOURCE_PARAM_HANDLE_TYPE_KMS: return "PIPE_RESOURCE_PARAM_HANDLE_TYPE_KMS";
      case PIPE_RESOURCE_PARAM_HANDLE_TYPE_FD: return "PIPE_RESOURCE_PARAM_HANDLE_TYPE_FD";
      case PIPE_RESOURCE_PARAM_LAYER_STRIDE: return "PIPE_RESOURCE_PARAM_LAYER_STRIDE";
      default: return "PIPE_RESOURCE_PARAM_UNKNOWN";
   }
}

const char *
tr_util_pipe_fd_type_name(enum pipe_fd_type value)
{
   switch (value) {
      case PIPE_FD_TYPE_NATIVE_SYNC: return "PIPE_FD_TYPE_NATIVE_SYNC";
      case PIPE_FD_TYPE_SYNCOBJ: return "PIPE_FD_TYPE_SYNCOBJ";
      default: return "PIPE_FD_TYPE_UNKNOWN";
   }
}
