*********** Instructions ***********
Sorting

Riverfield Country Day School will be hosting its Prom Night tonight.There would be M boys and N girls at the prom tonight. 
Each boy wants to dance with a girl who is strictly shorter than him. A girl can dance with only one boy and vice-versa. 
Given the heights of all the boys and girls tell whether it is possible for all boys to dance with a girl.

Input: The first line contains T denoting the number of test cases. Each test case contains three lines. 
The first line contains M and N. 
The second line contains M integers each denoting the height of boy. 
The third contains N integers each denoting the height of girl.

Output: Print YES if it is possible for each boy to dance with a girl else print NO.

Sample input:

1
4 5
2 5 6 8
3 8 5 1 7
Output from sample input:

YES

************************************

#include <iostream>
using namespace std;

int BinarySearch(int array[], int array2[], int maleSize, int femaleSize) {
   int g = 0;
        for (int x = 0; x < maleSize; x++) {
           for (int f = 0; f < femaleSize; f++) {
                 if(array[x]>array2[g]){
                    g++;
                    break;
                 }else{
                    return -1;
                 }
            }
         }
         return 0;
      } 
int main() {
   int testCase = 0;
   scanf("%d", &testCase);
   
   for(int x = 0; x < testCase; x++){
      int maleSize = 1;
    int femaleSize = 1;
    int key = 0;
    scanf("%d %d", &maleSize, &femaleSize);


    int i = 0;
    int maleArray[maleSize];

    do {
        scanf("%d", &maleArray[i++]);
    } while (getchar() != '\n' && i < maleSize);

    //sort array
    for (i = 0; i < maleSize; i++)
    {
        for (int j = i + 1; j < maleSize; j++)
        {
            if (maleArray[j] < maleArray[i])
            {
                int tmp = maleArray[i];
                maleArray[i] = maleArray[j];
                maleArray[j] = tmp;
            }
        }
    }

    i = 0;
    int femaleArray[femaleSize];

    do {
        scanf("%d", &femaleArray[i++]);
    } while (getchar() != '\n' && i < femaleSize);

    //sort array
    for (i = 0; i < femaleSize; i++)
    {
        for (int j = i + 1; j < femaleSize; j++)
        {
            if (femaleArray[j] < femaleArray[i])
            {
                int tmp = femaleArray[i];
                femaleArray[i] = femaleArray[j];
                femaleArray[j] = tmp;
            }
        }
    }

    key = BinarySearch(maleArray, femaleArray, maleSize, femaleSize);
        if (key == -1) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
   }
}
