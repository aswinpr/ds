
#include <stdio.h>

int queue[100],rear=-1,front=-1,choice,size,value,i;

void enqueue();
void dequeue();
void display();
void main() {
	printf("circular queue");
	printf("enter the size of array:");
	scanf("%d",&size);

	printf("select the operation to perform\n");
	do{
		printf("\n1.enqueue\n2.dequeue\n3.display\n");
		scanf("%d",&choice);

			switch(choice){
							case 1: enqueue();
									break;
							case 2: dequeue();
									break;
							case 3: display();
									break;
							default: printf("invalid choice!");
									break;

			}
	}while(choice!=4);

}
void enqueue(){
	if(front==0 && rear== size-1 || (rear+1)%size==front){
		printf("queue overflow\n");
	}
	else if(front==-1){
			printf("enter the element to be inserted: ");
			scanf("%d",&value);
			front++;
			rear++;
			queue[rear]=value;
	}
	else{
	    	printf("enter the element to be inserted: ");
			scanf("%d",&value);
			rear=rear+1%size;
			queue[rear]=value;
	}
}
void dequeue(){
	if(front==-1){
		printf("queue underflow\n");
	}
	else{
	    if(front==rear){
	        queue[front]=NULL;
	        front=rear=-1;
	         printf("the elememt is deleted");
	    }
	    else{
	        queue[front]=NULL;
	        front++;
	         printf("the elememt is deleted");
	    }
	}
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty !!!");
        return;
    }
    if(rear == size-1)
    {
        printf("the entered elements are: \t");
	    for(i=front;i<=rear;i++)
		    printf("%d \t",queue[i],"\n");
	}
	else if(front > rear)
	{
	      printf("the entered elements are: \t");
	      for(i = front; i<size;i++)
	        printf("%d \t",queue[i],"\n");
          for(i = 0; i<=rear;i++)
	        printf("%d \t",queue[i],"\n");
	}
}

