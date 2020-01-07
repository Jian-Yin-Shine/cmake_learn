#include "foo.h"
#include "bar.h"
#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {3, 2, 1, 6, 7};
    cout << "min is " << find_min(arr, 5) << endl;
    return 0;    
}
