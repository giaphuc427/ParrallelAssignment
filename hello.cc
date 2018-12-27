#include <stdio.h>
int main(int argc, char * argv[] ) {
printf("Hello World from host!\n");
#pragma offload target(mic)
{
printf("Hello World from coprocessor!\n"); fflush(0);
}
printf("Bye\n");
}