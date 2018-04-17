#include<iostream>
#include<time.h>
#define max 5000

using namespace std;

class StringMatching {
public:
	void findMatch(char a[max], char b[max], int n, int m) {
		int k, i, j, band = 0;
		for (i = 0; i <= n - m; i++) {
			k = i; j = 0;
			while (a[k] == b[j] && j <= m) {
				k++; j++;
			}
			if (j >= m - 1) {
				cout << "Valor de Posicion => " << i + 1 << endl;
				band = 1;
			}
			else band = 0;
		}
		if (band = 0) cout << "Valor no encontrado!!!..";
	}
};

int	main() {

	cout << "FB-EXAMPLE01: String Match " << endl;
	char* a = (char*)"UPC, Exigete, Innova";
	char* b = (char*)"get";
	StringMatching* sm = new StringMatching();

	int n = strlen(a);
	int m = strlen(b);

	double beginTime = clock();
	sm->findMatch(a, b, n, m);
	double endTime = clock();
	int t = endTime - beginTime;

	cout << "Tiempo de Ejecuccion => " << (double)t / ((double)CLOCKS_PER_SEC) << endl;
	cout << "Valor de Cadena => " << a << endl;
	cout << "Clave de Cadena => " << b << endl;

	system("pause");
	return 0;
}
