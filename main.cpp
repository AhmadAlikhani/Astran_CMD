#include"main.h"

class DesignMng;

DesignMng design;
cellgen_cfg cellgen_configs;

vector <string> name_of_cells{};

string astran_path = "/home/ahmad/Desktop/astran-new-cmd";
string cplex_path = "\"/home/ahmad/cpl/cplex/bin/x86-64_linux/cplex\"";
string gurobi_path = "\"/opt/gurobi605/linux64/bin/gurobi_cl\"";
string optimizer_name = "cplex";

int main(int argc, char * argv[])
{
    std::cout << "Ahmad Mohammad Alikhani 4007702002" << endl;

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

    On_Init();
    parse_cellgen_cfg();
    generate_circuit(tech, net_list, cellName);
  }
    return 0;
}

