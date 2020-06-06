﻿// vulkan_guide.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <vk_types.h>

#include <string>

struct Mesh {
	std::vector<Vertex> _vertices;
	std::vector<uint32_t> _indices;

	AllocatedBuffer _vertexBuffer;

	void bind_vertex_buffer(VkCommandBuffer cmd) {
		//bind the mesh vertex buffer with offset 0
		VkDeviceSize offset = 0;
		vkCmdBindVertexBuffers(cmd, 0, 1, &_vertexBuffer._buffer, &offset);
	}
};



namespace vkutil {

	bool load_mesh_from_obj(const std::string& filename, std::vector<Vertex>& outVertices, std::vector<uint32_t>& outIndices);
}
