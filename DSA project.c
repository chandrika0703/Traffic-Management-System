#include<stdio.h>
int Queue[50],n,rare=-1,front=-1,choice;
void Entry();
void Exit();
void check_status();

void main()
{
printf("Enter the number of vehicles in a Queue near signal:");
scanf("%d",&n);
while(choice!=5)
{
printf("\n***Traffic Management system***\n");
printf("\n1.Entry of the vehicle\n2.Exit of the vehicle\n3.Checking the status of traffic\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
Entry();
break;
case 2:
Exit();
break;
case 3:
check_status();
break;
case 4:
exit(0);
break;
default:
printf("Enter valid choice!\n");
}
}
}

void Entry()
{
int vehicle_no;
if(rare==n)
{
printf("Full Traffic\n");
}
else
{
if(front=-1)
front=0;
printf("Enter the vehicle number:");
scanf("%d",&vehicle_no);
rare+=1;
Queue[rare]=vehicle_no;
printf("Vehicle is entered into the queue near signal\n");
}
}

void Exit()
{
if(front==-1)
{
printf("No vehicle to exit\n");
}
else
{
front+=1;
printf("\nRed signal....!\nVehicle is exited\n");
}
}

void check_status()
{
int i;
printf("\nChecking the status of Traffic....\nRemaining vehicles in traffic\n");
for(i=front;i<=rare;i++)
{
printf("%d\n",Queue[i]);
}
}

