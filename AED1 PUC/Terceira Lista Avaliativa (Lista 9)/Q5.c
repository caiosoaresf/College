#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void FillValues(int arr4y[10]){
    int num;
    for(int i = 0; i < 10; i++){
        printf("Insert the value for the array: ");
        scanf("%d", &num);
        arr4y[i] = num;
    }
}

void CopyNegatives(int arr4y[10]){
    int arrayN[10];
    for(int i = 0; i != "\0"; i++){
        if (arr4y[i] < 0){
            arrayN[i] = arr4y[i];
            printf("%d", arrayN[i]);
        }
    }
}

int main()
{
    int arrayX[10];
    FillValues(arrayX);
    CopyNegatives(arrayX);
    return 0;
}
