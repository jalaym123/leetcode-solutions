#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet
{

public:
    set<int> s;
    SmallestInfiniteSet()
    {
        vector<int> v(1000, 1);
        set<int> s1(v.begin(), v.end());
        s = s1;
    }

    int popSmallest()
    {
        int x = *s.begin();
        s.erase(s.begin());
        return x;
    }

    void addBack(int num)
    {
        s.insert(num);
    }
};