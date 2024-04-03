#include "stdio.h"

int main (void){

    int height;
    do 
    {
        printf("How high? ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for(int row=0; row < height; row++)
    {
        for(int spaces=0; spaces < height - row - 1; spaces++){
            printf(" ");
        }
        for(int column=0; column<=row; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}
