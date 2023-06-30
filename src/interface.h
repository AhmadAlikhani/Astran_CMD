#include <iostream>
#include "designmng.h"
#include "datatypes.h"
#include "cif.h"

struct cellgen_cfg{

std::string conservative_gen;
std::string nr_of_internal_tracks;
std::string width_cost;
std::string gate_miss_match_cost;
std::string routing_cost;
std::string routing_density_cost;
std::string nr_of_gaps_cost;
std::string nr_of_iterations;
std::string nr_of_attempts;
bool horizontal_poly;
bool align_diff_top_btm;
bool reduce_vertical_routing;
bool optimize;
bool diffusion_stretching;
bool gridded_polly;
std::string redundant_diff_cnts;
std::string max_diff_cnts;
bool align_diffusion_cnts;
bool reduce_l_turns;
bool enable_dfm;
bool experimental;
bool debug;
std::string time_limit;
};



void generate_circuit(string tech, string net_list, string cellName, OutPutFileMode output_mode);
void set_fold_tr_configs();
void set_place_tr_configs();
void set_route_configs();
void set_compact_layout_configs();

void generate_cif_output(std::string cellName);
void generate_gds_output(std::string cellName);
void interface_generate_magic_output(std::string cellName);
void interface_generate_micro_magic_output(std::string cellName);
