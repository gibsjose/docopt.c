#ifndef DOCOPT_H
#define DOCOPT_H

#ifndef __cplusplus
#include <stdbool.h>
#endif


typedef struct {
    /* commands */
    int create;
    int mine;
    int move;
    int remove;
    int set;
    int ship;
    int shoot;
    /* arguments */
    char *name;
    char *x;
    char *y;
    /* options without arguments */
    int drifting;
    int help;
    int moored;
    int version;
    /* options with arguments */
    char *speed;
    /* special */
    const char *usage_pattern;
    const char *help_message;
} DocoptArgs;

extern DocoptArgs docopt(int argc, char *argv[], bool help, const char *version);

#endif
