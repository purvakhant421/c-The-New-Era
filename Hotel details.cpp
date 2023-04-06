#include<iostream>
#include<string.h>

using namespace std;
class hotel {
	public:
		int hotel_id;
		char hotel_name[100];
		int hotel_staff;
};

int main(){
	hotel  htl1 , htl2 , htl3 ;
	
	htl1.hotel_id = 123;
	strcpy(htl1.hotel_name,"Crystal Plaza");
	htl1.hotel_staff = 200;
	
	htl2.hotel_id = 456;
	strcpy(htl2.hotel_name,"Royal Ascot");
	htl2.hotel_staff = 300;
	
	htl3.hotel_id = 789;
	strcpy(htl3.hotel_name,"Burj Al Arab");
	htl3.hotel_staff = 500;
	
	cout<<"Hotel id : " <<htl1.hotel_id<<endl;
	cout<<"Hotel name :  "<<htl1.hotel_name<<endl;
	cout<<"Hotel staff :  "<<htl1.hotel_staff<<endl<<endl;
	
	
	cout<<"Hotel id : " <<htl2.hotel_id<<endl;
	cout<<"Hotel name :  "<<htl2.hotel_name<<endl;
	cout<<"Hotel staff :  "<<htl2.hotel_staff<<endl<<endl;
	
	cout<<"Hotel id : " <<htl3.hotel_id<<endl;
	cout<<"Hotel name :  "<<htl3.hotel_name<<endl;
	cout<<"Hotel staff :  "<<htl3.hotel_staff<<endl<<endl;
	return 0;
	
}