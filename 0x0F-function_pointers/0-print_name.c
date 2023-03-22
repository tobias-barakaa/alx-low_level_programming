#include <stdio.h>

#define print_name(x) (sizeof (x), printf("%s\n", #x))

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
	void print_name_standard(char *name) {
    printf("%s\n", name);
}

int main() {
    char *name = &name;
    print_name(name, print_name_standard);
    return 0;
}
