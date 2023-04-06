#include<iostream>
#include<string.h>

using namespace std;
class Cars {
	public:
		int car_id;
		char car_company_name[100];
		char car_color[100];
		int car_model;
		int car_release_year;
};

int main(){
	Cars  car1 , car2 , car3 , car4 ;
	
	car1.car_id = 918;
	strcpy(car1.car_company_name,"Bentley Motors Limited");
	strcpy(car1.car_color,"Red");
	car1.car_model =2023 ;
	car1.car_release_year = 2023;
	
	
	
	car2.car_id = 8613;
	strcpy(car2.car_company_name,"Rolls-Royce Motors");
	strcpy(car2.car_color,"Blue");
	car2.car_model =2020 ;
	car2.car_release_year = 2020;
	
	
	car3.car_id = 3693;
	strcpy(car3.car_company_name,"Alfa Romeo");
	strcpy(car3.car_color,"White");
	car3.car_model = 2018;
	car3.car_release_year = 2018;
	
	car4.car_id = 4256;
	strcpy(car4.car_company_name,"Bugatti");
	strcpy(car4.car_color,"Black");
	car4.car_model = 2017;
	car4.car_release_year = 2017;
	
	cout<<"Car id : " <<car1.car_id<<endl;
	cout<<"Car company_name :  "<<car1.car_company_name<<endl;
	cout<<"Car car_color :  "<<car1.car_color<<endl;
	cout<<"Car model :  "<<car1.car_model<<endl;
	cout<<"Car release_year :  "<<car1.car_release_year<<endl<<endl<<endl;
	
	
	cout<<"Car id : " <<car2.car_id<<endl;
	cout<<"Car company_name :  "<<car2.car_company_name<<endl;
	cout<<"Car car_color :  "<<car2.car_color<<endl;
	cout<<"Car model :  "<<car2.car_model<<endl;
	cout<<"Car release_year :  "<<car2.car_release_year<<endl<<endl<<endl;
	
	
	
	cout<<"Car id : " <<car3.car_id<<endl;
	cout<<"Car company_name :  "<<car3.car_company_name<<endl;
	cout<<"Car car_color :  "<<car3.car_color<<endl;
	cout<<"Car model :  "<<car3.car_model<<endl;
	cout<<"Car release_year :  "<<car3.car_release_year<<endl<<endl<<endl;
	
	
	
	cout<<"Car id : " <<car4.car_id<<endl;
	cout<<"Car company_name :  "<<car4.car_company_name<<endl;
	cout<<"Car car_color :  "<<car4.car_color<<endl;
	cout<<"Car model :  "<<car4.car_model<<endl;
	cout<<"Car release_year :  "<<car4.car_release_year<<endl<<endl<<endl;
	
	return 0;
	
}