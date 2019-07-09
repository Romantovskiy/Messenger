#include "pch.h"
#include "Start.h"
#include <iostream>
#include <string>
using namespace std;



int main() {
	setlocale(LC_CTYPE, "rus");
	Start* Messenger = new Start;
	Messenger->kolvoAccountov = 0;
	Messenger->startMenu();
	return 0;
}