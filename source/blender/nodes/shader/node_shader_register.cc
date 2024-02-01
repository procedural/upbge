/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "NOD_register.hh"

#include "node_shader_register.hh"

void register_shader_nodes()
{
  register_node_tree_type_sh();

  register_node_type_sh_group();

  register_node_type_sh_add_shader();
  register_node_type_sh_ambient_occlusion();
  register_node_type_sh_attribute();
  register_node_type_sh_background();
  register_node_type_sh_bevel();
  register_node_type_sh_blackbody();
  register_node_type_sh_brightcontrast();
  register_node_type_sh_bsdf_anisotropic();
  register_node_type_sh_bsdf_diffuse();
  register_node_type_sh_bsdf_glass();
  register_node_type_sh_bsdf_glossy();
  register_node_type_sh_bsdf_hair_principled();
  register_node_type_sh_bsdf_hair();
  register_node_type_sh_bsdf_principled();
  register_node_type_sh_bsdf_refraction();
  register_node_type_sh_bsdf_toon();
  register_node_type_sh_bsdf_translucent();
  register_node_type_sh_bsdf_transparent();
  register_node_type_sh_bsdf_velvet();
  register_node_type_sh_bump();
  register_node_type_sh_camera();
  register_node_type_sh_clamp();
  register_node_type_sh_combcolor();
  register_node_type_sh_combhsv();
  register_node_type_sh_combrgb();
  register_node_type_sh_combxyz();
  register_node_type_sh_curve_float();
  register_node_type_sh_curve_rgb();
  register_node_type_sh_curve_vec();
  register_node_type_sh_displacement();
  register_node_type_sh_eevee_specular();
  register_node_type_sh_emission();
  register_node_type_sh_fresnel();
  register_node_type_sh_gamma();
  register_node_type_sh_geometry();
  register_node_type_sh_hair_info();
  register_node_type_sh_holdout();
  register_node_type_sh_hue_sat();
  register_node_type_sh_invert();
  register_node_type_sh_layer_weight();
  register_node_type_sh_light_falloff();
  register_node_type_sh_light_path();
  register_node_type_sh_map_range();
  register_node_type_sh_mapping();
  register_node_type_sh_math();
  register_node_type_sh_mix_rgb();
  register_node_type_sh_mix_shader();
  register_node_type_sh_mix();
  register_node_type_sh_normal_map();
  register_node_type_sh_normal();
  register_node_type_sh_object_info();
  register_node_type_sh_output_aov();
  register_node_type_sh_output_light();
  register_node_type_sh_output_linestyle();
  register_node_type_sh_output_material();
  register_node_type_sh_output_world();
  register_node_type_sh_particle_info();
  register_node_type_sh_point_info();
  register_node_type_sh_rgb();
  register_node_type_sh_rgbtobw();
  register_node_type_sh_script();
  register_node_type_sh_sepcolor();
  register_node_type_sh_sephsv();
  register_node_type_sh_seprgb();
  register_node_type_sh_sepxyz();
  register_node_type_sh_shadertorgb();
  register_node_type_sh_squeeze();
  register_node_type_sh_subsurface_scattering();
  register_node_type_sh_tangent();
  register_node_type_sh_tex_brick();
  register_node_type_sh_tex_checker();
  register_node_type_sh_tex_coord();
  register_node_type_sh_tex_environment();
  register_node_type_sh_tex_gradient();
  register_node_type_sh_tex_ies();
  register_node_type_sh_tex_image();
  register_node_type_sh_tex_magic();
  register_node_type_sh_tex_musgrave();
  register_node_type_sh_tex_noise();
  register_node_type_sh_tex_pointdensity();
  register_node_type_sh_tex_sky();
  register_node_type_sh_tex_voronoi();
  register_node_type_sh_tex_wave();
  register_node_type_sh_tex_white_noise();
  register_node_type_sh_uvalongstroke();
  register_node_type_sh_uvmap();
  register_node_type_sh_valtorgb();
  register_node_type_sh_value();
  register_node_type_sh_vect_math();
  register_node_type_sh_vect_transform();
  register_node_type_sh_vector_displacement();
  register_node_type_sh_vector_rotate();
  register_node_type_sh_vertex_color();
  register_node_type_sh_volume_absorption();
  register_node_type_sh_volume_info();
  register_node_type_sh_volume_principled();
  register_node_type_sh_volume_scatter();
  register_node_type_sh_wavelength();
  register_node_type_sh_wireframe();

  /* UPBGE */
  register_node_type_sh_sprites_animation();
}
