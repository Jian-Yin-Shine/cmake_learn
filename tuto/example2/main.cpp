#include "tool.h"
#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 4, 7, 6, 2};
    cout << "The max " << find_max(arr, 5) << " ." << endl;
    return 0;    
}
