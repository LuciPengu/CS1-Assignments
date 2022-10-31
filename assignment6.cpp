#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[10];

    for(int i = 0; i < 10; i++){
        cout << "Enter a val for i " << i << ": ";
        cin >> x[i];
    }
    
    int n = sizeof(x) / sizeof(x[0]);
    sort(x, x + n);
    
    cout << "Smallest: " << x[0] << endl;
    cout << "Largest: " << x[n-1] << endl;

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
        cout << "Enter a val" << i << ": ";
        cin >> x[i];
	  while(x[i] < 0){
            cout << "Please enter a pos val: ";
            cin >> x[i];
        }
    }
    
    int n = sizeof(x) / sizeof(x[0]);
    double sum;
    sort(x, x + n);
    sum = accumulate(x , x+n , sum);
    
    cout << " Rainfall: " << sum << endl;
    cout << " Monthly Rainfall: " << (sum/sizeof(x)) << endl;
    cout << "Highest : " << x[n-1] << endl;
    cout << "Lowest : " << x[1] << endl;
    cout << "Highest : " << x[n-1] << endl;

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
    
    cout << " Salsas Sold: " << sum << endl;
    cout << "Smallest : " << x[0] << endl;
    cout << "Largest : " << x[n-1] << endl;

}
