
#include "foo.h"
#include <algorithm>

using namespace std;

int find_min(int *p, int n) {
    int ans = p[0];
    for (int i = 1; i < n; i++) 
        ans = min(ans, p[i]);
    return ans;
}
