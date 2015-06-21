#include<bits/stdc++.h>
using namespace std;

int letters[256];
int cum[256];

int main()
{
    char a;
    int sz;
    scanf("%d",&sz);
    int temp;
    while(sz)
    {
        cin >> a;
        letters[a] ++;
        sz--;
    }
    long long ans = 0;
    long long calc = 0;
    for(int i=0; i<160; i++)
    {
        calc = letters[i] *(letters[i]+1);
        calc /= 2;
        ans += calc;
    }
    printf("%lld\n",ans);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int letters[26];
int cum[26];

int main()
{
    char a;
    int sz;
    scanf("%d",&sz);
    int temp;
    while(sz)
    {
        cin >> a;
        letters[a - 97] ++;
        temp = letters[a - 97];
        cum[a - 97] += temp;
        sz--;
    }
    long long ans = 0;
    for(int i=0; i<26; i++)
        ans += cum[i];
    printf("%lld\n",ans);
    return 0;
}
