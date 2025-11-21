inline vector<char> gh()
{
    vector<char> t;
    char tt = getchar();
    while (tt != EOF && isspace(tt))
        tt = getchar();
    while (tt != EOF && tt >= '0' && tt <= '9')
    {
        t.push_back(tt);
        tt = getchar();
    }
    return t;
}
inline void ph(const vector<char> &t)
{
    for (auto tt : t)
        putchar(tt);
}
vector<char> operator+(const vector<char> &t, const vector<char> &tt)
{
    vector<char> ret;
    int carry = 0;
    int i = t.size() - 1, ii = tt.size() - 1;
    while (i >= 0 || ii >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
            sum += t[i] - '0';
        if (ii >= 0)
            sum += tt[ii] - '0';
        carry = sum / 10;
        ret.push_back(sum % 10 + '0');
        i--;
        ii--;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}
vector<char> &operator+=(vector<char> &t, const vector<char> &tt)
{
    t = t + tt;
    return t;
}
vector<char> operator*(const vector<char> &t, const vector<char> &tt)
{
    if (t.empty() || tt.empty() || (t.size() == 1 && t[0] == '0') || (tt.size() == 1 && tt[0] == '0'))
        return {'0'};
    vector<char> ret = {'0'};
    for (auto i = t.rbegin(); i != t.rend(); i++)
    {
        vector<char> ttt;
        for (int iii = 0; iii < i - t.rbegin(); iii++)
            ttt.push_back('0');
        int carry = 0;
        for (auto ii = tt.rbegin(); ii != tt.rend(); ii++)
        {
            int sum = (*i - '0') * (*ii - '0') + carry;
            ttt.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        if (carry > 0)
            ttt.push_back(carry + '0');
        reverse(ttt.begin(), ttt.end());
        ret += ttt;
    }
    return ret;
}
vector<char> &operator*=(vector<char> &t, const vector<char> &tt)
{
    t = t * tt;
    return t;
}
