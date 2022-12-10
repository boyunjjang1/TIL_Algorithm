#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int arr[9];
    int result = 0;
    for(int i=0;i<9;i++)
    {
        cin >> arr[i];
        result += arr[i];
    }
    
    sort(arr,arr+9);
    
    int sum = result;
    
    
    for(int i=0;i<9;i++)
    {
        sum = result;
        sum -= arr[i];
        for(int j=0;j<9;j++)
        {
            if(i == j) continue;
            
            sum -= arr[j];
            
            if(sum == 100)
            {
                arr[j] = -1;
                break;
            }
            
            sum += arr[j];
            
        }
        if(sum == 100)
        {
            arr[i] = -1;
            break;
        }
    }
    
    for(int i=0;i<9;i++)
    {
        if(arr[i]==-1)
            continue;
        cout << arr[i] << endl;
    }
    
    
    
    return 0;
}
