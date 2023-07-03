#include"main.h"
#include "src/datatypes.h"
#include "src/types.h"

class DesignMng;

DesignMng design;
cellgen_cfg cellgen_configs;

vector <string> name_of_cells{};

string cplex_path = "\"/home/ahmad/cpl/cplex/bin/x86-64_linux/cplex\"";
string gurobi_path = "\"/opt/gurobi605/linux64/bin/gurobi_cl\"";
string solcreator_path = "\"/home/ahmad/Desktop/astran-new-cmd/solcreator.txt\"";
string optimizer_name = "cplex";


int main(int argc, char * argv[])
{
    std::cout << "https://github.com/AhmadAlikhani/Astran_CMD.git" << endl;
    int32_t result = parse_json_cfg();

    if(!result) //TODO: uncomment
        return 0;

/************* execute technology address parameter **************/
    string tech_arg = "-tech";
    string tech = execute_required_arg(argc, argv, tech_arg);
    if(tech == "")
    {
        std::cout << "tech address is null!!" <<endl;
        return 0;
    }

/************* execute net list address parameter **************/
    string net_arg = "-net";
    string net_list = execute_required_arg(argc, argv, net_arg);
    if(net_list== "")
    {
        std::cout << "net list address is null!!" <<endl;
        return 0;
    }

/************* execute optimizer parameter **************/
    string optimizer_arg = "-optimizer";
    string optimizer_list = execute_required_arg(argc, argv, optimizer_arg);

    if(optimizer_list == "cplex")
    {
        optimizer_name = "cplex";
        change_optimizer(optimizer_name);
        std::cout << endl << "optimizer : cplex !!" << endl;
    }

    else if(optimizer_list == "gurobi")
    {
        optimizer_name = "gurobi";
        change_optimizer(optimizer_name);
        std::cout << endl << "optimizer : gurobi !!" << endl;
    }
    else if(optimizer_list != "" && optimizer_list != "cplex" && optimizer_list != "gurobi")
    {
        optimizer_name = "cplex";
        change_optimizer(optimizer_name);
        std::cout << endl << "optimizer name is wrong, current optimizer : cplex !!" << endl;
    }

    /************* execute output file mode parameter **************/
    OutPutFileMode output_mode = OutPutFileMode::CIF_OUTPUT_MODE;

    string out_arg = "-out";
    string out_mode = execute_required_arg(argc, argv, out_arg);

    if((out_mode == "") || (out_mode == "cif") || (out_mode == "CIF"))
    {
        std::cout << "Output File will be created in CIF mode!" <<endl;
        output_mode = OutPutFileMode::CIF_OUTPUT_MODE;
    }
    else if((out_mode == "gds") || (out_mode == "GDS"))
    {
        std::cout << "Output File will be created in GDS mode!" <<endl;
        output_mode = OutPutFileMode::GDS_OUTPUT_MODE;
    }
    else if((out_mode == "mag") || (out_mode == "MAG"))
    {
        std::cout << "Output File will be created in MAG mode!" <<endl;
        output_mode = OutPutFileMode::MAG_OUTPUT_MODE;
    }
    else if((out_mode == "max") || (out_mode == "MAX"))
    {
        std::cout << "Output File will be created in MAX mode!" <<endl;
        output_mode = OutPutFileMode::MAX_OUTPUT_MODE;
    }
    else if((out_mode == "all") || (out_mode == "ALL"))
    {
        output_mode = OutPutFileMode::ALL_OUTPUT_MODES;
    }
/************* generate all circuits **************/

    string name_arg = "-name";
    execute_name_arg(argc, argv, name_arg);

  for(auto& cellName : name_of_cells)
  {
      std::cout<< "generating layout for circuit : " << cellName << "  " << endl;

    if(cellName== "")
    {
        std::cout << "Cell Name is null!!" <<endl;
        return 0;
    }

    //On_Init();
    //parse_cellgen_cfg();
    generate_circuit(tech, net_list, cellName, output_mode);
  }
    return 0;
}

