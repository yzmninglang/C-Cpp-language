#include <stdio.h>
#include <stdlib.h>

struct mystruct {
        int i;
        char s[14];
        };
int main(void)
{
struct mystruct *p;
size_t siz;

siz = sizeof p;
printf("Sizeof p := %zu\n", siz);

siz = sizeof *p;
printf("Sizeof *p := %zu\n", siz);

printf("Allocating %zu (%u structs, each of size %zu) bytes to be assigned to p...\n"
        , 10u * sizeof *p
        , 10u, sizeof *p
        );
p = malloc(10 * sizeof *p);

return 0;
}
