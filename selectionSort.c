/*
 *Selection sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */

#include<stdio.h>
#include<stdlib.h>

#define Max 1000;

int main()
{
    int array[] = {34,2,6,40,8};
    int totalNoOfElements = sizeof(array)/sizeof(int);
    int *sortedElements;
    
    sortedElements = (int *)malloc(totalNoOfElements * sizeof(int));
    
    int Indexmin ;
    int temp;
    
    for(int i = 0; i < totalNoOfElements; i++)
    {
        Indexmin = i;
        
        for(int j = i+1; j < totalNoOfElements; j++)
        {
            if(array[Indexmin] > array[j])
            {
                Indexmin = j;
            }
        }
        
        if(Indexmin != i)
        {
            //swap
            temp = array[Indexmin];
            array[Indexmin] = array[i];
            array[i] = temp;
            
        }
        
        
        
    }
    
    printf("sorted List\n");
    for(int i = 0; i < totalNoOfElements; i++)
    {
        printf("%d\t",array[i]);
    }
    
    printf("\n");
    
    
    

return 0;
}
