/*
*********** Instructions ***********
Linked Lists

You are given a linked list that contains N integers. You are to perform the following reverse operation on the list:

Select all the subparts of the list that contain only even integers. For example, if the list is {1,2,8,9,12,16}, 
then the selected subparts will be {2,8}, {12,16}. Reverse the selected subpart such as {8,2} and {16,12}. The list should now be {1,8,2,9,16,12}.

Your node definition should consist of 2 elements: the integer value and a pointer to a node.

Sample Input:
9
2 18 24 3 5 7 9 6 12

Sample Output:
24 18 2 3 5 7 9 12 6
************************************
*/

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
