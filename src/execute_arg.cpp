#include "../main.h"

extern DesignMng design;
extern cellgen_cfg cellgen_configs;
extern vector <string> name_of_cells;
extern string astran_path;

bool On_Init()
{
    string cmdFilename = astran_path + "/astran.cfg";

    setlocale(LC_ALL, "C");

    ifstream ifile(cmdFilename);
    if ((!ifile))
    {
        std::cout << "ERROR: File \'" << cmdFilename << "\' doesn't exist" << endl;
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
            std::cout << "astran> " << cmd << endl;
            design.readCommand(cmd);
        }
}

string execute_required_arg(int argc, char* argv[], string required_arg)
{
    if(argc <= 1)
    {
        std::cout << "astran-new-cmd [-parameter] [option]"<<endl<<endl;
        std::cout << "[parameter]        [option]"<<endl;
        std::cout << "-tech       insert address of technology file"<<endl;
        std::cout << "-net        insert address of .sp file"<<endl;
        std::cout << "-optimizer  select optimizer between cplex and gurobi"<<endl;
        std::cout << "-name       enter name of circuit"<<endl;
    }
    for(int index= 0; index< argc; index++)
    {
        if(argv[index] == required_arg)
        {
            std::cout << required_arg << "   " <<argv[index+1] << endl;
            return string(argv[index+1]);
        }

    }
    return string("");
}


bool execute_name_arg(int argc, char* argv[], string required_arg)
{
      if(argc <= 1)
    {
        std::cout << "astran-new-cmd [-parameter] [option]"<<endl<<endl;
        std::cout << "[parameter]        [option]"<<endl;
        std::cout << "-tech       insert address of technology file"<<endl;
        std::cout << "-net        insert address of .sp file"<<endl;
        std::cout << "-name       enter name of circuit"<<endl;
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

