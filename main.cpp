#include <iostream>
#include "src/designmng.h"
#include "src/cif.h"
#include "src/interface.h"
#include "src/parser.h"
#include <vector>


bool On_Init();
string execute_required_arg(int argc, char* argv[], string required_arg);
bool execute_name_arg(int argc, char* argv[], string required_arg);

class DesignMng;

using namespace std;

DesignMng design;
cellgen_cfg cellgen_configs;
vector <string> name_of_cells{};

string astran_path = "/home/ahmad/Desktop/astran-new-cmd";

int main(int argc, char * argv[])
{
    cout << "Ahmad Mohammad Alikhani 4007702002" << endl;

    string tech_arg = "-tech";
    string tech = execute_required_arg(argc, argv, tech_arg);
    if(tech == "")
    {
        cout << "tech address is null!!" <<endl;
        return 0;
    }

    string net_arg = "-net";
    string net_list = execute_required_arg(argc, argv, net_arg);
    if(net_list== "")
    {
        cout << "net list address is null!!" <<endl;
        return 0;
    }

/************* generate all circuits **************/

    string name_arg = "-name";
    execute_name_arg(argc, argv, name_arg);

  for(auto& cellName : name_of_cells)
  {
      cout<< "generating layout for circuit : " << cellName << "  " << endl;


    if(cellName== "")
    {
        cout << "Cell Name is null!!" <<endl;
        return 0;
    }

    On_Init();
    parse_cellgen_cfg();
    generate_circuit(tech, net_list, cellName);


  }
    return 0;
}

bool On_Init()
{
    string cmdFilename = astran_path + "/astran.cfg";

    setlocale(LC_ALL, "C");

    ifstream ifile(cmdFilename);
    if ((!ifile))
    {
        cout << "ERROR: File \'" << cmdFilename << "\' doesn't exist" << endl;
        return false;
    }

        DesignMng designmng;
        string cmd;

        string astran_cfg;
        astran_cfg = "astran.cfg";
        astran_cfg = astran_path + "/astran.cfg";

        // By default load astran.cfg
        ifstream afile(astran_cfg.c_str());
        if (afile)
        {
            cmd = string("read ") + astran_cfg;
            cout << "astran> " << cmd << endl;
            design.readCommand(cmd);
        }
}

string execute_required_arg(int argc, char* argv[], string required_arg)
{
    if(argc <= 1)
    {
        cout << "astran-new-cmd [-parameter] [option]"<<endl<<endl;
        cout << "[parameter]        [option]"<<endl;
        cout << "-tech       insert address of technology file"<<endl;
        cout << "-net        insert address of .sp file"<<endl;
        cout << "-name       enter name of circuit"<<endl;
    }
    for(int index= 0; index< argc; index++)
    {
        if(argv[index] == required_arg)
        {
            return string(argv[index+1]);
        }

    }
    return string("");
}


bool execute_name_arg(int argc, char* argv[], string required_arg)
{
      if(argc <= 1)
    {
        cout << "astran-new-cmd [-parameter] [option]"<<endl<<endl;
        cout << "[parameter]        [option]"<<endl;
        cout << "-tech       insert address of technology file"<<endl;
        cout << "-net        insert address of .sp file"<<endl;
        cout << "-name       enter name of circuit"<<endl;
    }
    for(int index= 0; index < argc; index++)
    {
        if(argv[index] == required_arg)
        {
            for(int j = index + 1; (j < argc) && (argv[j] != string("-name")); j++)
            {
                name_of_cells.emplace_back(string(argv[j]));
            }
            return 1;
        }
    }
    name_of_cells.clear();
    return 0;
}
