#include <stdio.h>

#ifndef AX
#define AX
#include "ax.h"
#endif
//extern int gl;
int main(){
extern const int gl;
func();
printf("global var gl: %d\n",gl);


return 0;
}
