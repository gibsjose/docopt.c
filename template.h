#ifndef DOCOPT_H
#define DOCOPT_H

#ifndef __cplusplus
#include <stdbool.h>
#endif


typedef struct {$commands$arguments$flags$options
    /* special */
    const char *usage_pattern;
    const char *help_message;
} DocoptArgs;

extern DocoptArgs docopt(int argc, char *argv[], bool help, const char *version);

#endif
