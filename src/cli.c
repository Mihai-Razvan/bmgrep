#include <string.h>
#include <stdio.h>

#include "cli.h"
#include "options.h"

#define PARSING_ERROR (-1)
#define PARSING_SUCCESS 0

extern options opt;

generic_status parse_arguments(int argc, const char* argv[]) {

    if (argc == 2 && strcmp(argv[1], "-help") == 0) {
        print_help();
        return (generic_status) { .return_status = PARSING_SUCCESS };
    }

    if (argc < 3) {
        return (generic_status) { .return_status = PARSING_ERROR, .message = "Insufficient arguments" };
    }

    opt.file_name = argv[1];
    opt.pattern = argv[2];

    return (generic_status) { .return_status = PARSING_SUCCESS };
}

static void print_help() {
    printf("\n");
    printf("Usage: bmgrep [file_name] [pattern]\n");
    printf("\n");
}