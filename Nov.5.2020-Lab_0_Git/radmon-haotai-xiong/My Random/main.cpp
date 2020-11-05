// Login: Harry Xiong C00265675
// Author: Harry Xiong C00265675
// Estimated time: 5s
// Actual time: 15s
// Date: Nov.5th.2020

#include<iostream> // cout cin
#include<cstdlib> // rand
#include<ctime> // time
#include<stdlib.h> // RAND_MAX

void randomInitialize();
int random(int max);
int random(int max_1, int max_2);
int randomDice(int face);
float random(float max);


int main()
{
	randomInitialize();
	int num = 0;

	std::cout << "Result for randomDice(10): \n" << std::endl;
	std::cout << "You roll " << randomDice(10) << std::endl;
	std::cout << "You roll " << randomDice(10) << std::endl;
	std::cout << "You roll " << randomDice(10) << std::endl;
	std::cout << "You roll " << randomDice(10) << std::endl;
	std::cout << "You roll " << randomDice(10) << std::endl;

	std::cout << "\nResult for random(5.0f): \n" << std::endl;
	std::cout << random(5.0f) << std::endl;
	std::cout << random(5.0f) << std::endl;
	std::cout << random(5.0f) << std::endl;
	std::cout << random(5.0f) << std::endl;
	std::cout << random(5.0f) << std::endl;

	std::cout << "\nResult for random(8): \n" << std::endl;
	std::cout << random(8) << std::endl;
	std::cout << random(8) << std::endl;
	std::cout << random(8) << std::endl;
	std::cout << random(8) << std::endl;
	std::cout << random(8) << std::endl;

	std::cout << "\nResult for random(2, 10): \n" << std::endl;
	std::cout << random(2, 10) << std::endl;
	std::cout << random(2, 10) << std::endl;
	std::cout << random(2, 10) << std::endl;
	std::cout << random(2, 10) << std::endl;
	std::cout << random(2, 10) << std::endl;

	system("Pause");
	return 0;
}

// resets the random sequence
void randomInitialize()
{
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::rand();
}

// get a random number between 0 and parameter
int random(int max)
{
	int result = 0;
	result = std::rand() % (max + 1);
	return result;
}


/// <summary>
/// get a random number between max_1 and max_2
/// </summary>
/// <param name="max_1">min bound</param>
/// <param name="max_2">max bound</param>
/// <returns>random num between max_1 and max_2</returns>
int random(int max_1, int max_2)
{
	int result = 0;
	result = std::rand() % (max_2 - max_1 + 1) + max_1;
	return result;
}

/// <summary>
/// get a random number from a face_faces dice
/// </summary>
/// <param name="face"></param>
/// <returns></returns>
int randomDice(int face)
{
	int result = 0;
	result = std::rand() % face + 1;
	return result;
}

/// <summary>
/// return a decimal num between 0 and max
/// </summary>
/// <param name="max">max bound</param>
/// <returns>random decimal num</returns>
float random(float max)
{
	float result = 0.0f;
	result = static_cast<float>(std::rand()) / static_cast <float> (RAND_MAX) * max;
	return result;
}
