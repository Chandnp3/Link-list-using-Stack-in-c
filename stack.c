// Implementation of Stack in Link list
#include<stdio.h>
#include<stdlib.h>
# define size 5
int stack[size];
int top =-1;
void push(int x);
void pop();
void display();
int main(){
	int x, ch;
	while(1){
		printf("\n........Stack Implementaion...........");
		printf("\n1.Push \n2. Pop \n3. Dispaly \n4. Exit");
		printf("\n Enter the choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\n Enter the Value of X ");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}
void push(int x){
	if (top == size-1){
		printf("\nStack is Over Flow");
	}
	else{
		top =top+1;
		stack[top]=x;
		printf("\n%d is inserted");
	}
}
void pop(){
	if (top == -1){
		printf("\n Stack is Empty");
	}
	else{
		int x;
		x = stack[top];
		top =  top-1;
		printf("\n %d is Deleted",x);
	}
}
void display(){
	if( top== -1){
		printf("Stack is Empty");
	}
	else{
		int i;
		printf("\n Stack Element are :\n");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
