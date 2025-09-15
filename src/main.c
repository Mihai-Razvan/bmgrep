#include <stdio.h>

#include "options.h"
#include "cli.h"

extern options opt;

int main(int argc, const char* argv[]) {

    generic_status parse_status = parse_arguments(argc, argv);

    if (parse_status.return_status != 0) {
        printf("Error while parsing arguments: %s\n", parse_status.message);
        return 0;
    }

    printf("File %s\n", opt.file_name);
    printf("Pattern %s\n", opt.pattern);
}