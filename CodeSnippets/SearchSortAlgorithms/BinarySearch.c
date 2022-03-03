#include <stdio.h>
#include <string.h>


int main(){
    int val = 43;
    int arr[] = {3, 5, 13, 43, 655, 872};//Our array to search through
    int left = 1;
    int right = strlen(arr);//Calc length of array(6 cells, 0 - 5)
    while (left != right){//Self explanatory, while left is not equal to right
        int mid = (left + right) / 2;//Calculate mid by dividing the sum of left and right by 2
        
        /*
        Small chunk of code, but it does most of the work here
        IF - if the variable val is less than or equal to the midpoint of the array
        assign the variable mid to variable right
        
        ELSE - assign left with the total of mid + 1.
        
        This loop continues until the desired number is found, e.g 13*/
        if (val <= arr[mid]){
            right = mid;
        } else{
            left = mid += 1;
        }
    }
}