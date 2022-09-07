#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream newfile;
    int count = 0;
    string file;
    cout << "please enter a file to read: ";
    cin >> file;
    newfile.open(file,ios::in);
    if (newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            count += 1;
            
            cout << tp << "\n";
            if (count > 18) {
                break;
            }
        }
        if(count < 18) {
            cout << "there were less than 18 lines" << endl;
        }
        newfile.close();
    }
    
}

--------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    fstream newfile;
    int count = 0;
    string file;
    cout << "please enter a file to read: ";
    cin >> file;
    int enter = 0;
    
    
    newfile.open(file,ios::in);
    if (newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            count += 1;
            cout << tp << "\n";
            if (count % 24 == 0) {
                cout << "Press enter to load 24 more lines" << endl;
                cin.get(); 
                
            }
        }
        newfile.close();
    }
    
}

--------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    fstream newfile;
    int count = 0;
    string file;
    cout << "please enter a file to read: ";
    cin >> file;
    int enter = 0;
    
    
    newfile.open(file,ios::in);
    if (newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            count += 1;
            cout << count << ":"<< tp << "\n";
            if (count % 24 == 0) {
                cout << "Press enter to load 24 more lines" << endl;
                cin.get(); 
                
            }
        }
        newfile.close();
    }
    
}
