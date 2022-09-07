#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    int length2;
    int width2;
    
    cout << "please enter the length of the first rectangle: ";
    cin >> length;
    cout << "please enter the width of the first rectangle: ";
    cin >> width;
    
    cout << "please enter the length of the second rectangle: ";
    cin >> length2;
    cout << "please enter the width of the second rectangle: ";
    cin >> width2;
    
    int area = width * length;
    int area2 = width2 * length2;
    
    string ans = (area > area2 ? "rectangle one has a greater area" : "rectangle two has a greater area");
    cout << ans;
}

--------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
    int num1, num2;
    int guess;
    srand (time(NULL));
    
    num1 = rand() % 500 + 1;
    num2 = rand() % 500 + 1;
    
    int ans = num1 + num2;
    cout << "  " <<num1<<endl;
    cout << "+ " <<num2<<endl;
    cout << "------"<<endl;
    
    cout << "please guess the answer: ";
    cin >> guess;
    
    string response = guess == ans ? "you guessed correctlyy!" : "You guessed incorrectly :((";
    
    cout << response;
    cout << " the answer was " << ans;
    
    
}

--------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()
{
    float area;
    int choice;
    
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4)" << endl;
    cin >> choice;
    if (choice == 1){
        int radius;
        cout << "enter the circles radius: ";
        cin >> radius;
        area = 3.14159 * radius;
        if(radius < 0) {
            cout << "the value is negative... Quitting";
            return 0;
        }
    }
    else if(choice == 2){
        int length;
        int width;
        cout << "enter the rectangles length: ";
        cin >> length;
        cout << "enter the rectangles width: ";
        cin >> width;
        if(length < 0 || width < 0) {
            cout << "one of the values is negative... Quitting";
            return 0;
        }
        area = width * length;
    }
    else if(choice == 3){
        int base;
        int height;
        cout << "enter the triangles base: ";
        cin >> base;
        cout << "enter the triangles height: ";
        cin >> height;
        if(base < 0 || height < 0) {
            cout << "one of the values is negative... Quitting";
            return 0;
        }
        area = base * height * 0.5;
    }
    else if (choice == 4){
        cout << "Quitting";
        return 0;
    }
    else{
        cout << "Error that choice was outside the range of 1 through 4";
    }
    
    cout << "the area is " << area;
    
}
