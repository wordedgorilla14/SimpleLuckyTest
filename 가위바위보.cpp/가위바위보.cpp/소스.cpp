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


	cout << "====���������� ����====" << "\n" << endl;
		cin >> player;

		s = player;

		f = number_RD();

		t;
		if (f == 0) {
			t = "����";
		}
		else if (f == 1)
			t == "����";
			else
				t == "��";

		

		if (s == "����" && t == "��") {
			a = 1;
			Whoswin(a);
		}
		else
			if (s == "��" && t == "����") {
				a = 1;
				Whoswin(a);
			}
			else
				if (s == "����" && t == "����") {
					a = 1;
					Whoswin(a);
				}
				else
					if (t == "����" && s == "��") {
						a = 0;
						Whoswin(a);
					}
					else 
						if (t == "��" && s == "����") {
							a = 0; 
							Whoswin(a);
						}
						else 
							if (t == "����" && s == "����") {
								a = 0;
							Whoswin(a);
							}
}

int Whoswin(int a)
{
	if (a == 0)
		cout << "�й�" << endl;
	else
		cout << "�¸�" << endl;
	return a;
}

int number_RD()
{
	//�õ尪�� ��� ���� random_device ����
	random_device rd;

	// random_device �� ���� ���� ���� ������ �ʱ�ȭ �Ѵ�.
	std::mt19937 gen(rd());

	// 0���� 2���� �յ��ϰ� ��Ÿ���� �������� �����ϱ� ���� �յ� ���� ����.
	std::uniform_int_distribution<int> dis(0, 2);

	int a = dis(gen);

	return a;
}