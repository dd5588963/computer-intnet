#include"class.h"
void Graph_DG::createGraph() {
	ifstream fin("4.txt");
	cout << "请输入每条路径的起点和终点（路由器编号从1开始）以及其权重" << endl;
	int start;
	int end;
	int weight;
	int count = 0;
	while (count != this->edge) {
		fin >> start >> end >> weight;
		//首先判断路径的信息是否合法
		while (!this->check_edge_value(start, end, weight)) {
			cout << "输入的路径的信息不合法，请重新输入" << endl;
			fin >> start >> end >> weight;
		}
		//对邻接矩阵对应上的路由器赋值
		arc[start - 1][end - 1] = weight;
		//由于是无向图，补全矩阵
		arc[end - 1][start - 1] = weight;
		++count;
	}
}