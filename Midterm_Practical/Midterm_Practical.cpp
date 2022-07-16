// Midterm_Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Questions.h"

int main()
{
	Questions question;
	bool game = true;
	int answer;
	const unsigned short count = 5;
	system("cls");
	for (int i = 0; i < count; i++)
	{

		question.GetQuestionNumber1();
		std::cin >> answer;
		if (answer == 1)
		{
			std::cout << "Correct!!!!\n";
			i++;

		}
		else
		{
			std::cout << "InCorrect\n";
		}


		question.GetQuestionNumber2();
		std::cin >> answer;
		if (answer == 3)
		{
			std::cout << "Correct!!!!\n";
			i++;

		}
		else
		{
			std::cout << "InCorrect\n";
		}


		question.GetQuestionNumber3();
		std::cin >> answer;
		if (answer == 4)
		{
			std::cout << "Correct!!!!\n";
			i++;

		}
		else
		{
			std::cout << "InCorrect\n";
		}


		question.GetQuestionNumber4();
		std::cin >> answer;
		if (answer == 1)
		{
			std::cout << "Correct!!!!\n";
			i++;
		}
		else
		{
			std::cout << "InCorrect\n";
		}



		question.GetQuestionNumber5();
		std::cin >> answer;
		if (answer == 2)
		{
			std::cout << "Correct!!!!\n";
			i++;
		}
		else
		{
			std::cout << "InCorrect\n";
		}

		//break;
		//system("pause");
		//system("cls");


		std::cout << "Your score was a " << (i / 5.0) * 100 << "%!" << " \nThat is a " << i << "/5"<<std::endl;
		system("pause");
		system("cls");


		//std::cout << "You got " << count << "/" << answer << " answers correct.\n";



	}

}
	
