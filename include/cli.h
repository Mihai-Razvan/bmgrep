#ifndef CLI_H
#define CLI_H

#include "utils/status.h"

generic_status parse_arguments(int argc, const char* argv[]);
static void print_help();

#endif //CLI_H
