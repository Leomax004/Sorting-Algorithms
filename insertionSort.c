/*
 *Quick sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */

#include<stdio.h>

int main()
{
    int array[] = {7,2,89,8,1,5};
    
    for(int i = 1; i < sizeof(array)/sizeof(int); i++)
    {
        int var =  array[i];
        int pIndex = i;
        
        while(pIndex > 0 && array[pIndex-1] > var)
        {
            array[pIndex] = array[pIndex-1];
            pIndex--;
        }
        
        array[pIndex] = var;
        
    }
    printf("Sorted List:\n");
    
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        printf("%d\t",array[i]);
    }
    

return 0;
}
