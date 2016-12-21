/*
 *Merge sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */


#include<stdio.h>
#include<stdlib.h>

void mergeSort(int *,int);
void merge(int *,int *, int,int *,int);

void merge(int *array,int *leftArray,int totalNoOfElementsinLeftArray,int *rightArray,int totalNoOfElementsinRightArray)
{
    int i=0,j=0,k=0;
    
    while ((i < totalNoOfElementsinLeftArray) && (j < totalNoOfElementsinRightArray) )  //comparing the value from leftarray to rightarray
    {
        if(leftArray[i] < rightArray[j] )
        {
            array[k++] = leftArray[i++];   //updating the array
        }
        else
        {
            array[k++] = rightArray[j++];
        }
    }
    
    
    while (i<totalNoOfElementsinLeftArray)
    {
        array[k++] = leftArray[i++];
    }
    
    while (j<totalNoOfElementsinRightArray)
    {
        array[k++] = rightArray[j++];
    }
}

void mergeSort(int *array,int totalNoOfElements)
{
    if(totalNoOfElements < 2) return;
    
    int mid = totalNoOfElements/2;  //calculate the middle position of array
    
    int *leftArray, *rightArray;
    
    leftArray = (int *)malloc(mid * sizeof(int));  //allocating memory from heap for both leftarray and rightarray
    
    
    
    if(leftArray)
    {
        for(int i = 0; i < mid; i++)
        {
            leftArray[i] = array[i];
        }
    }
    else
    {
        printf("Memory allocation failed in left array\n");
    }
    
    rightArray = (int *)malloc((totalNoOfElements - mid)*sizeof(int));
    if(rightArray)
    {
        for(int i = mid; i < totalNoOfElements; i++)
        {
            
            rightArray[i-mid] = array[i];
        }
    }
    else
    {
        printf("Memory allocation failed in right array\n");
    }
    
    
    mergeSort(leftArray,mid);   //recusrsively call of left array and right array unitil it contains only one element
    mergeSort(rightArray,totalNoOfElements-mid);
    
    merge(array,leftArray,mid,rightArray,totalNoOfElements-mid);
    
    free(leftArray);
    free(rightArray);
    
}

int main()
{
    int array[] = {34,2,67,5,1};
    int totalNoOfElements = sizeof(array)/sizeof(int); //calculate the total number of elements in array list
    
    mergeSort(array,totalNoOfElements);
    
    printf("Sorted List:\n");
    for(int i = 0; i < totalNoOfElements; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    
    
    return 0;
}
