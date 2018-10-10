#include <stdio.h>

int stack[20];
int head = -1;

void push(int data){
if(head ==20)
{
printf("Your stack is Full \n");
}
else{

head++;
stack[head] = data;}
}

int pop(){
if(head==-1)
{
printf("Your stack is Empty \n");
}
else{
int data = stack[head];
head--;
return data;}

}

void printstack(){

       if(head==-1)
      {
        printf("Your stack is Empty \n");
      }
    else{
    int i;
    printf("Data in your stack\n");
    for(i=0;i<=head;i++)
    {
            printf("%d ",stack[i]);
    }
    }


}

void main()
{
    push(5);
    push(7);
    push(10);
    printstack();
    int data = pop();
    printf("\nyour pop data %d \n",data);
    printstack();
}
