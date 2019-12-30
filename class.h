#ifndef CLASS_H_H
#define CLASS_H_H
#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//aaaaa111111
//��������44aaaaa
//aaaaaa
//111111
bool check(int Vexnum, int edge);

//��¼Դ·������ÿ��·���������·������Ϣ
struct Dis {
	string path;
	int value;
	bool visit;
	bool exist;//��·�����Ƿ����
	Dis() {
		exist = false;
		visit = false;
		value = 0;
		path = "";
	}
};
class Graph_DG {
public:
	int vexnum;   //��������·��������
	int edge;     //��������·����
	int arc[50][50];   //�ڽӾ���
	Dis dis[50];   //��¼����·����֮�����·������Ϣ
	//���캯��
	Graph_DG(int vexnum, int edge);
	//��������
	~Graph_DG();
	// �ж�����ÿ������ĵ�·������Ϣ�Ƿ�Ϸ�
	//·������1��ʼ���
	bool check_edge_value(int start, int end, int weight);
	//����������ͼ
	void createGraph();
	//��ӡ�ڽӾ���
	void print();
	//��ʼ������
	void work_begin(int begin);
	//�����·��
	void Dijkstra();
	//��ӡ���·��
	void print_path(int begin);
	void out_excel(int numb);//���·�ɱ�
	void addnode(int numb);//����·����
	void addline();//����·��
	void delline();//ɾ��ĳ��·��
	void delnode();//ɾ��ĳ��·����
};
#endif