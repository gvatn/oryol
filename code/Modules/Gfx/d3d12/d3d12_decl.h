#pragma once
//------------------------------------------------------------------------------
/**
    @file d3d12_decl.h
    @brief D3D12 forward declarations
*/
#include "Gfx/win/win_decl.h"

struct IDXGIFactory4;
struct IDXGISwapChain3;
typedef enum DXGI_FORMAT DXGI_FORMAT;

struct ID3D12Object;
struct ID3D12Device;
struct ID3D12CommandQueue;
struct ID3D12CommandAllocator;
struct ID3D12GraphicsCommandList;
struct ID3D12DescriptorHeap;
struct ID3D12Resource;
struct ID3D12Fence;
struct ID3D12Heap;
struct ID3D12PipelineState;
struct ID3D12RootSignature;

typedef struct D3D12_RESOURCE_DESC D3D12_RESOURCE_DESC;
typedef struct D3D12_CLEAR_VALUE D3D12_CLEAR_VALUE;
typedef struct D3D12_HEAP_PROPERTIES D3D12_HEAP_PROPERTIES;
typedef struct D3D12_DESCRIPTOR_HEAP_DESC D3D12_DESCRIPTOR_HEAP_DESC;
typedef struct D3D12_DEPTH_STENCIL_VIEW_DESC D3D12_DEPTH_STENCIL_VIEW_DESC;
typedef struct D3D12_CPU_DESCRIPTOR_HANDLE D3D12_CPU_DESCRIPTOR_HANDLE;
typedef struct D3D12_GPU_DESCRIPTOR_HANDLE D3D12_GPU_DESCRIPTOR_HANDLE;
typedef struct D3D12_SAMPLER_DESC D3D12_SAMPLER_DESC;
typedef struct D3D12_DESCRIPTOR_RANGE D3D12_DESCRIPTOR_RANGE;
typedef struct D3D12_SHADER_RESOURCE_VIEW_DESC D3D12_SHADER_RESOURCE_VIEW_DESC;
typedef struct D3D12_ROOT_PARAMETER D3D12_ROOT_PARAMETER;
typedef struct D3D12_ROOT_SIGNATURE_DESC D3D12_ROOT_SIGNATURE_DESC;

typedef enum D3D12_RESOURCE_STATES D3D12_RESOURCE_STATES;
typedef enum D3D12_HEAP_TYPE D3D12_HEAP_TYPE;
typedef enum D3D12_RESOURCE_STATES D3D12_RESOURCE_STATES;
typedef enum D3D12_BLEND D3D12_BLEND;
typedef enum D3D12_BLEND_OP D3D12_BLEND_OP;
typedef enum D3D12_CULL_MODE D3D12_CULL_MODE;
typedef enum D3D12_COMPARISON_FUNC D3D12_COMPARISON_FUNC;
typedef enum D3D12_STENCIL_OP D3D12_STENCIL_OP;
typedef enum D3D_PRIMITIVE_TOPOLOGY D3D_PRIMITIVE_TOPOLOGY;
typedef enum D3D_PRIMITIVE_TOPOLOGY D3D12_PRIMITIVE_TOPOLOGY;
typedef enum D3D12_PRIMITIVE_TOPOLOGY_TYPE D3D12_PRIMITIVE_TOPOLOGY_TYPE;
typedef enum D3D12_INPUT_CLASSIFICATION D3D12_INPUT_CLASSIFICATION;
typedef enum D3D12_FILTER D3D12_FILTER;
typedef enum D3D12_TEXTURE_ADDRESS_MODE D3D12_TEXTURE_ADDRESS_MODE;
typedef enum D3D12_DESCRIPTOR_HEAP_TYPE D3D12_DESCRIPTOR_HEAP_TYPE;
typedef enum D3D12_DESCRIPTOR_RANGE_TYPE D3D12_DESCRIPTOR_RANGE_TYPE;
typedef enum D3D12_SHADER_VISIBILITY D3D12_SHADER_VISIBILITY;
