#include <stdio.h>

int main()
{
    int arr1[20], arr2[20];
    int i, n1, n2, ins1, ins2, del1, del2;
    
    printf("Введите размер первого множества:");
    scanf("%d", &n1);
    printf("Введите размер второго множества:");
    scanf("%d", &n2);
    
    printf("Введите элементы первого множества:\n");
    for (i=0; i<n1; i++){
        printf("arr1[%d]= ", i);
        scanf("%3d", &arr1[i]);
    }
    
    printf("Введите элементы второго множества:\n");
    for (i=0; i<n2; i++){
        printf("arr2[%d]= ", i);
        scanf("%3d", &arr2[i]);
    }
    
    printf("Если хотите добавить новый элемент первого множества, введите 1, иначе 0:");
    scanf("%d", &ins1);
    printf("Если хотите удалить элемент первого множества, введите 1, иначе 0:");
    scanf("%d", &del1);
    
    if(ins1==1){
        i=n1;
        while (i>0){
            arr1[i] = arr1[i-1];
            i--;
        }
        printf("Введите новый элемент: ");
        scanf("%3d", &arr1[0]);
    }
    if (del1==1){
        if (ins1==0){
            i=0;
            while(i<n1){
            arr1[i] = arr1[i+1];
            i++;
        }
        }else if(ins1==1){
            arr1[0]=0;
        }
    }
    
    printf("Если хотите добавить новый элемент второго множества, введите 1, иначе 0:");
    scanf("%d", &ins2);
    printf("Если хотите удалить элемент второго множества, введите 1, иначе 0:");
    scanf("%d", &del2);
    
    if(ins2==1){
        i=n2;
        while (i>0){
            arr2[i] = arr2[i-1];
            i--;
        }
        printf("Введите новый элемент: ");
        scanf("%3d", &arr2[0]);
    }
    
    if (del2==1){
        if (ins2==0){
            i=0;
            while(i<n2){
            arr2[i] = arr2[i+1];
            i++;
        }
        }else if(ins2==1){
            arr2[0]=0;
        }
    }
    
        printf("arr1 = ");
        for (i=0; i<n1+ins1; i++){
            printf("%3d", arr1[i]);
        }
        printf("\narr2 = ");
        for (i=0; i<n2+ins2; i++){
            printf("%3d", arr2[i]);
        }
    
}
