/*
    This file is part of darktable,

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "common/usermanual_url.h"

char *dt_get_help_url(char *name)
{
  if(!strcmp(name, "ratings")) return "star_ratings_and_color_labels.html";
  if(!strcmp(name, "filter")) return "filtering_and_sort_order.html";
  if(!strcmp(name, "colorlabels")) return "star_ratings_and_color_labels.html";
  if(!strcmp(name, "import")) return "lighttable_panels.html#import";
  if(!strcmp(name, "select")) return "select.html";
  if(!strcmp(name, "image")) return "selected_images.html";
  if(!strcmp(name, "copy_history")) return "history_stack.html";
  if(!strcmp(name, "styles")) return "styles.html";
  if(!strcmp(name, "metadata")) return "metadata_editor.html";
  if(!strcmp(name, "tagging")) return "tagging.html";
  if(!strcmp(name, "geotagging")) return "geotagging.html";
  if(!strcmp(name, "collect")) return "collect_images.html";
  if(!strcmp(name, "recentcollect")) return "recently_used_collections.html";
  if(!strcmp(name, "metadata_view")) return "image_information.html";
  if(!strcmp(name, "export")) return "export_selected.html";
  if(!strcmp(name, "histogram")) return "histogram.html";
  if(!strcmp(name, "navigation")) return "darkroom_panels.html#navigation";
  if(!strcmp(name, "snapshots")) return "snapshots.html";
  if(!strcmp(name, "modulegroups")) return "module_groups.html";
  if(!strcmp(name, "history")) return "history.html";
  if(!strcmp(name, "colorpicker")) return "global_color_picker.html";
  if(!strcmp(name, "masks")) return "mask_manager.html";
  if(!strcmp(name, "modulelist")) return "more_modules.html";
  if(!strcmp(name, "location")) return "find_location.html";
  if(!strcmp(name, "map_settings")) return "map_settings.html";
  if(!strcmp(name, "print_settings")) return "print_settings.html";
  if(!strcmp(name, "global_toolbox")) return NULL;
  if(!strcmp(name, "lighttable_mode")) return NULL;
  if(!strcmp(name, "module_toolbox")) return NULL;
  if(!strcmp(name, "view_toolbox")) return NULL;
  if(!strcmp(name, "backgroundjobs")) return NULL;
  if(!strcmp(name, "hinter")) return NULL;
  if(!strcmp(name, "filter")) return NULL;
  if(!strcmp(name, "filmstrip")) return NULL;
  if(!strcmp(name, "viewswitcher")) return NULL;

  if(!strcmp(name, "dither")) return "correction_group.html#dithering";
  if(!strcmp(name, "watermark")) return "effect_group.html#watermark";
  if(!strcmp(name, "borders")) return "effect_group.html#framing";
  if(!strcmp(name, "clahe")) return "tone_group.html#local_contrast";
  if(!strcmp(name, "velvia")) return "color_group.html#velvia";
  if(!strcmp(name, "splittoning")) return "effect_group.html#splittoning";
  if(!strcmp(name, "vignette")) return "effect_group.html#vignetting";
  if(!strcmp(name, "soften")) return "effect_group.html#soften";
  if(!strcmp(name, "channelmixer")) return "color_group.html#channel_mixer";
  if(!strcmp(name, "colorout")) return "color_group.html#output_color_profile";
  if(!strcmp(name, "colorcontrast")) return "color_group.html#color_contrast";
  if(!strcmp(name, "grain")) return "effect_group.html#grain";
  if(!strcmp(name, "highpass")) return "effect_group.html#highpass";
  if(!strcmp(name, "lowpass")) return "effect_group.html#lowpass";
  if(!strcmp(name, "sharpen")) return "correction_group.html#sharpen";
  if(!strcmp(name, "colorcorrection")) return "color_group.html#color_correction";
  if(!strcmp(name, "relight")) return "tone_group.html#fill_light";
  if(!strcmp(name, "levels")) return "tone_group.html#levels";
  if(!strcmp(name, "tonecurve")) return "tone_group.html#tone_curve";
  if(!strcmp(name, "zonesystem")) return "tone_group.html#zone_system";
  if(!strcmp(name, "colisa")) return "modules.html#contrast_brightness_saturation";
  if(!strcmp(name, "monochrome")) return "color_group.html#monochrome";
  if(!strcmp(name, "lowlight")) return "effect_group.html#low_light";
  if(!strcmp(name, "colorzones")) return "color_group.html#color_zones";
  if(!strcmp(name, "bilat")) return "tone_group.html#local_contrast";
  if(!strcmp(name, "atrous")) return "correction_group.html#equalizer";
  if(!strcmp(name, "shadhi")) return "modules.html#shadows_and_highlights";
  if(!strcmp(name, "globaltonemap")) return "tone_group.html#global_tonemap";
  if(!strcmp(name, "nlmeans")) return "correction_group.html#denoise_non_local_means";
  if(!strcmp(name, "bloom")) return "effect_group.html#bloom";
  if(!strcmp(name, "colormapping")) return "effect_group.html#color_mapping";
  if(!strcmp(name, "colortransfer")) return NULL;
  if(!strcmp(name, "colorize")) return "effect_group.html#colorize";
  if(!strcmp(name, "clipping")) return "modules.html#crop_and_rotate";
  if(!strcmp(name, "colorbalance")) return "color_group.html#color_balance";
  if(!strcmp(name, "vibrance")) return "color_group.html#vibrance";
  if(!strcmp(name, "equalizer")) return "correction_group.html#equalizer";
  if(!strcmp(name, "defringe")) return "correction_group.html#defringe";
  if(!strcmp(name, "colorchecker")) return "color_group.html#color_look_up_table";
  if(!strcmp(name, "colorreconstruct")) return "modules.html#color_reconstruction";
  if(!strcmp(name, "colorin")) return "color_group.html#input_color_profile";
  if(!strcmp(name, "hazeremoval")) return "correction_group.html#haze_removal";
  if(!strcmp(name, "profile_gamma")) return "color_group.html#unbreak_input_profile";
  if(!strcmp(name, "bilateral")) return "correction_group.html#denoise_bilateral";
  if(!strcmp(name, "basecurve")) return "modules.html#base_curve";
  if(!strcmp(name, "graduatednd")) return "effect_group.html#graduated_density";
  if(!strcmp(name, "flip")) return "modules.html#orientation";
  if(!strcmp(name, "scalepixels")) return "correction_group.html#scale_pixels";
  if(!strcmp(name, "rotatepixels")) return "correction_group.html#rotate_pixels";
  if(!strcmp(name, "liquify")) return "correction_group.html#liquify";
  if(!strcmp(name, "ashift")) return "correction_group.html#perspective_correction";
  if(!strcmp(name, "lens")) return "correction_group.html#lens_correction";
  if(!strcmp(name, "retouch")) return NULL; // TODO
  if(!strcmp(name, "spots")) return "correction_group.html#spot_removal";
  if(!strcmp(name, "exposure")) return "modules.html#exposure";
  if(!strcmp(name, "tonemap")) return "tone_group.html#tonemapping";
  if(!strcmp(name, "denoiseprofile")) return "correction_group.html#denoise_profiled";
  if(!strcmp(name, "demosaic")) return "modules.html#demosaic";
  if(!strcmp(name, "rawdenoise")) return "correction_group.html#raw_denoise";
  if(!strcmp(name, "hotpixels")) return "correction_group.html#hotpixels";
  if(!strcmp(name, "cacorrect")) return "correction_group.html#chromatic_aberrations";
  if(!strcmp(name, "highlights")) return "modules.html#highlight_reconstruction";
  if(!strcmp(name, "temperature")) return "modules.html#whitebalance";
  if(!strcmp(name, "invert")) return "modules.html#invert";
  if(!strcmp(name, "rawprepare")) return "modules.html#raw_black_white_point";

  return NULL;
}
