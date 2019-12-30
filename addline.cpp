#include"class.h"
void Graph_DG::addline() //增加某条路线
{
	cout << "输入需要增加路线两端的路由器序号及权重："<<endl;
	int m1, n1, q;
	cin >> m1 >> n1 >> q;
	for (int i = 0; i < vexnum; i++) {
		arc[m1 - 1][n1 - 1] = q;
		arc[n1 - 1][m1 - 1] = q;
	}
}