#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    
    float x1,x2,x3;//variables for x coordinant
    float y1,y2,y3;//variables for y coordinant
    float side1,side2,side3;//variable for triangle side values

    cout << "Valid Triangle Tester" << endl;
    //ask user for x1 value
    cout <<"Enter Point #1-x position:";
    cin >> x1;
    //ask user for y1 value
    cout <<"Enter Point #1-y position:";
    cin >> y1;
    //ask user for x2 value
    cout <<"Enter Point #2-x position:";
    cin >> x2;
    //ask user for y2 value
    cout <<"Enter Point #2-y position:";
    cin >> y2;
    //ask user for x3 value
    cout <<"Enter Point #3-x position:";
    cin >> x3;
    //ask user for y3 value
    cout <<"Enter Point #3-y position:";
    cin >> y3;
    
    cout<<"\nThe length of each side of your test shape is: "<<endl;
    //calculate side values
    side1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    side2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    side3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    //show user side values and only show 2 decimals
    cout<<"Side 1: "<< fixed <<setprecision(2)<<side1<<endl;
    cout<<"Side 2: "<< fixed <<setprecision(2)<<side2<<endl;
    cout<<"Side 3: "<< fixed <<setprecision(2)<<side3<<endl;
    //check if it is a valid triangle
   if ((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2))
    	cout<<"\nThis is a valid triangle!";
    else //in the case it is not a valid triangle
   		cout<<"\nThis is not a valid triangle";

    return 0;
}
