#include <iostream>
#include <random>
#include <cstring>
#include <string>


using namespace std;

int Whoswin(int a);
int number_RD();

void main_1()
{

}
int main()
{	
	int a;
	int f;
	string player;
	string s;
	string t;


	cout << "====가위바위보 게임====" << "\n" << endl;
		cin >> player;

		s = player;

		f = number_RD();

		t;
		if (f == 0) {
			t = "가위";
		}
		else if (f == 1)
			t == "바위";
			else
				t == "보";

		

		if (s == "가위" && t == "보") {
			a = 1;
			Whoswin(a);
		}
		else
			if (s == "보" && t == "바위") {
				a = 1;
				Whoswin(a);
			}
			else
				if (s == "바위" && t == "가위") {
					a = 1;
					Whoswin(a);
				}
				else
					if (t == "가위" && s == "보") {
						a = 0;
						Whoswin(a);
					}
					else 
						if (t == "보" && s == "바위") {
							a = 0; 
							Whoswin(a);
						}
						else 
							if (t == "바위" && s == "가위") {
								a = 0;
							Whoswin(a);
							}
}

int Whoswin(int a)
{
	if (a == 0)
		cout << "패배" << endl;
	else
		cout << "승리" << endl;
	return a;
}

int number_RD()
{
	//시드값을 얻기 위한 random_device 생성
	random_device rd;

	// random_device 를 통해 난수 생성 엔진을 초기화 한다.
	std::mt19937 gen(rd());

	// 0부터 2까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
	std::uniform_int_distribution<int> dis(0, 2);
	int a = dis(gen);

	return a;
}
