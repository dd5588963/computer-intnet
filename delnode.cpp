#include"class.h"
void Graph_DG::delnode() {
	cout << "��Ҫɾ��·���������Ϊ��";
	int data;
	cin >> data;
	for (int i = 0; i < vexnum; i++) {
		arc[i][data - 1] = INT_MAX;
		arc[data - 1][i] = INT_MAX;
	}
}