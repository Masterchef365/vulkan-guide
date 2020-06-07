﻿// vulkan_guide.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <vk_types.h>
#include <vk_engine.h>

namespace vkutil {

	bool load_texture_from_file(VulkanEngine& engine, const std::string& file, AllocatedImage& outImage);

}