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

#include "parser.h"
#include "interface.h"

extern string cplex_path;
extern string gurobi_path;
extern string solcreator_path;
extern cellgen_cfg cellgen_configs;

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
    vector <string> lines;
    string path = "../../astran.cfg";
    FILE* astran_cfg_file = fopen(path.c_str(), "r+");

    char line[350];
    while(fgets(line, 350, astran_cfg_file))
    {
        string s_line1 = string(line);

        std::string::size_type position = 1000;
        position =s_line1.find("lpsolve");

        if(position < 350)
        {
            position += 8;
            string corrected_line = "set lpsolve ";
            corrected_line += (optimizer_name == "gurobi") ? gurobi_path : cplex_path;
            lines.push_back(corrected_line);
        }
        else
        {
            lines.push_back(s_line1);
        }
    }
    fclose(astran_cfg_file);

    FILE* astran_cfg = fopen(path.c_str(), "w+");
    for(auto& temp : lines)
    {
        fputs(temp.c_str(), astran_cfg);
    }
    fclose(astran_cfg);
}

void read_optimizer_path(void)
{
    vector <string> lines;
    string path = "../../optimizer_path.txt";
    FILE* optimizer_path_file = fopen(path.c_str(), "r");

    char line[350];
    while(fgets(line, 350, optimizer_path_file))
    {
        string s_line1 = string(line);

        if(s_line1.find("cplex") < 5)
        {
            int path_position = s_line1.find("\"");
            cplex_path = s_line1.erase(0, path_position);
            std::cout << "cplex_path =" << cplex_path << std::endl;
            cplex_path.pop_back(); // remove last enter char
        }
        else if(s_line1.find("gurobi") < 5)
        {
            int path_position = s_line1.find("\"");
            gurobi_path = s_line1.erase(0, path_position);
            gurobi_path.pop_back(); // remove last enter char
        }

        else if(s_line1.find("solcreator") < 5)
        {
            int path_position = s_line1.find("\"");
            solcreator_path = s_line1.erase(0, path_position);
            solcreator_path.pop_back(); // remove last enter char
        }

std::cout << "cplex path =" << cplex_path << std::endl;
std::cout << "gurobi path =" << gurobi_path << std::endl;
std::cout << "solcreator path =" << solcreator_path << std::endl;
    }
    fclose(optimizer_path_file);
}
