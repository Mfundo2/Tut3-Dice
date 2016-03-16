#include<iostream>
#include<cstdlib>
class DiceRoll //class DiceRoll That simulate a dice
{
public:
	DiceRoll();
	~DiceRoll();
	int Roll();//method Roll() which will return the result of a roll
	float average(DiceRoll, int);
	float average(int[], int);
};

int DiceRoll::Roll()
{
	int random;
	random = rand() % 6 + 1;//Gnerate random numbers between 1 and 6
	return random;

}
//function average()  that take Dice object and number of rolls
float DiceRoll::average(DiceRoll Die, int Numbr)
{
	int rnd = 0;
	for (int i = 0; i < Numbr; i++)
	{
		rnd += Die.Roll();
	}
	return (int)(rnd / Numbr);
}
//function average()  that take an array of integers and number of integers in the array
float DiceRoll::average(int NRolls[], int Numbr)
{
	int rnd = 0;
	for (int i = 0; i < Numbr; i++)
	{
		NRolls[i] = Roll();
		rnd += NRolls[i];//add the integers from the array 

	}
	return (int)(rnd) / (Numbr);

}