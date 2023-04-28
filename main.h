#include <iostream>
#include "src/designmng.h"
#include "src/cif.h"
#include "src/interface.h"
#include "src/parser.h"
#include <vector>

bool On_Init(void);
string execute_required_arg(int argc, char* argv[], string required_arg);
bool execute_name_arg(int argc, char* argv[], string required_arg);
