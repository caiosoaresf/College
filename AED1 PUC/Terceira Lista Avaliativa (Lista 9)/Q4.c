#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ArraySub(int arr4yA[10], int arr4yB[10]){
    int arrayC[10];
    for(int i = 0; i < 10; i++){
        arrayC[i] = arr4yA[i] - arr4yB[i];
        printf("%d\n", arrayC[i]);
    }
}

int main()
{
    int arrayA[10];
    int arrayB[10];
    int num;
    
    for (int i = 0; i < 10; i++){
        printf("Insert the value for A: ");
        scanf("%d", &num);
        arrayA[i] = num;
        printf("Insert the value for B: ");
        scanf("%d", &num);
        arrayB[i] = num;
    }
  
    ArraySub(arrayA,arrayB);
    return 0;
}
