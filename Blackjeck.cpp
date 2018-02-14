#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void PlayerCard()
{
	srand(time(0));

	pcard_1 = (rand() % 14) + 1;
	pcard_2 = (rand() % 14) + 1;

	//Player card1 ===================================================
	if (pcard_1 == 11)
	{
		pcard_1 = 10;

		printCard_1 = 'J';

	}

	if (pcard_1 == 12)
	{
		pcard_1 = 10;

		printCard_1 = 'Q';

	}

	if (pcard_1 == 13)
	{
		pcard_1 = 10;

		printCard_1 = 'K';

	}

	if (pcard_1 == 14)
	{
		pcard_1 = 10;

		printCard_1 = 'A';

	}

	//Plyer card 2

	if (pcard_2 == 11)
	{
		pcard_2 = 10;

		printCard_2 = 'J';

	}

	if (pcard_2 == 12)
	{
		pcard_2 = 10;

		printCard_2 = 'Q';

	}

	if (pcard_2 == 13)
	{
		pcard_2 = 10;

		printCard_2 = 'K';

	}

	if (pcard_2 == 14)
	{
		pcard_2 = 10;

		printCard_2 = 'A';

	}

}

void DealerCard()
{
	srand(time(0));

	dcard_1 = (rand() % 14) + 1;
	dcard_2 = (rand() % 14) + 1;

	if (dcard_1 == 11)
	{
		dcard_1 = 10;

		printCard_1 = 'J';

	}

	if (dcard_1 == 12)
	{
		dcard_1 = 10;

		printCard_1 = 'Q';

	}

	if (dcard_1 == 13)
	{
		dcard_1 = 10;

		printCard_1 = 'K';

	}

	if (dcard_1 == 14)
	{
		dcard_1 = 10;

		printCard_1 = 'A';

	}

	//Dealer card 2

	if (dcard_2 == 11)
	{
		dcard_2 = 10;

		printCard_2 = 'J';

	}

	if (dcard_2 == 12)
	{
		dcard_2 = 10;

		printCard_2 = 'Q';

	}

	if (dcard_2 == 13)
	{
		dcard_2 = 10;

		printCard_2 = 'K';

	}

	if (dcard_2 == 14)
	{
		dcard_2 = 10;

		printCard_2 = 'A';

	}
}


int main() {

	int dealerCard, dcard_1, dcard_2, dRanCard, dcardTotal;
	int playerCard, pcard_1, pcard_2, pRanCard_1, pRanCard_2 pRanCard, pcardTotal;
	char printCard_1, printCard_2, 'A','J','Q','K';

	char playerQuestion = 'y';
	char question = 'y';

	bool playing;

	srand(time(0));




	

	while (playing)
	{
		cout << "Welcome to the Game of BlackJack" << endl;
		//player get 2 cards

		PlayerCard();


		pcardTotal = pcard_1 + pcard_2;
		cout << "Your first card number is " << printCard_1 << pcard_1 << endl;
		cout << "Your second card number is " << printCard_2 << pcard_2 << endl;
		cout << "Your total number is " << pcardTotal << endl << endl;


		//dealer hand out 2 cards=================================

		

		//Dealer card1
		
		DealerCard();

		dcardTotal = dcard_1 + dcard_2;

		cout << "Dealer first card number is " << printCard_1 << dcard_1 << endl;

		//ask player is he want more card? ==========================================

		cout << "Do you want another card? (y/n)" << endl;


		cin >> playerQuestion;
		while (playerQuestion == 'y')
		{
			pRanCard = (rand() % 14) + 1;
			pcardTotal = pcardTotal + pRanCard;

			cout << "Your new card number is " << pRanCard << endl;
			cout << "Your total number is " << pcardTotal << endl << endl;



			if (pcardTotal >= 22)
			{
				playing = false;
				cout << "you lose the game!!" << endl;
			}
			else
			{
				cout << "Do you want another card? (y/n)" << endl;
				cin >> playerQuestion;
				if (playerQuestion != 'y')
				{
					playerQuestion = false;
				}
			}


		}

		cout << "Dealer second card number is " << dcard_2 << endl;
		cout << "Dealer total number is " << dcardTotal << endl << endl;



		while (dcardTotal <= 16)
		{
			dRanCard = (rand() % 10) + 1;
			dcardTotal = dcardTotal + dRanCard;
			cout << "Dealer new card number is " << dRanCard << endl;

			cout << "Dealer total number is " << dcardTotal << endl << endl;

			if (dcardTotal > 21)
			{
				cout << "you won the game!!" << endl;
			}
		}

		if (dcardTotal > pcardTotal)
		{
			cout << "you lose the game!!" << endl;
		}
		else
		{
			cout << "you won the game!!" << endl;
		}



		cout << "Would you like to play again? (y/n)" << endl;
		cin >> question;
		if (question == 'y')
		{
			playing = true;

			dealerCard = 0;
			playerCard = 0;


		}
		else
		{
			playing = false;
		}

	}




	return 0;
}

