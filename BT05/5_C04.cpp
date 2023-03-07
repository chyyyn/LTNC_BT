#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string a[100];
string select_word(string a[], int n) {
	srand(time(NULL));
	int m = rand() % n;
	return a[m];
}
string check(string a, string b, char c) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == c) {
			b[i] = c;
		}
	}
	return b;
}
void game(string a, int b) {
	cout << a << endl;
	cout << "sai " << b << " lan" << endl;
}
bool check2(string a, char b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b) {
			return true;
		}
		return false;
	}
int main() {
	int n;
	cout << "nhap tu : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "game start";
	char tu;
	int lan_chon = 7;
	string tu_chon = select_word(a, n);
	string output = string(tu_chon.length(), "-");
	for (; ;) {
		game(output, lan_chon);
		cin >> tu;
		cout << endl;
		if (check(tu_chon, tu)) {
			output = check(tu_chon, output, tu);
		}
		else {
			lan_chon--;
		}
		if (output == tu_chon) {
			cout << output << endl << "win";
			break;
		}
		if (lan_chon == 0) {
			cout << "Lost. Correct word is " << tu_chon;
			break;
		}
	}
}