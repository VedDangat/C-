/*0(N^2) TLE

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int maxwater = 0;
    int i, j, n = 9;
    int area, width, h;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            width = j - i;
            h = min(height[i], height[j]);
            area = width * h;
            maxwater = max(maxwater, area);
        }
    }

    cout << maxwater;
    return 0;
}



TWO POINTER APPROCH 0(N)


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int maxwater = 0;
    int n = 9;
    int lp = 0, rp = n - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        maxwater = max(maxwater, w * ht);

        if (height[lp] < height[rp])
            lp++;
        else
            rp--;
    }

    cout << maxwater;
    return 0;
}

*/