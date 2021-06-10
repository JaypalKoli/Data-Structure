#include<stdio.h>
int queue[5];
int front=0;
int rear=0;

void addq()
{
    int num;
    if(((rear+1)%5)==front)
    {
        printf("\nCircular Queue is full");
    }
    else
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);
        queue[rear]=num;
        printf("\n%d added at %d position \n",num,rear);
        rear=(rear+1)%5;
    }
}
void delq()
{
    int a;
    if(front==rear)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        a=queue[front];
        printf("\n%d deleted from %d position",a,front);
        front=(front+1)%5;
    }
}
void displayq()
{
    int i;
    if(front==rear)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\n\nContent of the queue are: \n");
        if(front<rear)
        {
        	for(i=front;i<rear;i++)
        	{
        		printf("\n%d",queue[i]);
			}
		}
		else
		{
			for(i=front;i<5;i++)
			{
				printf("\n%d",queue[i]);
			}
		}
    }
}
int main()
{
	int i, num, menuselect;
	printf("\nProgram for circular queue using array");
	do
	{
		printf("\nMain menu: \n1)Add element\n2)Delelte element\n3)Display element\n4)Exit\n");
		printf("\nSelect menu: ");
		scanf("%d",&menuselect);
		
		switch(menuselect)
		{
			case 1: addq();
			       break;
			case 2: delq();
			       break;
			case 3: displayq();
			       break;
		    case 4: printf("\nExit from program");
		           break;
		    defualt:printf("\nInvalid menu item");
		}
	}while(menuselect!=4);
}
