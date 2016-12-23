/*
 *Quick sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */


#include<stdio.h>

void quickSort(int *,int ,int);
int partition(int *,int ,int );



int main()
{
    int array[] = {2,89,34,3,6,8,54,20};
    int lastIndex = (sizeof(array)/sizeof(int))-1;
    int startIndex = 0;
    
    quickSort(array,startIndex,lastIndex);
    
    printf("Sorted List:");
    for(int i = 0; i <= lastIndex; i++)
    {
        printf("%d\t",array[i]);
    }
    
    printf("\n");
    return 0;
}


int partition(int *array,int startIndex,int lastIndex)
{
    
    int pivot = array[lastIndex];
    int temp;
    int partitionIndex = startIndex;
    for(int i = 0; i <= lastIndex; i++)
    {
        if(array[i] <= pivot)
        {
            //swap
            temp = array[i];
            array[i] = array[partitionIndex];
            array[partitionIndex] = temp;
            
            partitionIndex++;
            
        }
    }
    //swap the pivot with the element at partitionIndex
    temp = array[partitionIndex];
    array[partitionIndex] = array[lastIndex];
    array[lastIndex] = temp;
    
    return partitionIndex;
}


void quickSort(int *array,int startIndex,int lastIndex)
{
    if(startIndex < lastIndex)
    {
        int pivotIndex = partition(array,startIndex,lastIndex);
        
        quickSort(array,startIndex,pivotIndex-1);
        
        quickSort(array,pivotIndex+1,lastIndex);
    }
    
}
