#include <stdio.h>

int main(){
  int arr[20], brr[20];
  int i, p1, g1, n1, num1, ins, ins1, del1;
  int p2, g2, ins2, del2, n2, k2, num2; 
  
  k1=0;
  printf("размер\t");
  scanf("%d", &n1);
  
  for(i=0; i<n1; i++){
    printf("arr[%d]=", i);
    scanf("%d", &arr[i]);
  }

  printf("количество элементов на удаление\t");
  scanf("%d", &del1);
  printf("количесвто элементов на добавление\t");
  scanf("%d", &ins1);

    while(del1>0){
      printf("номер элемента на удаление:\t");
      scanf("%d", &num1);
      arr[num1]=0;
      del1--;
    }

    while(ins1>0){
      printf("значение добавляемого элемента:\t");
      scanf("%d", &ins);
      k1++;
      arr[n1+k1-1]=ins;
      ins1--;
    }

  k2=0;
  printf("размер 2\t");
  scanf("%d", &n2);
  
  for(i=0; i<n2; i++){
    printf("brr[%d]=", i);
    scanf("%d", &brr[i]);
  }

  printf("количество элементов на удаление 2\t");
  scanf("%d", &del2);
  printf("количесвто элементов на добавление 2\t");
  scanf("%d", &ins2);

    while(del2>0){
      printf("номер элемента на удаление:\t");
      scanf("%d", &num2);
      brr[num2]=0;
      del2--;
    }

    while(ins2>0){
      printf("значение добавляемого элемента:\t");
      scanf("%d", &ins);
      k2++;
      brr[n2+k2-1]=ins;
      ins2--;
    }

  
  for(i=0; i<n1+k1; i++){
    if(arr[i]!=0){
      printf("arr[%d]=%2d ", i, arr[i]);
    }  
  }

  printf("\n");
  for(i=0; i<n2+k2; i++){
    if(brr[i]!=0){
      printf("brr[%d]=%2d ", i, brr[i]);
    }  
  }
}
