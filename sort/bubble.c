#include <stdio.h> 
//#include <../cpp/gtest/gtest.h>
void BubbleSort(int arr[],int Length){
    int left =0;
    int right = 0;
    int temp;
    for (left = 0; left < Length-1; left ++){

        for (right =0; right < Length-(left +1); right ++){
            if (arr[right] >arr[right+1]){
                temp  =  arr[right+1];
                arr[right+1] = arr[right];
                arr[right] = temp; 
            }
        }
    }


}


 
int main( void ) 
{ 
    int DataSet[] = {6, 4, 2, 3, 1, 5}; 
		int ExpectData[] = {1,2,3,4,5,6};

    int Length = sizeof DataSet / sizeof DataSet[0];     
    int i = 0; 
 
    BubbleSort(DataSet, Length); 
 
    for ( i=0; i<Length; i++ ) 
    { 
        printf("%d ", DataSet[i]); 
		//EXPECT_EQ(ExpectData[i], DataSet[i]);
    } 
 
    printf("\n"); 
 
    return 0; 
}

