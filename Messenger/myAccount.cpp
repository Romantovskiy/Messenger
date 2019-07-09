#include "pch.h"
#include "myAccount.h"

/*
void myAccount::newChat()
{
	bool vhod;
	vhod = true;
	string friendsName;
	int i;
	cout << "С кем вы хотите начать переписываться?\n"; cin >> friendsName;
	for (i = 0; i < kolvoChat; i++)
	{
		if ((chats[i]->Autor1 == friendsName) || (chats[i]->Autor2 == friendsName))
		{
			cout << "Этот чат уже существует.\n";
			vhod = false;
			return;
		}
	}
	if (vhod)
	{
		Perepiska* newChat = new Perepiska;
		newChat->Autor1 = myName;
		newChat->Autor2 = friendsName;
		newChat->kolvoMessage = 0;
		chats[kolvoChat] = newChat;
		kolvoChat++;
	}
}
*/

void myAccount::ShowChats()
{
	int i;
	for (i = 0; i < kolvoChat; i++)
	{
		if (chats[i]->Autor2 == myName)
		{
			cout << chats[i]->Autor1 << "\n";
		}
		else
		{
			cout << chats[i]->Autor2 << "\n";
		}
	}
}

/*
void myAccount::writeMessage()
{
	bool vhod;
	vhod = true;
	int i;
	string friendsName;
	string Text;
	cout << "Кому вы хотите написать?\n"; cin >> friendsName;
	for (i = 0; i < kolvoChat; i++)
	{
		if ((chats[i]->Autor1 == friendsName) || (chats[i]->Autor2 == friendsName))
		{
			chats[i]->ShowPerepiska();
			cout << "Введите ваше сообщение:\n" << myName << ": "; cin >> Text;
			chats[i]->AddNewMassege(myName, Text);
			vhod = false;
			return;
		}
		if (vhod)
		{
			cout << "Вы еще не начали переписываться с " << friendsName << ". Для начала создайте чат.\n";
		}
	}
}
*/

/*
void myAccount::accountMenu()
{
	int vibor;
	cout << "Выбирите одно из действий:\n1 - Посмотреть список своих чатов\n2 - Написать новое сообщение\n3 - Создать новый чат\n";
	cin >> vibor;
	if (vibor == 1)
	{
		ShowChats();
	}
	if (vibor == 2)
	{
		writeMessage();
	}
	if (vibor == 3)
	{
		newChat();
	}
	cout << "Выбирите одно из действий:\n1 - Продолжить в этом аккаунте\n2 - Выход\n";
	cin >> vibor;
	if (vibor == 1)
	{
		accountMenu();
	}
	if (vibor == 2)
	{
		return;
	}
}
*/

string myAccount::getPassword()
{
	return password;
}

void myAccount::setPassword(string P)
{
	password = P;
}


myAccount::myAccount()
{
}

myAccount::~myAccount()
{
}