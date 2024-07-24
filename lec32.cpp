//#include <iostream>
//using namespace std;
//// The vehicle is base class
//class Vehicle
//{
//	public:
//		int number_tyres;
//		string name;
//		int capacity;
//		int mileage;
//		
//};
//
//// Now i will inherit the features of the base class into the derived classes
//class SchoolBus: public Vehicle
//{
//		string school_name;
//		int number_holidays;
//		
//		public:
//			
//		
//			void printnameofschool()
//			{
//				cout << "The name of the school is "<<name;
//			}
//};
//class Car: private Vehicle // Derived class car has inherited all the data from the base class
//{
//	// No member named mileage
//	// No member function named calculatemilage
//	private:
//		
//		
//		int number_airbags;
//		int ac_consumption;
//		
//		public:
//			void set_mileage(int mileage)
//			{
//				this->mileage = mileage;
//			}
//			void calculatemileage()
//			{
//					cout << "The mileage is "<<mileage;
//			}
//};
//int main()
//{
//	Car a;
//	a.set_mileage(50);
//	a.calculatemileage();
//	
//	
//}



#include <iostream>
using namespace std;
// The vehicle is base class
class Vehicle
{
	public:
		int number_tyres;
		string name;
		int capacity;
		int mileage;
		
};

// Now i will inherit the features of the base class into the derived classes
class SchoolBus: public Vehicle
{
		string school_name;
		int number_holidays;
		
		public:
			
		
			void printname()
			{
				cout <<"halaulueah"<<name<<endl;
			}
};
class Car: public Vehicle // Derived class car has inherited all the data from the base class
{
	

	public:
		
		
		int number_airbags;
		int ac_consumption;
		
		public:
			
			void printname()
			{
				cout<< name;
			}
};
class SUV: public Car
{
	public:
		int four_wheel_drive;
		
};	
		
int main()
{
	Car a;
	SchoolBus b;
    a.name = "Bullet";
	b.name = "Skoda";
	
	a.printname();
	cout << endl;
	b.printname();
	
	
}

// The base class is public