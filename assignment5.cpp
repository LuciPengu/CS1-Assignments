#include <iostream>

using namespace std;

float fallingDistance(int fallingTime){
    return 0.5 * ((0.9 * fallingTime)*(0.9 * fallingTime));
}

int main()
{
    for (int i = 1; i <= 10; i++){
        cout << fallingDistance(i) << endl;
    }
}

-------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

void getScore(int &score){
    cout << "please enter a test score: ";
    cin >> score;
    
    while (score < 0 || score > 100){
		cout << "Error - enter a score between 0 - 100: ";
		cin >> score;
	}
}
int findLowest(int s1, int s2, int s3, int s4, int s5){
    int l = s1;
    
    if(s2 < l) l = s2;
    if(s3 < l) l = s3;
    if(s4 < l) l = s4;
    if(s5 < l) l = s5;
    
    cout << "Lowest Score " << l << endl;
    return l;

}
void calcAverage(int s1, int s2, int s3, int s4, int s5){
    int l;
    float avr;
    
    l = findLowest(s1, s2, s3, s4, s5);
    avr = ((s1 + s2 + s3 + s4 + s5) - l) / 4.0;
    cout << "The average is " << avr << endl;
}


int main()
{
    int s1, s2, s3, s4, s5;
    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);
    calcAverage(s1, s2, s3, s4, s5);
}

-------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

double getLength()
{   
    int num;
    cout << "Enter rectangle's length: ";
    cin >> num;
    return num;
}
double getWidth()
{
    int num;
    cout << "Enter rectangle's width: ";
    cin >> num;
    return num; 
}

double getArea(double length, double width){
    return length * width;
}

void displayData(double length, double width, double area){
    cout << "Length of the Rectangle: " << length << endl;
    cout << "Width of the Rectangle: " << width << endl;
    cout << "Area of the Rectangle: " << area << endl;
    
}

int main()
{
    double area, length, width;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}
