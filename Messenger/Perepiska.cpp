#include "pch.h"
#include "Perepiska.h"

void Perepiska::AddNewMassege(string Autor, string Text)
{
	Message* newMessege = new Message;
	newMessege->setAutor(Autor);
	newMessege->setText(Text);
	message[kolvoMessage] = newMessege;
	kolvoMessage++;

}

void Perepiska::ShowPerepiska()
{
	int i;
	for (i = 0; i < kolvoMessage; i++)
	{
		cout << message[i]->getAutor() << ": " << message[i]->getText() << "\n";
		i++;
	}
}



Perepiska::Perepiska()
{
}

Perepiska::~Perepiska()
{
}
