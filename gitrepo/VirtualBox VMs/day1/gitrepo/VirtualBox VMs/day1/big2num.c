#include<stdio.h>
int greater(int x, int y){
    return (x > y) ? x : y;
}
int x , y;
int greater(x,y){
    if(x > y){
        return x;
    }
    else {
        return y;
    }
}