#include<stdio.h>
#include<string.h>
#include<process.h>
struct book
{
    int book_no;
    char book_name[20];
    char Author_name[20];
};
int i,j,n;
struct book b[100];
void read()
{
    for(i=0;i<n;i++)
	{
        printf("\n Enter details of Books :%d",i+1);
        printf("\n----------------------------\n");
        printf("\n Enter Book No:");
        scanf("%d",&b[i].book_no);
        printf("\nEnter Book Name:");
        scanf("%s",&b[i].book_name);
        printf("\nEnter Author Name:");
        scanf("%d",&b[i].Author_name);
    }
}
void add_book()
 {
    printf("Enter New Book details\n");
    printf("\n...................\n");
    printf("\nEnter book_no:");
    scanf("%d",&b[i].book_no);
    printf("\nEnter book_name:");
    scanf("%s",&b[i].book_name);
    printf("\nEnter Author_name:");
    scanf("%d",&b[i].Author_name);
    fflush(stdin);
    gets(b[n].book_name);
    n++;	
 }
 void delete_book()
{
	int bk;
    if(n==0)
     printf("\nNo book...");
    else
	{
    for(i=0;i<n;i++)
	{
        if(bk==b[i].book_no)
		{
            for(j=i;j<n-1;j++)
               b[j]=b[j+1];    
        }
    }    
    n--;
   }
    
    for(i=0;i<n;i++)
	{
        printf("\n Book No:%d",b[i].book_no);
        printf("\nBook Name:%s",b[i].book_name);
        printf("\nAuthor Name:%s",b[i].Author_name);
    }
}
void display_book()
{
	int i;
    for(i=0;i<n;i++)
	{
        printf("\n Book No: %d\n",b[i].book_no);
        printf("\n Book Name : %s\n",b[i].book_name);
        printf("\n Author Name : %s\n",b[i].Author_name);
    }
}
void search_book()
{
	int book;
    printf("\n Enter book_no:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
	{
    if(book==b[i].book_no)
	  {
        printf("\nBook No :%d",b[i].book_no);
        printf("\nBook Name :%s",b[i].book_name);
        printf("\nAuthor Name :%d",b[i].Author_name);
      }
    }
}
int main()
{
    int ch,bk;
    printf("\n Enter limit:");
    scanf("%d",&n);
    read(n);
    do
	{
    printf("\n MENU\n********\n 1.Add Books\n 2.Display Books\n 3.Delete Books\n 4.Search Books\n 5.Exit\n Choose your option:");
    scanf("%d",&ch);
    switch(ch)
	{
        case 1:add_book ();
               break;
        case 2:display_book();
		       break;
	    case 3:printf("\nEnter Book no to delete:");
               scanf("%d",&bk);
               delete_book(bk);
               break;
        case 4:search_book();
               break;
        case 5:exit(0);
    }
    }
    while(1);
}
      
