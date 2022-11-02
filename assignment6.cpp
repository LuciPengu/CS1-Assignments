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
    const int SIZE = 12;
    double x[SIZE];
    int highestMonth = 0;
    int lowestMonth = 0;
    double biggest = 0;
    double smallest = 0;
    for(int i = 0; i < SIZE; i++){
        cout << "Enter a val for month " << (i+1) << ": ";
        cin >> x[i];

	    while(x[i] < 0){
            cout << "Please enter a pos val: ";
            cin >> x[i];
        }

        if (x[i] > biggest){
            biggest = x[i];
            highestMonth = (i+1);
        }
        if (x[i] < smallest){
            smallest = x[i];
            lowestMonth = (i+1);
        }
        if (i == 0) smallest = x[i];

    }
    
    int n = sizeof(x) / sizeof(x[0]);
    double sum = accumulate(x , x+n , sum);
    cout << "Total Rainfall: " << sum << endl;
    cout << "Average Monthly Rainfall: " << (sum/SIZE) << endl;
    cout << "Highest : " << biggest <<endl;
    cout << "Lowest : " << smallest << endl;
    cout << "Highest Month: " << highestMonth << endl;
    cout << "Lowest Month: " << lowestMonth << endl;

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
