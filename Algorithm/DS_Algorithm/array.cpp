#include<iostream> 
using namespace std;
int binarySearch(int arr[], int p, int r) {
   int num = arr[p];
   cout<< num <<" ___________ \n";
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;

      num = num + 1;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r);
   }
   return -1;
}
int main(void) {
   int arr[] = {4, 5, 6, 7, 8, 9, 10, 11, 16, 19};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num = 5;
   int index = binarySearch (arr, 0, n-1);
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present at index "<< index <<" in the array";
   }
   return 0;
}