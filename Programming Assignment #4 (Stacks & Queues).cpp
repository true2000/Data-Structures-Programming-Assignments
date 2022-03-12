/*
*********** Instructions ***********
Stacks & Queues
Along with the usual stack operations, you also need to implement some new ones. 
Like you may have to push given element 'n' times, or pop multiple times through a single function.

Input: The first line will contain one integer, q the number of queries. Next q lines follow.
Each line contains 5 types of queries:

Type 1: A single integer follows, which you have to push in the stack.
Type 2: Two space separated integers, n and x follow. You have to push the given element x, n times in the stack.
Type 3: You have to print(in a new line) and pop the top most element in stack.
Type 4: A single integer ‘n’ follows. You have to pop the top ‘n’ integers of the stack. Also print(in a new line) the sum of the popped elements.
Type 5: You have to simply print the sum of all the elements of the stack.
Note: In case of 'n'(the number of elements to be popped) being greater than the total number of elements in the stack, 
return the sum of elements present in the stack.

Sample Input:
9
1 4
2 3 3
3
4 2
5
4 4
3
2 4 2
5
Sample Output:
3
6
4
4
0
8

Explanation of output:
1) Push 4 in stack.
2) Push 3 three times in the stack.
3) Pop and print the top element (3).
4) Pop and print the sum of top 2 elements (6).
5) Print the sum of all the elements (4) in the stack.
6) Pop and print the sum of top 4 elements (4).
7) Pop and print the top element. The stack is empty so print the sum of all elements in the stack(0).
8) Push 2 four times in the stack.
9) Print the sum of all the elements (8) in the stack.
************************************
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
   int numQ;
   stack<int> stack,newStack;

   scanf("%d", &numQ);
   
   for(int x = 0; numQ>x; x++){
      int type; 
      int temp[3];
      
      int y = 0;
      do {
        scanf("%d", &temp[y++]);
      } while (getchar() != '\n' && y < 3);
      
      type = temp[0];
      
      int sumStack=0;
      int sum=0;
      switch(type){
         case 1:
            stack.push(temp[1]);
            break;
         case 2:
            for(int i = 0;temp[1]>i;i++){
               stack.push(temp[2]);
            }
            break;
         case 3:
            printf("\n%d",stack.top());
            stack.pop();
            break;
         case 4:
            
            for(int i = 0; temp[1]>i;i++){
               sum+=stack.top();
               stack.pop();
               if(stack.size() == 0){
                  stack.push(0);
               }
            }
            printf("\n%d", sum);
            break;
         case 5:
            newStack = stack;
            
            while (!newStack.empty()) {
               sumStack+=newStack.top();
               newStack.pop();
            }
            printf("\n%d", sumStack);
            break;
      }
   }

   return 0;
}
