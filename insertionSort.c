/* insertionSort.cpp : Defines the entry point for the console application.
 * check below link to get intuitive feelings:
 * http://www.algolist.net/Algorithms/Sorting/Insertion_sort
 * */
#include "stdio.h"

void insertionSort(int arr[], int length) {
      int i, j, tmp;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
}

int main(int argc, char* argv[])
{
    int i,k,n;
    n=5;
    int array[5];
    printf("bubble sort algorithom ,array with 6 items: ");
    for(i=0; i<n; i++) {
        printf("please input array[%d] value: ",i);
        scanf("%d",&k);
        array[i]=k;
    }
    //打印排序前内容
    printf("current array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    //排序
    insertionSort(array,n) ;

    //打印排序后内容
    printf("sorted array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
