#include <iostream>
using namespace std ;

int main ()
	{
		float suhu;
		char unit;
		
			cout <<"-----Program Konversi Suhu-----"<<endl;
			cout <<"\n C. Celcius \n F.Farrenheit \n R.Reaumur"<<endl;
			cout <<"\n suhu dalam bentuk C,F atau R : ";
			cin >> suhu;
			cout <<"hasil konversi Temperatur";
			cin >>unit;
			cout <<endl;
		//code IF untuk beberapa kemungkinan temperatur
			
		if (unit == 'C' || unit == 'c') 
			{
				cout << "\nCelcius = "<<suhu;
				cout << "\nFarrenheit = "<< 9.0 / 5.0 * suhu + 32;
				cout << "\nReamur = " << 4.0 / 5.0 * suhu;
			}
		
		else if (unit == 'F' || unit == 'f') 
			{
				cout << "\nCelcius = "<<5.0 / 9.0 * (suhu-32);
				cout << "\nFarrenheit = "<<suhu;
				cout << "\nReamur = " << 4.0 / 9.0 * (suhu-32);
			}
		else if (unit == 'R' || unit == 'r') 
			{
				cout << "\nCelcius = "<<5.0 / 4.0 * suhu;
				cout << "\nFarrenheit = "<< 9.0 / 4.0 * suhu + 32;
				cout << "\nReamur = " <<suhu;
			}
			
	}
