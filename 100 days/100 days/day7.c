#include <stdio.h>
void updatevalue(int*y){
*y=*y+10
}
int main() {
    int x=50
    printf("beofre function call:%d\n",x)
    updatevalue(&x);
    printf("after fucntion call: %d\n",x)
    return 0;
}
