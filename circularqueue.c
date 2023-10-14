#include <stdio.h>

int queue[100],rear=-1,front=-1,choice,size,value,i;

void enqueue();
void dequeue();
void display();
void main() {
	printf("CIRCULAR QUEUE");
	
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
	if(rear==size-1){
		printf("queue overflow\n");
	}
	else{
		if(front==-1){
			printf("enter the element to be inserted: ");
			scanf("%d",&value);
			front++;
			rear++;
			queue[rear]=value;
		}

	}
}
void dequeue(){
	if(front==rear){
		printf("queue underflow\n");
	}
	else{
	    if(front==rear){
	        //queue[front]=NULL;
	        front=rear=-1;
	    }
	    else{
	        //queue[front]=NULL;
	        front++;
	    }
	}
}
void display(){
    if(rear==-1){
        printf("queue is empty !!!");
    }
    else{
        printf("the entered elements are: \t");
	    for(i=0;i<=rear;i++){
		    printf("%d \t",queue[i],"\n");
	}
    }
}
