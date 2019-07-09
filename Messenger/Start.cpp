#include "pch.h"
#include "Start.h"


void Start::newAccount()
{
	bool vhod;
	vhod = true;
	int i;
	string login;
	string password1;
	string password2;
	cout << "Введите ваш логин:\n"; cin >> login;
	for (i = 0; i < kolvoAccountov; i++)
	{
		if (accounts[i]->myName == login)
		{
			cout << "Такой аккаунт уже существует.\n";
			vhod = false;
			return;
		}
	}
	if (vhod)
	{
		while (true)
		{
			cout << "Введите пароль:\n";  cin >> password1;
			cout << "Повторите пароль:\n";  cin >> password2;
			if (password1 != password2)
			{
				cout << "Пароли не совпадают. Повторите ввод пароля еще раз.\n";
			}
			else
			{
				myAccount* newAccount = new myAccount;
				newAccount->myName = login;
				newAccount->setPassword(password1);
				newAccount->kolvoChat = 0;
				accounts[kolvoAccountov] = newAccount;
				kolvoAccountov++;
				cout << "Аккаунт создан!\n";
				return;
			}
		}
	}
}

void Start::Vhod()
{
	bool vhod;
	vhod = true;
	int i;
	string login;
	string password;
	cout << "Введите ваш логин:\n"; cin >> login;
	for (i = 0; i < kolvoAccountov; i++)
	{
		if (accounts[i]->myName == login)
		{
			vhod = false;
			cout << "Введите пароль:\n";  cin >> password;
			if (accounts[i]->getPassword() == password)
			{
				cout << "Вход выполнен успешно!\n";
				accountMenu(i);
				return;
			}
			else
			{
				cout << "Пароль не подходит.\n";
				return;
			}
		}
	}
	if (vhod)
	{
		cout << "Аккаунта с таким именем не существует.\n";
		return;
	}
}

void Start::startMenu()
{
	int vibor;
	cout << "Выбирите одно из действий:\n1 - Создать аккаунт\n2 - Войти в аккаунт\n";
	cin >> vibor;
	if (vibor == 1)
	{
		newAccount();
	}
	if (vibor == 2)
	{
		Vhod();
	}
	cout << "Продолжить?\nВыбирите одно из действий:\n1 - Да\n2 - Нет\n";
	cin >> vibor;
	if (vibor == 1)
	{
		startMenu();
	}
	if (vibor == 2)
	{
		return;
	}
}

void Start::newChat(int n)
{
	bool vhod;
	vhod = true;
	string friendsName;
	int i;
	cout << "С кем вы хотите начать переписываться?\n"; cin >> friendsName;
	for (i = 0; i < accounts[n]->kolvoChat; i++)
	{
		if ((accounts[n]->chats[i]->Autor1 == friendsName) || (accounts[n]->chats[i]->Autor2 == friendsName))
		{
			cout << "Этот чат уже существует.\n";
			vhod = false;
			return;
		}
	}
	if (vhod)
	{
		Perepiska* newChat = new Perepiska;
		newChat->Autor1 = accounts[n]->myName;
		newChat->Autor2 = friendsName;
		newChat->kolvoMessage = 0;
		accounts[n]->chats[accounts[n]->kolvoChat] = newChat;
		accounts[n]->kolvoChat++;
		for (i = 0; i < kolvoAccountov; i++)
		{
			if (accounts[i]->myName == friendsName)
			{
				accounts[i]->chats[accounts[i]->kolvoChat] = newChat;
				accounts[i]->kolvoChat++;
				return;
			}
		}
		cout << "Пользователя с таким ником не существует.\n";
	}
}

void Start::writeMessage(int n)
{
	bool vhod;
	vhod = true;
	int i;
	int j;
	string friendsName;
	string Text;
	cout << "Кому вы хотите написать?\n"; cin >> friendsName;
	for (i = 0; i < accounts[n]->kolvoChat; i++)
	{
		if ((accounts[n]->chats[i]->Autor1 == friendsName) || (accounts[n]->chats[i]->Autor2 == friendsName))
		{
			accounts[n]->chats[i]->ShowPerepiska();
			cout << "Введите ваше сообщение:\n" << accounts[n]->myName << ": "; cin >> Text;
			accounts[n]->chats[i]->AddNewMassege(accounts[n]->myName, Text);
			cout << accounts[n]->chats[i]->kolvoMessage << "\n";
			vhod = false;
			for (i = 0; i < kolvoAccountov; i++)
			{
				if (accounts[i]->myName == friendsName)
				{
					for (j = 0; j < accounts[i]->kolvoChat; j++)
					{
						if ((accounts[i]->chats[j]->Autor1 == accounts[n]->myName) || (accounts[i]->chats[j]->Autor2 == accounts[n]->myName))
						{
							accounts[i]->chats[j]->AddNewMassege(accounts[n]->myName, Text);
							cout << accounts[i]->chats[j]->kolvoMessage << "\n";
							return;
						}
					}
				}
			}
		}
	}
	if (vhod)
		{
			cout << "Вы еще не начали переписываться с " << friendsName << ". Для начала создайте чат.\n";
		}
}


void Start::accountMenu(int i)
{
	{
		int vibor;
		cout << "Выбирите одно из действий:\n1 - Посмотреть список своих чатов\n2 - Написать новое сообщение\n3 - Создать новый чат\n4 - Выйти из аккаунта";
		cin >> vibor;
		if (vibor == 1)
		{
			accounts[i]->ShowChats();
		}
		if (vibor == 2)
		{
			writeMessage(i);
		}
		if (vibor == 3)
		{
			newChat(i);
		}
		if (vibor == 3)
		{
			return;
		}
		cout << "Выбирите одно из действий:\n1 - Продолжить в этом аккаунте\n2 - Выход\n";
		cin >> vibor;
		if (vibor == 1)
		{
			accountMenu(i);
		}
		if (vibor == 2)
		{
			return;
		}
	}
}



Start::Start()
{
}

Start::~Start()
{
}