#include <stdio.h>

int main() {
    short int i = 0;
    for (; ++i; i<=10)
    {
        printf("%hu\n",i);
    }
    
    return 0;
}
