#include <bits/stdc++.h>
using namespace std;

#define PACKAGES 1
#define XIO 1
#define XINPUT (XIO)
#define XOUTPUT (XIO)
#define IOSS_FALSE (!XIO)

#if PACKAGES
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vs = vector<string>;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
#define MI16 INT16_MAX
#define MI32 INT32_MAX
#define MLL LLONG_MAX
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define stt struct
#define sz size
#define gchar getchar
#define pchar putchar
#define N pchar('\n')
#define K pchar(' ')
#define F(i, n) for (int i = 0; i < n; i++)
#define ALL(a) a.begin(), a.end()
#define xfind(a, n) binary_search(ALL(a), n)
#define LF(a, n) lower_bound(ALL(a), n) - a.begin()
#define RF(a, n) upper_bound(ALL(a), n) - a.begin() - 1
#define xsort(a) sort(ALL(a))
#endif

#if XINPUT
namespace xinput
{
    inline int gint()
    {
        int a = 0, f = 1;
        char ch = getchar();
        while (ch < '0' || ch > '9')
        {
            if (ch == '-')
                f = -1;
            ch = getchar();
            if (ch == EOF)
                return EOF;
        }
        while (ch >= '0' && ch <= '9')
        {
            a = a * 10 + ch - '0';
            ch = getchar();
            if (ch == EOF)
                break;
        }
        return a * f;
    }
    inline long long gll()
    {
        long long a = 0, f = 1;
        char ch = getchar();
        while (ch < '0' || ch > '9')
        {
            if (ch == '-')
                f = -1;
            ch = getchar();
            if (ch == EOF)
                return EOF;
        }
        while (ch >= '0' && ch <= '9')
        {
            a = a * 10 + ch - '0';
            ch = getchar();
            if (ch == EOF)
                break;
        }
        return a * f;
    }
    inline string gs()
    {
        char ch = getchar();
        string ret;
        while (ch != EOF && isspace((unsigned char)ch))
        {
            ch = getchar();
        }
        while (ch != EOF && !isspace((unsigned char)ch))
        {
            ret += ch;
            ch = getchar();
        }
        return ret;
    }
    inline vector<int> gvi(int n)
    {
        vector<int> ret(n);
        for (int i = 0; i < n; i++)
            ret[i] = gint();
        return ret;
    }
    inline vector<long long> gvll(int n)
    {
        vector<long long> ret(n);
        for (int i = 0; i < n; i++)
            ret[i] = gll();
        return ret;
    }
    inline vector<string> gvs(int n)
    {
        vector<string> ret(n);
        for (int i = 0; i < n; i++)
        {
            ret[i] = gs();
        }
        return ret;
    }
}
using namespace xinput;
#endif

#if XOUTPUT
namespace xoutput
{
    inline void pint(int x)
    {
        if (x < 0)
        {
            putchar('-');
            x = -x;
        }
        if (x == 0)
        {
            putchar('0');
            return;
        }
        char ch[10], *pch = ch;
        while (x)
        {
            *pch++ = x % 10 + '0';
            x /= 10;
        }
        while (pch > ch)
        {
            putchar(*--pch);
        }
    }
    inline void pll(long long x)
    {
        if (x < 0)
        {
            putchar('-');
            x = -x;
        }
        if (x == 0)
        {
            putchar('0');
            return;
        }
        char ch[20], *pch = ch;
        while (x)
        {
            *pch++ = x % 10 + '0';
            x /= 10;
        }
        while (pch > ch)
        {
            putchar(*--pch);
        }
    }
    inline void ps(const string &s)
    {
        for (char ch : s)
        {
            putchar(ch);
        }
    }
    inline void pvi(const vector<int> &a)
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            if (i > 0)
                putchar(' ');
            pint(a[i]);
        }
    }
    inline void pvll(const vector<long long> &a)
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            if (i > 0)
                putchar(' ');
            pll(a[i]);
        }
    }
    inline void pvs(const vector<string> &a)
    {
        for (size_t i = 0; i < a.size(); i++)
        {
            if (i > 0)
            {
                putchar(' ');
            }
            ps(a[i]);
        }
    }
}
using namespace xoutput;
#endif
