#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
    for (int i = 0; i < 127; i++){
        if (i % 16 == 0) cout << endl;
        cout << (char)i;
    }
    
}

--------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
    while(true){
        float num1, num2;
        int guess, choice;
        string icon = "";
        srand (time(NULL));
        
        num1 = rand() % 500 + 1;
        num2 = rand() % 500 + 1;
        
        cout << "\n1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        
        cout << "choose 1-5: ";
        
        cin >> choice;
        float ans;
        switch(choice){
            case 1:
            ans = num1 + num2;
            icon = "+";
            break;
    
            case 2:
            
            ans = num1 - num2;
            icon = "-";
    
            break;
            
            case 3:
            ans = num1 * num2;
            icon = "*";
    
            break;
            
            case 4:
            ans = num1 / num2;
            icon = "/";
            
            case 5:
            cout << "quitting";
            return 0;
    
            break;
            
            default:
            cout << "that is not an option";
            return 0;
        }
        
        
        cout << "  " <<num1<<endl;
        cout << icon << " " <<num2<<endl;
        cout << "------"<<endl;
        
        cout << "please guess the answer: ";
        cin >> guess;
        
        string response = guess == ans ? "you guessed correctlyy!" : "You guessed incorrectly :((";
        
        cout << response;
        cout << " the answer was " << ans;
        
    }
}

--------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream newfile;
    int count = 0;
    int sum = 0;
    newfile.open("random.txt",ios::in);
    if (newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            int num = stoi(tp);
            count += 1;
            sum += num;
            cout << num << "\n";
        }
        newfile.close();
    }
    cout << "number of numbers: " << count << endl;
    cout << "sum of all numbers: " << sum << endl;
    cout << "average: " <<(sum/count) << endl;
}
