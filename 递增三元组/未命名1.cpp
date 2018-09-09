#include<stdio.h>

#include <string.h>

#define N 100004



long int n,anmin=0,cnmax=0,tn=0;

long int an[N],cn[N];

void swp(long int *t,long int x,long int y)

   {   long int tem=t[x];

      t[x]=t[y];

      t[y]=tem;

   }

long int  qp(long int t[N],long int r,long int l)

{

long int x=t[r];

long int i=r;

long int j=l+1;

while(1)

{



while(t[++i]<x&&i<l);

while(t[--j]>x);

if(i<j)swp(t,i,j);

else break;

}

swp(t,r,j);

return j;

}

void ppp(long int *t,long int r,long int l)

{

long int m;

if(r<l)

{  m=qp(t,r,l);

 ppp(t,r,m-1);

 ppp(t,m+1,l);

}

}

int main()

{long int i,j,sum=0;

long int a[N],b[N],c[N];

memset(an,0,sizeof(an));

memset(cn,0,sizeof(cn));

scanf("%ld",&n);

for(i=1;i<=n;i++)

{ scanf("%ld",&a[i]);

 if(anmin>a[i]||i==1)anmin=a[i];

}

 

for(i=1;i<=n;i++)

scanf("%ld",&b[i]);

for(i=1;i<=n;i++)

{ scanf("%ld",&c[i]);

 if(cnmax<c[i])cnmax=c[i];

}

ppp(a,1,n);

ppp(c,1,n);

for(i=1;i<=n;i++)

{

if(an[a[i]])an[a[i]]++;//相同 就加一即可

else an[a[i]]=i;//通过排序后的位置得出 此数前面大的个数

j=n-i+1;

if(cn[c[j]])cn[c[j]]++;

else cn[c[j]]=n+1-j;//通过排序后的位置得出 此数后面大的个数

}





for(i=1;i<=n;i++)

{   long int d=b[i]-1;

   long int d1=b[i]+1;

while(an[d]==0&&d>=anmin)d--;

while(cn[d1]==0&&d1<=cnmax)d1++;

sum+=an[d]*cn[d1];

}

printf("%ld\n",sum);

return 0;

}

