#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}


string StrAfterEncryption(string Str,short Key)
{
	for (int i = 0; i <=Str.length(); i++)
	{
		Str[i] = char(int(Str[i] + Key));
	}
	return Str;
}


string BeforeDecryption(string Str, short Key)
{
	for (int i = 0; i <= Str.length(); i++)
	{
		Str[i] = char(int(Str[i] - Key));
	}
	return Str;
}

int main()
{
	string str;
	short key;
	str = ReadString();
	cout << "Enter the key: ";
	cin >> key;
	string EncryptedStr = StrAfterEncryption(str, key);
	cout << "Encrypted string: " << EncryptedStr << endl;
	string DecryptedStr = BeforeDecryption(EncryptedStr, key);
	cout << "Decrypted string: " << DecryptedStr << endl;
	return 0;
}
