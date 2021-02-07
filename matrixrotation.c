/*
3
3
1
2
3
4
5
6
7
8
9
   1   2   3
   4   5   6
   7   8   9
90 deg rotation of matrix
   3   6   9
   2   5   8
   1   4   7


180 deg rotation of matrix
   9   8   7
   6   5   4
   3   2   1


270 deg rotation of matrix
   7   4   1
   8   5   2
   9   6   3


360 deg rotation of matrix
   1   2   3
   4   5   6
   7   8   9



*/
#include<stdio.h>
void rotate(int ,int);
void copyb(int ,int );
void copya(int ,int );
void reverse(int ,int );
 void displaya(int ,int );
int a[20][20],b[20][20];
int main()
{
  int i,n,m,j;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
   for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
 for(i=0;i<n;i++)
  { for(j=0;j<m;j++)
     printf("%4d",a[i][j]);
   printf("\n");
  }
 for(i=1;i<=4;i++)
 {
   printf("%d deg rotation of matrix\n",i*90);
     rotate(n,m);
  printf("\n\n");
 }
}
void rotate(int n,int m)
{
   int i,j;
   copyb(n,m);
   //displayb(n,m);
   reverse(n,m);
   //displayb(n,m);
   copya(n,m);
   displaya(n,m);
}
void copyb(int n,int m)
{
  int i,j,k=0,l=0;  
  for(i=0;i<n;i++)
  {  for(j=0;j<m;j++)
      b[k][l++]=a[j][i];
    k++;
    l=0;
 }
}
void copya(int n,int m)
{
int i,j,k=0,l=0;  
  for(i=0;i<n;i++)
  {  for(j=0;j<m;j++)
      a[k][l++]=b[i][j];
    k++;
    l=0;
 }
}
/*void displayb(int k,int m)
{
  int i,j;
  for(i=0;i<k;i++)
  { for(j=0;j<k;j++)
     printf("%4d",b[i][j]);
   printf("\n");
  }
   
}*/
 void displaya(int k,int m)
{
  int i,j;
  for(i=0;i<m;i++)
  { for(j=0;j<m;j++)
     printf("%4d",a[i][j]);
   printf("\n");
  }
   
}
void reverse(int n,int m)
{
   int s=0,e=n-1,i,t;
  for(i=0;i<m;i++)
 { s=0;
   e=n-1;
   while(s<e)
   {
      t=b[s][i];
      b[s][i]=b[e][i];
      b[e][i]=t;
    s++;
   e--;
      
   }
}
}
