#include <iostream>

using namespace std;

class People
{
protected:

	int person;
	string name;
	string soname;
	string middlname;

public:

	People()
	{
		this->person=1;
		this->name = {};
		this->soname = {};
		this->middlname = {};
	}

	People(int person, string name, string soname, string middlname):
		person{person}
	{
		this->name = new char[];
		this->soname = new char[];
		this->middlname = new char[];



	}

	~People()
	{
		
	}

};

class Float : public People
{

protected:
	int size{ 10 };
	int numberRoom;
	int Plosch;

	People* peopleArr = new People[size];


public:

	void add()
	{
		for (int i = 0; i < size; i++)
		{
			peopleArr[i];
		}


	}

	~Float()
	{
		delete[]  peopleArr;
	}

};

class House : public Float
{
protected:

	int number;
	int round;

	int size = 15;
	Float* floatarr; 

public:

	House()
	{

	}


	~House()
	{
		delete[]floatarr;
	}

};

int main()
{
	People p1( 8,"po", "gj", "sjk");


	return 0;
}