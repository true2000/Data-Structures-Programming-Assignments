*********** Instructions ***********
Binary Search

A boy goes to buy video games from a shop.The shop contains N unique video games.The prices of the games are given in the form of an array A.
The price of ith games is A[i].Now the boy has q queries, in each query he wants to know the number of unique games that have a price less than the given amount M.

Input:

The first line contains an integer N total number of unique video games available in the shop.
The second line contains N space - separated integers(the price of the games).
The third line contains Q number of queries.
Each of the next Q lines contains integer M.

Output:
For each query output number of games having price less than M for that query.

Sample Input :

5
1 4 10 5 6
4
2
3
5
11

Output for the sample input :

1
1
2
5

************************************

#include <iostream>
using namespace std;

int main() {
   
   int gameSize = 0;
   int i = 0;
   scanf("%d", &gameSize);

   int inputArray[gameSize];
   
   do{
       scanf ("%d", &inputArray[i++]);
   }while (getchar() != '\n' && i < gameSize);
   
   int numQ = 0;
   
   scanf("%d", &numQ);
   
   int lessThan[numQ];
   
   for (int i = 0; i < numQ; i++) {
      int queryPrice = 0;
      scanf("%d", &queryPrice);
      lessThan[i] = queryPrice;
   }
   printf("\n");
   for(int i = 0; i<numQ; i++){
      int currentQ = lessThan[i];
      int totalGames = 0;
      for(int i = 0; i<gameSize; i++){
         int gamePrice = inputArray[i];
         if(currentQ>gamePrice){
            totalGames+=1;
         }
      };
      
      printf("%d\n", totalGames);
   };
   

   return 0;
}
