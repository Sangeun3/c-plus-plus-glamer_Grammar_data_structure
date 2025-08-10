#include <iostream>


void countCard(char* cardList, char* card)
{
	for (int x = 0; x < 15; x++)
	{
		if (card[x] == '\0')
		{
			break;
		}
		cardList[card[x]]++;
	}
}

void countKindOfCard(char* cardList, int* n)
{
	for (int y = 0; y < 256; y++)
	{
		if (cardList[y] != 0)
		{
			(*n)++;
		}
	}
}
int main()
{
	char cardList[256] = {};
	char card[16];
	int kindOfCard = 0;
	std::cin >> card;
	countCard(cardList, card);
	countKindOfCard(cardList, &kindOfCard);
	std::cout << kindOfCard << "°³";
	return 0;
}