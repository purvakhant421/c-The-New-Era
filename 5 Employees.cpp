#include<iostream>
#include<string.h>

using namespace std;
class employees {
	public:
		int emp_id;
		char emp_name[100];
		char emp_role[100];
		int emp_age;
		int emp_salary;
		int emp_experience;
		char emp_city[100];
		char emp_company_name[100];
};

int main(){
	employees  emp1 , emp2 , emp3 , emp4 , emp5 ;
	
	emp1.emp_id = 123;
	strcpy(emp1.emp_name,"purva");
	strcpy(emp1.emp_role,"MD");
	emp1.emp_age = 20;
	emp1.emp_salary = 500000;
	emp1.emp_experience = 5;
	strcpy(emp1.emp_city,"Surat");
	strcpy(emp1.emp_company_name,"Infotachus");
	
	
	
	emp2.emp_id = 456;
	strcpy(emp2.emp_name,"shreedev");
	strcpy(emp2.emp_role,"HR");
	emp2.emp_age = 25;
	emp2.emp_salary = 100000;
	emp2.emp_experience = 2;
	strcpy(emp2.emp_city,"Surat");
	strcpy(emp2.emp_company_name,"google");
	
	
	
	emp3.emp_id = 789;
	strcpy(emp3.emp_name,"viral");
	strcpy(emp3.emp_role,"Finance");
	emp3.emp_age = 20;
	emp3.emp_salary = 20000;
	emp3.emp_experience = 2;
	strcpy(emp3.emp_city,"Ahemdabad");
	strcpy(emp3.emp_company_name,"wisdom");
	
	emp4.emp_id = 987;
	strcpy(emp4.emp_name,"sharan");
	strcpy(emp4.emp_role,"Admin");
	emp4.emp_age = 18;
	emp4.emp_salary = 5000;
	emp4.emp_experience = 0;
	strcpy(emp4.emp_city,"Rajkot");
	strcpy(emp4.emp_company_name,"shree durga");
	
	emp5.emp_id = 654;
	strcpy(emp5.emp_name,"mishu");
	strcpy(emp5.emp_role,"MD");
	emp5.emp_age = 22;
	emp5.emp_salary = 100000;
	emp5.emp_experience = 5;
	strcpy(emp5.emp_city,"Filipains");
	strcpy(emp5.emp_company_name,"Concept Medical Research");
	
	
	cout<<"Employees id : " <<emp1.emp_id<<endl;
	cout<<"Employees name :  "<<emp1.emp_name<<endl;
	cout<<"Employees role :  "<<emp1.emp_role<<endl;
	cout<<"Employees age :  "<<emp1.emp_age<<endl;
	cout<<"Employees salary :  "<<emp1.emp_salary<<endl;
	cout<<"Employees experience :  "<<emp1.emp_experience<<endl;
	cout<<"Employees city :  "<<emp1.emp_city<<endl;
	cout<<"Employees company_name :  "<<emp1.emp_company_name<<endl<<endl<<endl;
	
	
	cout<<"Employees id : " <<emp2.emp_id<<endl;
	cout<<"Employees name :  "<<emp2.emp_name<<endl;
	cout<<"Employees role :  "<<emp2.emp_role<<endl;
	cout<<"Employees age :  "<<emp2.emp_age<<endl;
	cout<<"Employees salary :  "<<emp2.emp_salary<<endl;
	cout<<"Employees experience :  "<<emp2.emp_experience<<endl;
	cout<<"Employees city :  "<<emp2.emp_city<<endl;
	cout<<"Employees company_name :  "<<emp2.emp_company_name<<endl<<endl<<endl;
	
	cout<<"Employees id : " <<emp3.emp_id<<endl;
	cout<<"Employees name :  "<<emp3.emp_name<<endl;
	cout<<"Employees role :  "<<emp3.emp_role<<endl;
	cout<<"Employees age :  "<<emp3.emp_age<<endl;
	cout<<"Employees salary :  "<<emp3.emp_salary<<endl;
	cout<<"Employees experience :  "<<emp3.emp_experience<<endl;
	cout<<"Employees city :  "<<emp3.emp_city<<endl;
	cout<<"Employees company_name :  "<<emp3.emp_company_name<<endl<<endl<<endl;
	
	cout<<"Employees id : " <<emp4.emp_id<<endl;
	cout<<"Employees name :  "<<emp4.emp_name<<endl;
	cout<<"Employees role :  "<<emp4.emp_role<<endl;
	cout<<"Employees age :  "<<emp4.emp_age<<endl;
	cout<<"Employees salary :  "<<emp4.emp_salary<<endl;
	cout<<"Employees experience :  "<<emp4.emp_experience<<endl;
	cout<<"Employees city :  "<<emp4.emp_city<<endl;
	cout<<"Employees company_name :  "<<emp4.emp_company_name<<endl<<endl<<endl;
	
	cout<<"Employees id : " <<emp5.emp_id<<endl;
	cout<<"Employees name :  "<<emp5.emp_name<<endl;
	cout<<"Employees role :  "<<emp5.emp_role<<endl;
	cout<<"Employees age :  "<<emp5.emp_age<<endl;
	cout<<"Employees salary :  "<<emp5.emp_salary<<endl;
	cout<<"Employees experience :  "<<emp5.emp_experience<<endl;
	cout<<"Employees city :  "<<emp5.emp_city<<endl;
	cout<<"Employees company_name :  "<<emp5.emp_company_name<<endl<<endl<<endl;
	
	return 0;
	
}