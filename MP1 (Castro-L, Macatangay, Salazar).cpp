#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<math.h>
#define PI 3.14159265
using namespace std;

int main()
{
    double sidea, sideb, sidec, a, b, c, angle1, angle2, angle3, s, n, area, perimeter, apothem, circumcenter;
    bool userquit = false;
    int ans;

	do
	{
    cout << "Please enter your desired side lengths of the triangle:" << endl;
    cout << "Side A: ";
    cin >> sidea;
    cout << "Side B: ";
    cin >> sideb;
    cout << "Side C: ";
    cin >> sidec;

    a = (((sideb * sideb) + (sidec * sidec) - (sidea*sidea)) / (2 * sideb * sidec));
    b = (((sidec * sidec) + (sidea * sidea) - (sideb*sideb)) / (2 * sidec * sidea));
    c = (((sidea * sidea) + (sideb * sideb) - (sidec*sidec)) / (2 * sidea * sideb));
    angle1 = acos(a) * (180 / M_PI);
    angle2 = acos(b) * (180 / M_PI);
    angle3 = acos(c) * (180 / M_PI);

    cout << "\nThe interior angles of the triangle are: \n\n";
    cout << "First angle: " << angle1 << " degrees\n";
    cout << "Second angle: " << angle2 << " degrees\n";
    cout << "Third angle: " << angle3 << " degrees\n\n";

    if (sidea == sideb && sideb == sidec)
        cout << "The triangle is an Equilateral Triangle.\n";
    else if (sidea == sideb && sideb != sidec)
        cout << "The triangle is an Isosceles Triangle.\n";
    else if (sideb == sidec && sidec != sidea)
        cout << "The triangle is an Isosceles Triangle.\n";
    else if (sidec == sidea && sidea != sideb)
        cout << "The triangle is an Isosceles Triangle.\n";
    else
        cout << "The triangle is a Scalene Triangle.\n";

    s = (sidea + sideb + sidec) / 2;
    n = s * (s - sidea) * (s - sideb) * (s - sidec);
    area = sqrt(n);
    perimeter = sidea + sideb + sidec;

    cout << "\nThe area of the triangle is " << area << " sq.m.\n";
    cout << "The perimeter of the triangle is " << perimeter << " m.\n\n";

    if (angle1 < 90 && angle2 < 90 && angle3 < 90)
        cout << "Based on the angles, the triangle is an Acute Triangle.\n";
    else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
        cout << "Based on the angles, the triangle is an Obtuse Triangle.\n";
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        cout << "Based on the angles, the triangle is an Right Triangle.\n";

    if (sidea == sideb && sidea == sidec)
        {
    	apothem = (2 * area) / perimeter;
    	cout << "\nThe length of the apothem is " << apothem << ".\n\n";
        }
	else
		cout << "\nThere is no apothem.\n\n";

    circumcenter = (sidea * sideb * sidec ) / sqrt( ( (sidea + sideb + sidec) * (sideb + sidec - sidea) * (sidec + sidea - sideb) * (sidea + sideb - sidec) ) );

	cout << "The length of the circumcenter is " << circumcenter << ".\n";

	cout << "\nDo you want to continue the simulation? Please press 1 for yes and 0 for no.\n";
	cin >> ans;

	if (ans == 0)
    {
    userquit = true;
    cout << "Goodbye!";
    }
    } while (!userquit);

	getch();
    return 0;
}
