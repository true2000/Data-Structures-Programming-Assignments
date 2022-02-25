#include <iostream>
using namespace std;

int SelectionSort(long int* list,int listSize){
   int newListSize=1000;
   long int newList[newListSize];
   for(int i=0;i<listSize;i++){
    if(list[i]%2!=0)
      printf("%ld ",list[i]);
    else
    {
      newListSize=0;
      int tempI = i;
      while(1)
      {
        newList[newListSize]=list[i];
        newListSize++;
        i++;
        if(list[i]%2!=0||i==listSize)
         break;
      }
      for(int x = newListSize-1;x>=0;x--){
        tempI++;
        printf("%ld",newList[x]);
        if(tempI!=listSize)
           printf(" ");
      }
      i--;
    }
  }
   return 0;
}

int main() {
   int listSize = 1000;
   scanf("%d", &listSize);

   int i = 0;
   long int list[listSize];

    do {
        scanf("%ld", &list[i++]);
    } while (getchar() != '\n' && i < listSize);
    
   SelectionSort(list, listSize);
   
   return 0;
}
