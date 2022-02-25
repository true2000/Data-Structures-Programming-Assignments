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
