#include"class.h"
void Graph_DG::addline() //����ĳ��·��
{
	cout << "������Ҫ����·�����˵�·������ż�Ȩ�أ�"<<endl;
	int m1, n1, q;
	cin >> m1 >> n1 >> q;
	for (int i = 0; i < vexnum; i++) {
		arc[m1 - 1][n1 - 1] = q;
		arc[n1 - 1][m1 - 1] = q;
	}
}