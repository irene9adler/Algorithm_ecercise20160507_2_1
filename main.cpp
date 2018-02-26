#include <stdio.h>
#define M 300
//积分赛第二场A

using namespace std;

int hx(int x,int p)
{
    return x%p;
}
int main()
{
    int p,n;
    int i,j;
    int arr[M];
    int h_arr[M];
    int result;
    while(scanf("%d %d",&p,&n)!=EOF)
    {
        for(i=1;i<=n;i++)
            {
                scanf("%d",&arr[i]);
                h_arr[i] = hx(arr[i],p);
                for(j=1;j<=i;j++)
                {
                    if(h_arr[j]==h_arr[i]) break;
                }
                if(j==i) result = -1;
                else result = i;
            }
     printf("%d\n",result);
    }
    return 0;
}
