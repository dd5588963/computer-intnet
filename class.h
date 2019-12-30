#ifndef CLASS_H_H
#define CLASS_H_H
#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//aaaaa111111
//唉唉唉嗄44aaaaa
//aaaaaa
//111111
bool check(int Vexnum, int edge);

//记录源路由器到每个路由器的最短路径的信息
struct Dis {
	string path;
	int value;
	bool visit;
	bool exist;//此路由器是否存在
	Dis() {
		exist = false;
		visit = false;
		value = 0;
		path = "";
	}
};
class Graph_DG {
public:
	int vexnum;   //局域网的路由器个数
	int edge;     //局域网的路径数
	int arc[50][50];   //邻接矩阵
	Dis dis[50];   //记录各个路由器之间最短路径的信息
	//构造函数
	Graph_DG(int vexnum, int edge);
	//析构函数
	~Graph_DG();
	// 判断我们每次输入的的路径的信息是否合法
	//路由器从1开始编号
	bool check_edge_value(int start, int end, int weight);
	//创建局域网图
	void createGraph();
	//打印邻接矩阵
	void print();
	//初始化工作
	void work_begin(int begin);
	//求最短路径
	void Dijkstra();
	//打印最短路径
	void print_path(int begin);
	void out_excel(int numb);//输出路由表
	void addnode(int numb);//增加路由器
	void addline();//增加路线
	void delline();//删除某条路线
	void delnode();//删除某个路由器
};
#endif