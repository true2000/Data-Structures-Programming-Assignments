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
