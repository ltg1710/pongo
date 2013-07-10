#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
        while(a!=b)
        {
                if(a>b)
                        a-=b;
                else
                        b-=a;
        }
        return a;
}

int can(int a,int b,int c)
{
        int d = gcd(a,b);
        if(c%d == 0)
                return 1;
        else
                return 0;
}

//start 提示：自动阅卷起始唯一标识，请勿删除或增加。
int main(int argc, const char* argv[]) {
        int nA, nB, nC, ret;
        if(argc != 4) {
                printf("%s nA nB nC");
                exit(EXIT_FAILURE);
        }
        nA = atoi(argv[1]);
        nB = atoi(argv[2]);
        nC = atoi(argv[3]);
        ret = can(nA, nB, nC);
        if(ret == 1)
                printf("%d %d %d CAN!\n",nA,nB,nC);
        else
                printf("%d %d %d CANNOT!\n", nA,nB,nC);
        return ret;
}

//end //提示：自动阅卷结束唯一标识，请勿删除或增加。        
