/*
 *Heap sort Algorithm in c
 *Please feel free to ask any question at parvesh.singh004@gmail.com
 */


#include<stdio.h>
#include<stdlib.h>


int main()
{
    int array[] = {34,102,67,45,200,7};
    
    int root,c,temp;
    
    for(int i = 1; i < sizeof(array)/sizeof(int); i++ )
    {
        c = i;
        
        do
        {
            root = (c - 1)/2;
            
            if(array[root] < array[c])
            {
                temp = array[c];
                array[c] = array[root];
                array[root] = temp;
            }
            
            c = root;
            
        }while (c!=0);
    }

    
    for(int i = (sizeof(array)/sizeof(int))-1; i >= 0 ; i--)
    {
        //swap the right most element with max  value
        
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        
        root = 0;
        do
        {
            c = 2 * root + 1;   //left node of root element
            
            if(array[c] < array[c+1] && c < i-1)
            {
                c++;
            }
            
            if(array[root] < array[c] && c<i)
            {
                temp = array[root];
                array[root] = array[c];
                array[c] = temp;
                
                
            }
            
            root = c;
            
            
        } while (c<i);
        
        
    }
    printf("Sorted List:");
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        printf("%d\t",array[i]);
    }
    
    printf("\n");
    return 0;
}


