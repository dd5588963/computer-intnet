#include"class.h"
void Graph_DG::addnode(int num) {
	if (num > vexnum) {
		vexnum++;
		dis[vexnum - 1].exist = true;
		cout << "输入新增的路径数目:";
		int numb;
		cin >> numb;
		cout << "与该路由器相连的其他路由器序号及权值（两路由器之间距离）为:";
		for (int i = 0; i < numb; i++) {
			int m, n;//m为其他路由器号,n为权值
			cin >> m >> n;
			arc[num - 1][m-1] = n;
			arc[m-1][num - 1] = n;
		}
	}
	else {
		dis[num - 1].exist = true;
		cout << "输入新增的路径数目:";
		int numb;
		cin >> numb;
		cout << "与该路由器相连的其他路由器序号及权值（两路由器之间距离）为:";
		for (int i = 0; i < numb; i++) {
			int m, n;//m为其他路由器号,n为权值
			cin >> m >> n;
			arc[num - 1][m-1] = n;
			arc[m-1][num - 1] = n;
		}
	}
}