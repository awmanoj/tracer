#include <stdio.h>

void print_string(char *s) {
    printf("%s\n", s);
}

int main(int argc, char **argv, char **envp) {
    print_string("Hello 1");
    print_string("Hello 2");
}

