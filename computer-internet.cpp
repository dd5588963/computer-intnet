#include"class.h"

int main() {
	ifstream fin("2.txt");
	int vexnum; int edge;
	cout << "输入局域网图的路由器个数和路径的条数：" << endl;
	fin >> vexnum >> edge;
	while (!check(vexnum, edge)) {
		cout << "输入的数值不合法，请重新输入" << endl;
		fin >> vexnum >> edge;
	}
	Graph_DG graph(vexnum, edge);
	graph.createGraph();
	for (int i = 0; i < vexnum; i++) {
		graph.dis[i].exist = true;
	}
	while (1) {
		cout << "实现功能如下：" << endl;
		cout << "1.打印邻接矩阵" << endl;
		cout << "2.选择路由器并输出路由表" << endl;
		cout << "3.删除某一条路线（输入该路线的始末路由序号）" << endl;
		cout << "4.删除某一路由器（输入该路由器序号）" << endl;
		cout << "5.增加某一条路线（输入该路线的始末路由序号）" << endl;
		cout << "6.增加某一路由器（输入该路由器序号）" << endl;
		int m;
		cin >> m;
		if (m == 1)graph.print();
		else if (m == 2) {
			int begin;
			cin >> begin;
			graph.work_begin(begin);
			graph.Dijkstra();
			graph.out_excel(begin);
			graph.print_path(begin);
		}
		else if (m == 3)
		{
			graph.delline();
			int begin;
			cin >> begin;
			graph.work_begin(begin);
			graph.Dijkstra();
			graph.out_excel(begin);
			graph.print_path(begin);
		}
		else if (m == 4)
		{
			graph.delnode();
			int begin;
			cin >> begin;
			graph.work_begin(begin);
			graph.Dijkstra();
			cout << "输出确认删除的路由器序号：";
			int data;
			cin >> data;
			graph.dis[data - 1].exist = false;
			graph.out_excel(begin);
			graph.print_path(begin);
		}
		else if (m == 5) {
			graph.addline();
			int begin;
			cin >> begin;
			graph.work_begin(begin);
			graph.Dijkstra();
			graph.out_excel(begin);
			graph.print_path(begin);
		}
		else if (m == 6) {
			graph.addnode();
			int begin;
			cin >> begin;
			graph.work_begin(begin);
			graph.Dijkstra();
			graph.out_excel(begin);
			graph.print_path(begin);
		}
		else break;

	}
	return 0;
}
