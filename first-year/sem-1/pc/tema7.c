#include <stdio.h>

void citire(int *v,int n)
{
  for(int i=0;i<n;i++)
    {
      printf("v[%d] = ",i);
      scanf("%d",v+i);
    }
}


void afisare(int *v,int n)
{
  for(int i=0;i<n;i++)
    printf("v[%d] = %d\n",i,*(v+i));
}

void ex8(int *v,int n)
{
  for(int i=0;i<n;i++)
    if(*(v+i)%2==0)
      {
	for(int j=i;j<n;j++)
	  *(v+j)=*(v+j+1);
	n--;
	i--;
      }
    for(int i=0;i<n;i++)
    printf("v[%d] = %d\n",i,*(v+i));
}

void ex9(int *v,int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=n;j>i;j--)
	*(v+j)=*(v+j-1);
      *(v+i)=-*(v+i+1);
      n++;
      
    }

    for(int i=0;i<n;i++)
      printf("v[%d] = %d\n",i,*(v+i));
}

void ex10(int *v,int n)
{
  int copie=0;
  int cifre[10]={0,0,0,0,0,0,0,0,0,0};
  for(int i=0;i<n;i++)
    {
      copie=*(v+i);
      int cifre[10]={0,0,0,0,0,0,0,0,0,0};
      while(*(v+i))
	{
	  int x=(*(v+i)%10);
	  (*(cifre+x))++;
	  (*(v+i))/=10;
	}
      for(int j=0;j<10;j++)
	if(*(cifre+j)>1)
	  { printf("%d\n",copie);
	    break;}
	
    }
}

void ex11(int *v)
{
  int x=0,i=0,y=0,n=0;
  printf("1.Citire \n2.Afisare \n3.Stergere \n4.Iesire\n");
	 scanf("%d",&x);
	 while(x!=4)
	   {
	     if(x==1)
	     {
	       printf("v[%d] = ",i);
	       scanf("%d",v+i);
	       i++;
	       n++;
	         scanf("%d",&x);
	     }
	     else if(x==2)
	     {
	       for(int j=0;j<n;j++)
		 printf("v[%d] = %d\n",j,*(v+j));
	       scanf("%d",&x);
	     }
	     else if(x==3)
	     {
	       printf("valoare pe care vreti sa o stergeti: ");
	       scanf("%d",&y);
	       for(int j=0;j<n;j++)
		 if(*(v+j)==y)
		   {
		     for(int k=j-1;k<n;k++)
		       *(v+k-1)=*(v+k);
		     n--;
		     j--;
		     i--;
		   }
	       scanf("%d",&x);
	     }
	     	      
	   }
}

void ex12(int *v)
{
  int x=0,i=0,n=0,aux=0;
  scanf("%d",&x);
  while(x!=0)
    {
      (*(v+i))=x;
      i++;n++;
      for(int j=0;j<n;j++)
	for(int k=j+1;k<n;k++)
	  {
	    if(*(v+k)<*(v+j))
	      {
		aux=*(v+k);
		(*(v+k))=(*(v+j));
		(*(v+j))=aux;
	      }
	  }
      for(int j=0;j<n;j++)
	printf("v[%d] = %d\n",j,*(v+j));
	
      scanf("%d",&x);
    }
}

int main (void)
{
  int v[100];
  ex12(v);
  return 0;
}
