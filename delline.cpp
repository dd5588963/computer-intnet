#include"class.h"
void Graph_DG::delline() {
	cout << "���ɾ��·�����˵�·�������";
	int m, n;
	cin >> m >> n;
	arc[m - 1][n - 1] = INT_MAX;
	arc[n - 1][m - 1] = INT_MAX;
}