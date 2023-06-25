#include <stdio.h>
#include <fstream>
#include <istream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "jsoncpp/inc/json.h" // or jsoncpp/json.h , or json/json.h etc.
#include "parser.h"
#include "interface.h"
#include "types.h"
#include <algorithm>

extern string cplex_path;
extern string gurobi_path;
extern string solcreator_path;
extern cellgen_cfg cellgen_configs;
extern DesignMng design;

void parse_cellgen_cfg()
{
string path = "../../cellgen_cfg.txt";
    FILE* cellgen_cfg_file = fopen(path.c_str(), "r");

    char line[150];

    while(fgets(line, 150, cellgen_cfg_file))
    {
        string s_line1 = string(line);
        string s_line2 = s_line1;
        int start = s_line1.find(" ");
        string config_name = s_line1.erase(start,sizeof(s_line1));
        string config_param_non = s_line2.erase(0 , start+1);
        int last_enter = config_param_non.find('\n');
        string config_param = config_param_non.erase(last_enter);

        if(config_name == "conservative_gen")
            {
                cellgen_configs.conservative_gen = config_param;
            }
        if(config_name == "nr_of_internal_tracks")
            {
                cellgen_configs.nr_of_internal_tracks = config_param;
            }
        if(config_name == "width_cost")
            {
                cellgen_configs.width_cost = config_param;
            }
        if(config_name == "gate_miss_match_cost")
            {
                cellgen_configs.gate_miss_match_cost = config_param;
            }
        if(config_name == "routing_cost")
            {
                cellgen_configs.routing_cost = config_param;
            }
        if(config_name == "routing_density_cost")
            {
                cellgen_configs.routing_density_cost = config_param;
            }
        if(config_name == "nr_of_gaps_cost")
            {
                cellgen_configs.nr_of_gaps_cost = config_param;
            }
        if(config_name == "nr_of_iterations")
            {
                cellgen_configs.nr_of_iterations = config_param;
            }
        if(config_name == "nr_of_attempts")
            {
                cellgen_configs.nr_of_attempts = config_param;
            }
        if(config_name == "horizontal_poly")
            {
                if(config_param[0] == 't')
                    cellgen_configs.horizontal_poly = true;
                else
                    cellgen_configs.horizontal_poly = false;
            }
        if(config_name == "align_diff_top_btm")
            {
                if(config_param[0] == 't')
                    cellgen_configs.align_diff_top_btm = true;
                else
                    cellgen_configs.align_diff_top_btm = false;
            }
        if(config_name == "reduce_vertical_routing")
            {
                if(config_param[0] == 't')
                    cellgen_configs.reduce_vertical_routing = true;
                else
                    cellgen_configs.reduce_vertical_routing = false;
            }
        if(config_name == "optimize")
            {
                if(config_param[0] == 't')
                    cellgen_configs.optimize = true;
                else
                    cellgen_configs.optimize = false;
            }
        if(config_name == "diffusion_stretching")
            {
                if(config_param[0] == 't')
                    cellgen_configs.diffusion_stretching = true;
                else
                    cellgen_configs.diffusion_stretching = false;
            }
        if(config_name == "gridded_polly")
            {
                if(config_param[0] == 't')
                    cellgen_configs.gridded_polly = true;
                else
                    cellgen_configs.gridded_polly = false;
            }
        if(config_name == "redundant_diff_cnts")
            {
                cellgen_configs.redundant_diff_cnts = config_param;
            }
        if(config_name == "max_diff_cnts")
            {
                cellgen_configs.max_diff_cnts = config_param;
            }
        if(config_name == "align_diffusion_cnts")
            {
                if(config_param[0] == 't')
                    cellgen_configs.align_diffusion_cnts = true;
                else
                    cellgen_configs.align_diffusion_cnts = false;
            }
        if(config_name == "reduce_l_turns")
            {
                if(config_param[0] == 't')
                    cellgen_configs.reduce_l_turns = true;
                else
                    cellgen_configs.reduce_l_turns = false;
            }
        if(config_name == "enable_dfm")
            {
                if(config_param[0] == 't')
                    cellgen_configs.enable_dfm = true;
                else
                    cellgen_configs.enable_dfm = false;
            }
        if(config_name == "experimental")
            {
                if(config_param[0] == 't')
                    cellgen_configs.experimental = true;
                else
                    cellgen_configs.experimental = false;
            }
        if(config_name == "debug")
            {
                if(config_param[0] == 't')
                    cellgen_configs.debug = true;
                else
                    cellgen_configs.debug = false;
            }
        if(config_name == "time_limit")
            {
                cellgen_configs.time_limit = config_param;
            }

        }
        cout<<"conservative_gen "<<cellgen_configs.conservative_gen<<endl;
        cout<<"nr_of_internal_tracks "<<cellgen_configs.nr_of_internal_tracks<<endl;
        cout<<"width_cost "<<cellgen_configs.width_cost<<endl;
        cout<<"gate_miss_match_cost "<<cellgen_configs.gate_miss_match_cost<<endl;
        cout<<"routing_cost "<<cellgen_configs.routing_cost<<endl;
        cout<<"routing_density_cost "<<cellgen_configs.routing_density_cost<<endl;
        cout<<"nr_of_gaps_cost "<<cellgen_configs.nr_of_gaps_cost<<endl;
        cout<<"nr_of_iterations "<<cellgen_configs.nr_of_iterations<<endl;
        cout<<"nr_of_attempts "<<cellgen_configs.nr_of_attempts<<endl;
        cout<<"horizontal_poly "<<cellgen_configs.horizontal_poly<<endl;
        cout<<"align_diff_top_btm "<<cellgen_configs.align_diff_top_btm<<endl;
        cout<<"reduce_vertical_routing "<<cellgen_configs.reduce_vertical_routing<<endl;
        cout<<"optimize "<<cellgen_configs.optimize<<endl;
        cout<<"diffusion_stretching "<<cellgen_configs.diffusion_stretching<<endl;
        cout<<"gridded_polly "<<cellgen_configs.gridded_polly<<endl;
        cout<<"redundant_diff_cnts "<<cellgen_configs.redundant_diff_cnts<<endl;
        cout<<"max_diff_cnts "<<cellgen_configs.max_diff_cnts<<endl;
        cout<<"align_diffusion_cnts "<<cellgen_configs.align_diffusion_cnts<<endl;
        cout<<"reduce_l_turns "<<cellgen_configs.reduce_l_turns<<endl;
        cout<<"enable_dfm "<<cellgen_configs.enable_dfm<<endl;
        cout<<"experimental "<<cellgen_configs.experimental<<endl;
        cout<<"debug "<<cellgen_configs.debug<<endl;
        cout<<"time_limit "<<cellgen_configs.time_limit<<endl;
}

