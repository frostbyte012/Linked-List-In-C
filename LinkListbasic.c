#include<stdio.h>
#include<malloc.h>
struct Node
{
	int data;
	struct Node *next;
};
void main()
{
	struct Node *new_node,*last,*temp,*head,*chemo;
	int choice,count=0,num,i=0,l=0;
    head=NULL;
	printf("\n Enter Your Choice \n");
	printf("\n 1.To Continue \n");
	printf("\n 2.To Stop \n");
	scanf(" %d",&choice);
	while(choice)
	{
        new_node=(struct Node*)malloc(sizeof(struct Node));
		printf("\n Enter Your Data \n");
		scanf(" %d",&new_node->data);
	    new_node->next=NULL;
	    if(head==NULL)
	    last=temp=head=new_node;
	    else
	    {
	    	temp->next=new_node;
	    	temp=new_node;
	        last=temp;
	    }count++;
	     last->next=NULL;
		printf("\n Do you wanna Continue (0,1)?\n");
		scanf(" %d",&choice);
	 } 
	  printf("\n Enter Your Choice \n");
      printf("\n 1 . Insert At Beginning \n");
      printf("\n 2 . Insert At End\n");
      printf("\n 3 . Insert At Any Position\n");
      printf("\n 4 . Delete At Beginning Position\n");
      printf("\n 5 . Delete At End Position\n");
	  printf("\n 6 . Delete At Any Position\n");
	  printf("\n Enter Your Choice \n");
      scanf(" %d",&choice);
      switch(choice)
     {
      	case 1:
      		   new_node=(struct Node*)malloc(sizeof(struct Node));
      		   printf("\n Enter Your Data \n");
		       scanf(" %d",&new_node->data);  
		       new_node->next=head;
		       temp=head=new_node;
		       l++;
		       break;
	     case 2:
      		   new_node=(struct Node*)malloc(sizeof(struct Node));
      		   printf("\n Enter Your Data \n");
		       scanf(" %d",&new_node->data);
		       last->next=new_node;
		       new_node->next=NULL;
		       last=new_node;
		       l++;
		       break;
		case 3:
      		   new_node=(struct Node*)malloc(sizeof(struct Node));
      		   printf("\n Enter Your Data \n");
		       scanf(" %d",&new_node->data);  
		       printf("\n Enter Your Position \n");
		       scanf(" %d",&choice);  
		       temp=head;
		       i=1;
			   while(i<choice-1)
		       {
		       	  temp=temp->next;
		       	  i++;
			   }  
		       new_node->next=temp->next;
		       temp->next=new_node;
		       l++;
			   break;
		case 4:
  				   temp=head;
		           head=head->next;
		           free(temp);
		           temp=head;
		           l--;
		           break;
	    case 5:    
	               chemo=temp=head;
				   while(temp->next!=NULL)
		           {
		           	  temp=temp->next;
		           	  if(temp->next!=NULL)
						 chemo=temp;   	  
				   }
				   free(temp);
		           last=chemo;
		           last->next=NULL;
				   l--;
		           break;
	    case 6:
			       chemo=temp=head;
		           i=1;
		           printf("\n Enter the Position\n");
		           scanf(" %d",&choice);
			       while(i<choice-1)
		           {
		       	    temp=temp->next;
		       	    i++;
			       }  
		           chemo=temp;
		           temp=temp->next;
			       chemo->next=temp->next;
		           free(temp);
		           l--;
			       break;
	    default:
			   printf("\n Sorry Wrong Choice!!! \n");
			   break;
		}
			       
   	 
	  temp=head;
	 printf("\n Data List : \n");
	 while(temp!=NULL)
	 {
	 	printf(" %d ",temp->data);
	 	temp=temp->next;
	 	
	 }
	 printf("\n The Number Of Data in the List %d \n",(count+l));
}

