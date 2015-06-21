#include<bits/stdc++.h>
using namespace std;
long long score[100010];
int main()
{
    long long N, P, X, maxscore = 0;
    int winner;
    scanf("%lld %lld %lld",&N, &P, &X);
    for(int i=1; i<=N; i++)
    {
        scanf("%lld",&score[i]);
        score[i] *= (P-((i-1)*X));
        if(score[i] > maxscore)
        {
            winner = i;
            maxscore = score[i];
        }
    }
    printf("%d",winner);
    return 0;
}
