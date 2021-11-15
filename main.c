#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

char **parse_args(char *line);
int main();

char **parse_args( char *line ) {
    char *temp;
    int counter;
    char **returnline = calloc(5, sizeof(char *));
    counter = 0;
    while ((temp = strsep(&line, " "))) {
        returnline[counter] = temp;
        counter++;
    }
    return returnline;
}   

int main() {
  char temp[100] = "ls -a -l";
  char ** args = parse_args(temp);
  execvp(args[0], args);
  return 0;
}
