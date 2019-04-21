//encapuslation allows you to privatize certain infomation inside of your class so it can't be access from other class  
// header ==> Function Declarations will go
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H

#define BMI_H

class BMI {
public:
	//Default constructor sets your member variables to its NULL state
	BMI();

	//Overload Constructor is different way of calling the same function
	BMI(string, int, double);

	//Destructor once you're done using the object it is destroyed out of memory
	~BMI();

	//Accessor Functions- return our member variables
	string getName() const;
	//getName- returns name of patient

	int getHeight() const;

	double getWeight() const;

	//Mutator Functions allows us to edit each member varible one at a time
	void setName(string);
	//setName-set name of patient 
	//@pram string -name of patient

	void setHeight(int);
	//setHeight-set height of patient 
	//@pram int -height of patient

	void setWeight(double);
	//setWeight-set weight of patient 
	//@pram double -weight of patient

	double calculateBMI();
	//calculateBMI - calculate BMI of patient
	//@return double -BMI of student

private:
	//Member variables
	string newName;
	int newHeight;
	double newWeight;


};

#endif