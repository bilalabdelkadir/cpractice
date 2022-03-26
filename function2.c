#include <stdio.h>

int findmax(int x, int y){
    return (x>y) ? x: y;
}
int findmin(int x, int y){
    return (x<y) ? x: y;
}

int main(){
    int x = 98;
    int y = 34;
    int max = findmax(x,y);
    int min = findmin(x,y);
    printf("%d\n",max);
    printf("%d",min);
    return 0;
}