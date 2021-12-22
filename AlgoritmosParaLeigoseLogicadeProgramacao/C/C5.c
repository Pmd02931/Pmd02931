//Create an algorithm to limit the minimum and maximum a tank level//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int vl;
    printf("Enter a present tank's volume: ");
    scanf("%d", &vl);
    if(vl>=1000){
        printf("Stop fillid");
    }else if(vl<=200){
        printf("Fill it");
    }else{
        printf("Perfect");
    }
}