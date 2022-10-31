#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[10];

    for(int i = 0; i < 10; i++){
        cout << "Enter a value for index " << i << ": ";
        cin >> x[i];
    }
    
    int n = sizeof(x) / sizeof(x[0]);
    sort(x, x + n);
    
    cout << "Smallest Value: " << x[0] << endl;
    cout << "Largest Value: " << x[n-1] << endl;

}

-----------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    double arr[12];

    for(int i = 1; i <= 12; i++){
        cout << "Enter a value for month " << i << ": ";
        cin >> arr[i];
	  while(arr[i] < 0){
            cout << "Please enter a positive value: ";
            cin >> arr[i];
        }
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
    double sum;
    sort(arr, arr + n);
    sum = accumulate(arr , arr+n , sum);
    
    cout << "Total Rainfall: " << sum << endl;
    cout << "Average Monthly Rainfall: " << (sum/sizeof(arr)) << endl;
    cout << "Highest Value: " << arr[n-1] << endl;
    cout << "Lowest Value: " << arr[1] << endl;
    cout << "Highest Value: " << arr[n-1] << endl;

}

-----------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string salsas[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int arr[5];

    for(int i = 0; i < 5; i++){
        cout << "How many salsas sold that were " << salsas[i] << ": ";
        cin >> arr[i];
        while(arr[i] < 0){
            cout << "Please enter a positive value: ";
            cin >> arr[i];
        }
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int sum = 0; 
    sum = accumulate(arr, arr+n, sum);
    
    for(int i = 0; i < 5; i++){
        cout << salsas[i] << " sold " << arr[i] << " salsas" << endl;
    }
    
    cout << "The Total Salsas Sold: " << sum << endl;
    cout << "Smallest Value: " << arr[0] << endl;
    cout << "Largest Value: " << arr[n-1] << endl;

}
