/* Part of Cosmos by OpenGenus Foundation */
#include<stdio.h>
int a[100];int nf=0,f[20],pf;int n;int max;int pos;int k;
void Optimal(int a[],int n,int nf)
{
    pf=3;
    for(int i=0;i<nf;i++)
    {
        f[i]=a[i];
    }
    int c=0;
    for(int y=nf;y<n;y++)
    {
        int flag=0;
        for(int z=0;z<nf;z++)
        {

            if(a[y]==f[z])
            {
                flag=1;

            }

        }
        if(flag==0)
        {

            pf++;max=-1;pos=-1;int index=-1;
            for(int j=0;j<nf;j++)
            {
                for(k=y+1;k<n;k++)
                {
                    if(f[j]==a[k])
                    {
                       pos=k;
                       break;
                    }
                }
                if(k==n && pos==-1)
                {
                  c=1;
                  index=j;
                  break;
                }

                else
                {
                    if(max<pos)
                    {
                        max=pos;
                        index=j;
                    }
                }
            }
                f[index]=a[y];

            }

    }
    printf("No. of Page Faults is %d",pf);
}
void main()
{
    printf("Enter the size of reference string");
    scanf("%d",&n);
    for(int x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Enter the number of frames");
    scanf("%d",&nf);
    Optimal(a,n,nf);
}


