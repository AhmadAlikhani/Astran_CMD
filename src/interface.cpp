
#include "interface.h"

extern DesignMng design;
extern cellgen_cfg cellgen_configs;

void generate_circuit(string tech, string net_list, string cellName)
{
    string back_slash = "\"";
    string cmd = "load technology " + back_slash + tech + back_slash;
    cout<<cmd<<endl;
    design.readCommand(cmd);

    cmd = "load netlist " + back_slash + net_list + back_slash;
    cout<<cmd<<endl;
    design.readCommand(cmd);

    cmd = "cellgen select "+cellName;
    cout<<cmd;
    design.readCommand(cmd);

    set_fold_tr_configs();
    set_place_tr_configs();
    set_route_configs();
    set_compact_layout_configs();

    cmd = "cellgen autoflow";
    cout<<cmd;
    design.readCommand(cmd);

		Cif *cif=new Cif(cellName+".cif", *(design.getRules()));
		cif->cellCif(*(design.getCircuit()->getLayouts()), cellName);
		delete(cif);
		cmd = design.getViewer() + " "+cellName+".cif";
		cout << "-> Opening viewer: " << cmd << endl;
}

void set_place_tr_configs()
{
    string cmd = "cellgen place ";
    cmd += cellgen_configs.nr_of_iterations;
    cmd += " ";
    cmd += cellgen_configs.nr_of_attempts;
    cmd += " ";
    cmd += cellgen_configs.width_cost;
    cmd += " ";
    cmd += cellgen_configs.gate_miss_match_cost;
    cmd += " ";
    cmd += cellgen_configs.routing_cost;
    cmd += " ";
    cmd += cellgen_configs.routing_density_cost;
    cmd += " ";
    cmd += cellgen_configs.nr_of_gaps_cost;
    design.readCommand(cmd);
}

void set_fold_tr_configs()
{
    string cmd = "cellgen fold ";
    cmd += cellgen_configs.nr_of_internal_tracks;
    cmd += " ";
    cmd += cellgen_configs.conservative_gen;
    design.readCommand(cmd);
}

void set_route_configs()
{
    string cmd = "cellgen route ";
    cmd += (cellgen_configs.horizontal_poly == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.align_diff_top_btm == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.reduce_vertical_routing == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.optimize == true) ? ("1") : ("0");
    design.readCommand(cmd);
}

void set_compact_layout_configs()
{
    string cmd = "cellgen compact ";
    cmd += (cellgen_configs.diffusion_stretching == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.gridded_polly == true) ? ("1") : ("0");
    cmd += " ";
    cmd += cellgen_configs.redundant_diff_cnts;
    cmd += " ";
    cmd += cellgen_configs.max_diff_cnts;
    cmd += " ";
    cmd += (cellgen_configs.align_diffusion_cnts == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.reduce_l_turns == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.enable_dfm == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.experimental == true) ? ("1") : ("0");
    cmd += " ";
    cmd += (cellgen_configs.debug == true) ? ("1") : ("0");
    cmd += " ";
    cmd += cellgen_configs.time_limit;
cout << "**************"<<cmd <<endl<<endl<<endl<<endl;
    design.readCommand(cmd);
}
