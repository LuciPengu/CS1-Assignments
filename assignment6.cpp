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
    double x[12];

    for(int i = 1; i <= 12; i++){
        cout << "Enter a value for month " << i << ": ";
        cin >> x[i];
	  while(x[i] < 0){
            cout << "Please enter a positive value: ";
            cin >> x[i];
        }
    }
    
    int n = sizeof(x) / sizeof(x[0]);
    double sum;
    sort(x, x + n);
    sum = accumulate(x , x+n , sum);
    
    cout << "Total Rainfall: " << sum << endl;
    cout << "Average Monthly Rainfall: " << (sum/sizeof(x)) << endl;
    cout << "Highest Value: " << x[n-1] << endl;
    cout << "Lowest Value: " << x[1] << endl;
    cout << "Highest Value: " << x[n-1] << endl;

}

-----------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string salsas[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int x[5];

    for(int i = 0; i < 5; i++){
        cout << "How many salsas sold that were " << salsas[i] << ": ";
        cin >> x[i];
        while(x[i] < 0){
            cout << "Please enter a positive value: ";
            cin >> x[i];
        }
    }
    
    int n = sizeof(x) / sizeof(x[0]);
    sort(x, x + n);
    int sum = 0; 
    sum = accumulate(x, x+n, sum);
    
    for(int i = 0; i < 5; i++){
        cout << salsas[i] << " sold " << x[i] << " salsas" << endl;
    }
    
    cout << "The Total Salsas Sold: " << sum << endl;
    cout << "Smallest Value: " << x[0] << endl;
    cout << "Largest Value: " << x[n-1] << endl;

}
