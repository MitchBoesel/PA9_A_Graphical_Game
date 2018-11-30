#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <SFML\Graphics.hpp>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class TreeStats
{
public:
	TreeStats();
	
	int getmNumWater();
	int getmNumFert();
	int getmSize();
	int getmHealth();
	string getmStatus();

	void setmHealth(int health);
	void setmNumWater(int newWater);
	void setmNumFert(int newFert);
	void setmSize(int newSize);
	void setmStatus(string newStatus);
	void setmStatus();
	void calcHealth(int water, int fert);

private:
	int mNumWater;
	int mNumFert;
	int mHealth;
	int mSize;
	string mStatus;

};