#pragma once
#include<iostream>
#include<string.h>
using namespace std;


class Domain7
{
	private:
		char *string7;
		int frequency;
		int size;
	public:
	Domain7();
	void UploadingDomain7();
    string GetFunction();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	void print();
	~Domain7();
};
