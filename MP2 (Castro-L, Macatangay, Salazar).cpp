#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    char fig;
    int ans;
    float radius,height,width,length;
    bool userquit = false;

    do
    {
    cout << "What geometric figure would you like to be calculated? \n\nC - Cone\nP - Pyramid\nS - Sphere\n\n";
    cin >> fig;

    if (fig != 'C' && fig != 'c' && fig != 'P' && fig != 'p' && fig != 'S' && fig != 's')
        {
         cout << "\nInvalid.";
         break;
        }


    switch(fig)
    {
    case 'C':
    case 'c':
        {
        cout << "\nTo calculate the different geometric parameters of a cone, please enter the following: \n";
        cout << "Radius: ";
        cin >> radius;
        cout << "Height of the Cone: ";
        cin >> height;
        float slantheight = sqrt((radius*radius)+(height*height));
        cout << setprecision(2) << fixed << "\nVolume: " << (3.14*radius*radius*height)/3 << endl;
        cout << setprecision(2) << fixed << "Lateral Area: " << 3.14*radius*slantheight << endl;
        cout << setprecision(2) << fixed << "Base Area: " << 3.14*radius*radius << endl;
        cout << setprecision(2) << fixed << "Surface Area: " << (3.14*radius*slantheight) + (3.14*radius*radius) << endl;
        break;
        }
    case 'P':
    case 'p':
        {
        cout << "\nTo calculate the different geometric parameters of a pyramid, please enter the following: \n";
        cout << "Base Length: ";
        cin >> length;
        cout << "Base @idth: ";
        cin >> width;
        cout << "Height of the Pyramid: ";
        cin >> height;
        float slantheight = sqrt(((length/2)*(length/2))+(height*height));
        cout << setprecision(2) << fixed << "\nVolume: " << (length*width*height)/3 << endl;
        cout << setprecision(2) << fixed << "Lateral Area: " << (((width*2)+(length*2))*slantheight)/2 << endl;
        cout << setprecision(2) << fixed << "Base Area: " << length*width << endl;
        cout << setprecision(2) << fixed << "Surface Area: " << ((((width*2)+(length*2))*slantheight)/2) + (length*width) << endl;
        break;
        }
    case 'S':
    case 's':
        {
        cout << "\nTo calculate the different geometric parameters of a sphere, please enter the following: \n";
        cout << "Radius: ";
        cin >> radius;
        cout << setprecision(2) << fixed << "\nVolume: " << (4*3.14*radius*radius*radius)/3 << endl;
        cout << setprecision(2) << fixed << "Surface Area: " << 4*3.14*radius*radius << endl;
        break;
        }
    default:
        {
        cout << "\nInvalid.";
        break;
        }
    }

    cout << "\nDo you want to exit the program? Please press 1 (Yes) & 0 (No).\n";
    cin >> ans;
    cout << endl;

    if (ans == 1)
        {
        userquit = true;
        cout << "Goodbye!";
        }
    } while (!userquit);

    getch();
    return 0;
}
