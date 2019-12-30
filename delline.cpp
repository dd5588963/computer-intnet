#include"class.h"
void Graph_DG::delline() {
	cout << "输出删除路径两端的路由器序号";
	int m, n;
	cin >> m >> n;
	arc[m - 1][n - 1] = INT_MAX;
	arc[n - 1][m - 1] = INT_MAX;
}