#include <stdio.h>
#include <algorithm>
using namespace std; // uva 11072
struct Pt
{
    double x, y;
    Pt(double a = 0, double b = 0) : x(a), y(b) {}
    bool operator<(const Pt &a) const
    {
        if (x != a.x)
            return x < a.x;
        return y < a.y;
    }
    bool operator==(const Pt &a) const
    {
        return x == a.x && y == a.y;
    }
};
double dot(Pt a, Pt b)
{
    return a.x * b.x + a.y * b.y;
}
double cross(Pt o, Pt a, Pt b)
{
    return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);
}
int monotone(int n, Pt p[], Pt ch[])
{
    sort(p, p + n);
    int i, m = 0, t;
    for (i = 0; i < n; i++)
    {
        while (m >= 2 && cross(ch[m - 2], ch[m - 1], p[i]) <= 0)
            m--;
        ch[m++] = p[i];
    }
    for (i = n - 1, t = m + 1; i >= 0; i--)
    {
        while (m >= t && cross(ch[m - 2], ch[m - 1], p[i]) <= 0)
            m--;
        ch[m++] = p[i];
    }
    return m - 1;
}
bool onSegment(Pt p, Pt s, Pt e)
{
    if (p == s || p == e)
        return 1;
    return cross(p, s, e) == 0 && dot(Pt(s.x - p.x, s.y - p.y), Pt(e.x - p.x, e.y - p.y)) < 0;
}
int inPolygon(Pt p[], int n, Pt q)
{
    int i, j, cnt = 0;
    for (i = 0, j = n - 1; i < n; j = i++)
    {
        if (onSegment(q, p[i], p[j]))
            return 1;
        if (p[i].y > q.y != p[j].y > q.y &&
            q.x < (p[j].x - p[i].x) * (q.y - p[i].y) / (p[j].y - p[i].y) + p[i].x)
            cnt++;
    }
    return cnt & 1;
}
Pt D[100005], C[100005 << 1], p;
int main()
{
    for (int n; scanf("%d", &n) == 1;)
    {
        int i, j, k;
        for (i = 0; i < n; i++)
            scanf("%lf %lf", &D[i].x, &D[i].y);
        int cn = monotone(n, D, C);
        int m;
        scanf("%d", &m);
        while (m--)
        {
            scanf("%lf %lf", &p.x, &p.y);
            puts(inPolygon(C, cn, p) ? "inside" : "outside");
        }
    }
    return 0;
}