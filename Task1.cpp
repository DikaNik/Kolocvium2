#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for(int i = n - 1; i > -1; --i) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    system("pause");
    return 0;
}
