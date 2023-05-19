#include <iostream>
#include "designmng.h"
#include "datatypes.h"
#include "cif.h"

struct cellgen_cfg{

string conservative_gen;
string nr_of_internal_tracks;
string width_cost;
string gate_miss_match_cost;
string routing_cost;
string routing_density_cost;
string nr_of_gaps_cost;
string nr_of_iterations;
string nr_of_attempts;
bool horizontal_poly;
bool align_diff_top_btm;
bool reduce_vertical_routing;
bool optimize;
bool diffusion_stretching;
bool gridded_polly;
string redundant_diff_cnts;
string max_diff_cnts;
bool align_diffusion_cnts;
bool reduce_l_turns;
bool enable_dfm;
bool experimental;
bool debug;
string time_limit;
};



void generate_circuit(string tech, string net_list, string cellName, OutPutFileMode output_mode);
void set_fold_tr_configs();
void set_place_tr_configs();
void set_route_configs();
void set_compact_layout_configs();

void generate_cif_output(std::string cellName);
void generate_gds_output(std::string cellName);
