#include<iostream>
using namespace std;


/*int main()
{
	int score = 0;
	cout << "������1��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ:" << score << endl;

	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ������" << endl;
	}

	system("pause");

	return 0;
}*/

int mian()
{
	int score = 0;
	cout << "������1�����Է�����" << endl;
	cin >> score;
	
	if (score > 600)
		cout << "����һ��" << endl;
	else
		cout << "δ����һ��" << endl;

	system("pause");
	return 0;
}


int main()
{
	int score = 0;
	cout << "������1�����Է���" << endl;
	cin >> score;

	if (score > 600)
		cout << "����1��" << endl;
	else if (score > 500)
		cout << "����2��" << endl;
	else if (score > 400)
		cout << "����3��" << endl;
	else
		cout << "���ϴ�ѧ������" << endl;

	system("pause");
	return 0;

}


int main()
{
	int score = 0;
	cout << "������߿�����" << endl;
	cin >> score;

	if (score > 600){
		cout << "����1��" << endl;
		if (score > 700)
		{
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else 
		{
			cout << "���ܿ����й������ѧ" << endl;
		}
	}
	else if (score > 500)
		cout << "����2��" << endl;
	else if (score > 400)
		cout << "����3��" << endl;
	else
		cout << "���ϴ�ѧ������" << endl;

	system("pause");
	return 0;

}