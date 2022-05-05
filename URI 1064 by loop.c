
#include<stdio.h>
int main()
{
    double a,sum,av;
    int i,cnt;
    i=1;
    sum=0.0;
    cnt=0;
    while(i<=6)
    {
        scanf("%lf",&a);
        // দোস্ত, এখানে sum টা if এর ভিতরে দিতে হবে এবং
        // av = sum/cnt হবে, কারন প্রশ্ন দেখ-
        // ওরা বলছে শুধু পজেটিভ সংখ্যা গুলোর এভারেজ দেখাতে!
        if(a>0)
        {
            sum +=a;
            cnt++;
        }
        i++;
    }
    av=sum/cnt;
    printf("%d valores positivos\n",cnt);
    printf("%.1lf\n",av);
    return 0;
}
                