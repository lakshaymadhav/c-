#include<iostream.h>
#include<conio.h>
struct odd
{
int data;
struct odd  *next;
};

struct even
{
int info;
struct even *nex;
};

class list
{
    private:
odd *head;
even *hea;
    public:
    list()
    {
	head=NULL;
	hea=NULL;
    }

    void displayodd()
    {
	struct odd *temp;
	if(head!=NULL)

	for(temp=head;temp!=NULL;temp=temp->next)
	{
	cout<<temp->data<<"\t";
	}
	else
	cout<<"there are no elements in odd\n";


    }

    void displayeven()
    {
	struct even *temp;
	if(hea!=NULL)

	for(temp=hea;temp!=NULL;temp=temp->nex)
	{
	cout<<temp->info<<"\t";

	}
	else
	cout<<"there are no elements in even\n";


    }

    void createodd(int value)
    {
	odd *temp=new odd;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
	    head=temp;
	    temp=NULL;
	}
	else
	{
	    head->next=temp;


	}
    }

    void createeven(int value)
    {
	even *temp=new even;
	temp->info=value;
	temp->nex=NULL;
	if(hea==NULL)
	{
	    hea=temp;
	    temp=NULL;
	}
	else
	{
	   hea->nex=temp;
	}

    }

};

main()
{ clrscr();
  list l;
  int tot,j;
  cout<<"enter total number\n";
  cin>>tot;
  for(int k=0;k<tot;k++)
  {
  cout<<"enter a number\n";
  cin>>j;
  if((j%2)==0)
  {
   l.createeven(j);
  }
  else
  {
      l.createodd(j);
  }
  }
  cout<<"the odd numbers are\n";
  l.displayodd();
  cout<<"\n the even numbers are\n";
  l.displayeven();
  getch();

}
