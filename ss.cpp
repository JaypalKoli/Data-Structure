#include <stdio.h>

int main()

{
    int i,j,k,n,temp,small,a[10];
    printf("\n Enter how many element to sort");
    scanf("%d",&n); 
	printf("Enter the element");
	
  for(i=0;i<n;i++)  
  scanf("%d",&a[i]); 
   
  for(i=0;i<n;i++)
    {
        printf("\n");
        small=i;
        
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[small])
                small=j;
        }
        
        temp=a[i];
        a[i]=a[small];
        a[small]=temp;
        for(k=0;k<n;k++)
            printf("%5d",a[k]);
    }
    
    return 0;
}

