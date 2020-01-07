
#include "tool.h"
#include <algorithm>

using namespace std;

int find_max(int *p, int n) {
    int ans = p[0];
    for (int i = 1; i < n; i++) 
        ans = max(ans, p[i]);
    return ans;
}
