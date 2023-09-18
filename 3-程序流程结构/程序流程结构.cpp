#include<iostream>
using namespace std;


/*int main()
{
	int score = 0;
	cout << "请输入1个分数：" << endl;
	cin >> score;

	cout << "您输入的分数为:" << score << endl;

	if (score > 600)
	{
		cout << "我考上了一本大学！！！" << endl;
	}

	system("pause");

	return 0;
}*/

int mian()
{
	int score = 0;
	cout << "请输入1个考试分数：" << endl;
	cin >> score;
	
	if (score > 600)
		cout << "考上一本" << endl;
	else
		cout << "未考上一本" << endl;

	system("pause");
	return 0;
}


int main()
{
	int score = 0;
	cout << "请输入1个考试分数" << endl;
	cin >> score;

	if (score > 600)
		cout << "考上1本" << endl;
	else if (score > 500)
		cout << "考上2本" << endl;
	else if (score > 400)
		cout << "考上3本" << endl;
	else
		cout << "想上大学复读吧" << endl;

	system("pause");
	return 0;

}


int main()
{
	int score = 0;
	cout << "请输入高考分数" << endl;
	cin >> score;

	if (score > 600){
		cout << "考上1本" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考入清华大学" << endl;
		}
		else 
		{
			cout << "您能考入中国人民大学" << endl;
		}
	}
	else if (score > 500)
		cout << "考上2本" << endl;
	else if (score > 400)
		cout << "考上3本" << endl;
	else
		cout << "想上大学复读吧" << endl;

	system("pause");
	return 0;

}