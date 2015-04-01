#ifndef huge_H
#define huge_H

#define MAX 1000 //< max length of huge integer
class HugeUInteger
{
public:
	HugeUInteger(); //< default constructor
	HugeUInteger(HugeUInteger &in); //< copy constructor
	void random(unsigned int size); //< randomly generate an integer
	void add(HugeUInteger &add); //< add a number 
	void subtract(HugeUInteger &sub); //< subtract a number 
	                                  //< (Use ZERO to replace negative result)
	void print(); //< print out the huge unsigned integer
private:
	
	int lenght;
	int number[80];
	
	
	
	///add something to stores this huge integer (dynamic array or std::vector or ¡K)
	///add some helper functions
};

#endif