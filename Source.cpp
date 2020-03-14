#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	fstream fileSaya;
	int Nomor = 121241;

	fileSaya.open("fileSaya.bin", ios::out | ios::binary);
	fileSaya.write(reinterpret_cast<char*>(&Nomor), sizeof(Nomor));
	fileSaya.close();

	cout << "File Binary telah dibuat!" << endl;

	_getch();
	return 0;
}