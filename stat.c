#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * get_line - Must be let.
 * @return: Zero.
 */
char *get_line(void) {
  char *line = NULL;
  size_t line_len = 0;

  getline(&line, &line_len, stdin);

  return line;
}

/**
 * parse_args - Splits a line into arguments.
  * @param line The line to split.
 * @param argc The number of arguments.
  * @return: zero.
 */
char **parse_args(char *line, int *argc) {
  char **argv = NULL;
  int g = 0;

  argv = malloc(sizeof(char *) * (line_len + 1));
  for ( = 0; g < line_len; g++) {
    if (line[g] == ' ') {
      line[g] = '\0';
    }
  }
  argv[g] = line;
  argv[g + 1] = NULL;

  *argc = g + 1;

  return argv;
}
void execute_command(char **argv) {
  if (strcmp(argv[0], "exit") == 0) {
    exit(0);
  } else {
    execvp(argv[0], argv);
  }
}

int main(void) {
  char *line;
  char **argv;
  int argc;

    line = get_line();

    argv = parse_args(line, &argc);

  
  execute_command(argv);

 free(argv);

  return 0;
}