void change_optimizer(string optimizer_name)
{
 ifstream ifs("../../astran_cfg.json");
    Json::Reader reader;
    Json::StyledStreamWriter writer;
    Json::Value obj;
    reader.parse(ifs, obj); // reader can also read strings

    if(optimizer_name == "cplex")
    {
        cout << "lpsolve: " << obj["cplex_path"].asString() << endl;
        std::string cmd = string("set lpsolve ") + std::string(obj["cplex_path"].asString());
        design.readCommand(cmd);
    }
    else if(optimizer_name == "gurobi")
    {
        cout << "lpsolve: " << obj["gurobi_path"].asString() << endl;
        std::string cmd = string("set lpsolve ") + std::string(obj["gurobi_path"].asString());
        design.readCommand(cmd);
    }
}

int32_t parse_json_cfg()
{
    ifstream ifs("../../astran_cfg.json");
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj); // reader can also read strings

    if(obj.size() == 0)
    {
        std::cout << ".json File Not Found !!!" << std::endl;
        return RESULTFAILED;
    }

    cout << "cplex_path: " << obj["cplex_path"].asString() << std::endl;
    cplex_path = obj["cplex_path"].asString();

    cout << "gurobi_path: " << obj["gurobi_path"].asString() << endl;
    gurobi_path = obj["conservative_gen"].asString();

    cout << "solcreator_path: " << obj["solcreator_path"].asString() << endl;
    solcreator_path = obj["solcreator_path"].asString();

    cout << "cplex_read_cmd :" << obj["cplex_read_cmd"].asString() << endl;
    cout << "cplex_write_cmd: " << obj["cplex_write_cmd"].asString() << endl;
    
    std::string new_path = solcreator_path;
    new_path.erase(std::remove(new_path.begin(), new_path.end(), '\"'), new_path.end());

    cout << "viewer: " << obj["viewer"].asString() << endl;
    std::string cmd = string("set viewer ") + std::string(obj["viewer"].asString());
    design.readCommand(cmd);

    cout << "rotdl: " << obj["rotdl"].asString() << endl;
    cmd = string("set rotdl ") + std::string(obj["rotdl"].asString());
    design.readCommand(cmd);

    cout << "placer: " << obj["placer"].asString() << endl;
    cmd = string("set placer ") + std::string(obj["placer"].asString());
    design.readCommand(cmd);

    cout << "log: " << obj["log"].asString() << endl;
    cmd = string("set log ") + std::string(obj["log"].asString());
    design.readCommand(cmd);
    
    cout << "verbose_mode: " << obj["verbose_mode"].asUInt() << endl;
    cmd = string("set verbose_mode ") + std::to_string(obj["verbose_mode"].asUInt());
    design.readCommand(cmd);

    cellgen_configs.conservative_gen = obj["conservative_gen"].asString();
    cellgen_configs.nr_of_internal_tracks = obj["nr_of_internal_tracks"].asString();
    cellgen_configs.width_cost = obj["width_cost"].asString();
    cellgen_configs.gate_miss_match_cost = obj["gate_miss_match_cost"].asString();
    cellgen_configs.routing_cost = obj["routing_cost"].asString();
    cellgen_configs.routing_density_cost = obj["routing_density_cost"].asString();
    cellgen_configs.nr_of_gaps_cost = obj["nr_of_gaps_cost"].asString();
    cellgen_configs.nr_of_iterations = obj["nr_of_iterations"].asString();
    cellgen_configs.nr_of_attempts = obj["nr_of_attempts"].asString();
    cellgen_configs.horizontal_poly = obj["horizontal_poly"].asBool();
    cellgen_configs.align_diff_top_btm = obj["align_diff_top_btm"].asBool();
    cellgen_configs.reduce_vertical_routing = obj["reduce_vertical_routing"].asBool();
    cellgen_configs.optimize = obj["optimize"].asBool();
    cellgen_configs.diffusion_stretching = obj["diffusion_stretching"].asBool();
    cellgen_configs.gridded_polly = obj["gridded_polly"].asBool();
    cellgen_configs.redundant_diff_cnts = obj["redundant_diff_cnts"].asString();
    cellgen_configs.max_diff_cnts = obj["max_diff_cnts"].asString();
    cellgen_configs.align_diffusion_cnts = obj["align_diffusion_cnts"].asBool();
    cellgen_configs.reduce_l_turns = obj["reduce_l_turns"].asBool();
    cellgen_configs.enable_dfm = obj["enable_dfm"].asBool();
    cellgen_configs.experimental = obj["experimental"].asBool();
    cellgen_configs.debug = obj["debug"].asBool();
    cellgen_configs.time_limit = obj["time_limit"].asString();

    cout << "conservative_gen: " << cellgen_configs.conservative_gen << endl;
    cout << "nr_of_internal_tracks: " << cellgen_configs.nr_of_internal_tracks << endl;
    cout << "width_cost: " << cellgen_configs.width_cost << endl;
    cout << "gate_miss_match_cost: " << cellgen_configs.gate_miss_match_cost << endl;
    cout << "routing_cost: " << cellgen_configs.routing_cost << endl;
    cout << "routing_density_cost: " << cellgen_configs.routing_density_cost << endl;
    cout << "nr_of_gaps_cost: " << cellgen_configs.nr_of_gaps_cost << endl;
    cout << "nr_of_iterations: " << cellgen_configs.nr_of_iterations << endl;
    cout << "nr_of_attempts: " << cellgen_configs.nr_of_attempts << endl;
    cout << "horizontal_poly: " << cellgen_configs.horizontal_poly << endl;
    cout << "align_diff_top_btm: " << cellgen_configs.align_diff_top_btm << endl;
    cout << "reduce_vertical_routing: " << cellgen_configs.reduce_vertical_routing << endl;
    cout << "optimize: " << cellgen_configs.optimize << endl;
    cout << "diffusion_stretching: " << cellgen_configs.diffusion_stretching << endl;
    cout << "gridded_polly: " << cellgen_configs.gridded_polly << endl;
    cout << "redundant_diff_cnts: " << cellgen_configs.redundant_diff_cnts << endl;
    cout << "max_diff_cnts: " << cellgen_configs.max_diff_cnts << endl;
    cout << "align_diffusion_cnts: " << cellgen_configs.align_diffusion_cnts << endl;
    cout << "reduce_l_turns: " << cellgen_configs.reduce_l_turns << endl;
    cout << "enable_dfm: " << cellgen_configs.enable_dfm << endl;
    cout << "experimental: " << cellgen_configs.experimental << endl;
    cout << "debug: " << cellgen_configs.debug << endl;
    cout << "time_limit: " << cellgen_configs.time_limit << endl;

    return RESULTSUCCESSFULL;
}
