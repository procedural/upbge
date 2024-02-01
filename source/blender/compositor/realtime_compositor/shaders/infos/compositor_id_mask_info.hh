/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "gpu_shader_create_info.hh"

GPU_SHADER_CREATE_INFO(compositor_id_mask)
    .local_group_size(16, 16)
    .push_constant(Type::INT, "index")
    .sampler(0, ImageType::FLOAT_2D, "input_mask_tx")
    .image(0, GPU_R16F, Qualifier::WRITE, ImageType::FLOAT_2D, "output_mask_img")
    .compute_source("compositor_id_mask.glsl")
    .do_static_compilation(true);
