/*
 *Bubble sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[] = {3,2,5,1,8,9};
    int totalNoOfElements = sizeof(array)/sizeof(int);
    int temp;
    
    for(int i = 0; i < totalNoOfElements; i++)
    {
        for(int j = i+1; j < totalNoOfElements; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("sorted List:\n");
    for(int i = 0; i < totalNoOfElements; i++)
    {
        printf("%d\t",array[i]);
    }
    
    

return 0;
}


