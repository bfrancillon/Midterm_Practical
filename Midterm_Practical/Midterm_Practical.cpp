// Midterm_Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Questions.h"

int main()
{
	Questions question;
	bool game = true;
	int answer; 
	unsigned short correctanswer = 0;
	const unsigned short count = 5;

	while (game == true)
	{
		system("cls");
		for (int i = 0; i < count; i++)
		{


			int randQuestion = rand() % 6;

			switch (randQuestion)
			{
			case 1:
			{
				question.GetQuestionNumber1();
				std::cin >> answer;
				if (answer == 1)
				{
					std::cout << "Correct!!!!\n";
				}
				else
				{
					std::cout << "InCorrect\n";
				}

				system("pause");

				break;
			}
			case 2:
			{
				question.GetQuestionNumber2();
				std::cin >> answer;
				if (answer == 3)
				{
					std::cout << "Correct!!!!\n";
				}
				else if (answer == '1' || answer == '2' || answer == '4')
				{
					std::cout << "InCorrect\n";
				}

				break;
			}
			case 3:
			{
				question.GetQuestionNumber3();
				std::cin >> answer;
				if (answer == 4)
				{
					std::cout << "Correct!!!!\n";
				}
				else 
				{
					std::cout << "InCorrect\n";
				}

				break;
			}
			case 4:
			{
				question.GetQuestionNumber4();
				std::cin >> answer;
				if (answer == 1)
				{
					std::cout << "Correct!!!!\n";
				}
				else 
				{
					std::cout << "InCorrect\n";
				}

				break;
			}
			case 5:
			{
				question.GetQuestionNumber5();
				std::cin >> answer;
				if (answer == 2)
				{
					std::cout << "Correct!!!!\n";
				}
				else
				{
					std::cout << "InCorrect\n";
				}

				break;
			}
			break;

			}
			

		}
	}

}
