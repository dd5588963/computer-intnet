#include"class.h"
void Graph_DG::addnode() {
	vexnum++;
	cout << "输入新增的路径数目:";
	int numb;
	cin >> numb;
	cout << "与该路由器相连的其他路由器序号及权值（两路由器之间距离）为:";
	for (int i = 0; i < numb; i++) {
		int m, n;//m为其他路由器号,n为权值
		cin >> m >> n;
		arc[vexnum - 1][m] = n;
		arc[m][vexnum - 1] = n;
	}

}