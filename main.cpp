#include <iostream>
#include <queue>
#include "1.cpp"
#include "2.cpp"
#include "4.h"
#include "5.cpp"
using namespace std;
void print_deque1(priority_queue<int> p_q);
int min_element4(priority_queue<int> p_q);
int max_element4(priority_queue<int> p_q);
void add_average4(priority_queue<int> p_q, int n);
void delete_max_element4(priority_queue<int> p_q, int n);
void add_min_element4(priority_queue<int> p_q, 	int* array_queue4, int n);

int main() {
	
	setlocale(LC_ALL, "rus");
	two_deque QUEUE;
	
	
	cout << "������ 1: " << endl;
	cout << "������� 1: " << endl;
	cout << "\t" << "�������� �������: ";
	QUEUE.print_deque(QUEUE.q);
	cout << endl;
	cout << "\t" << "����������� ������� �������: " << QUEUE.min_element(QUEUE.q) << endl;
	cout << "\t" << "�� ����� ������� �������� ����������� �������?";
	QUEUE.add_min_element(QUEUE.q, QUEUE.array_deque, QUEUE.n);
	cout << endl;
	cout << "������� 2: " << endl;
	cout << "\t" << "������������ ������� � �������: " << QUEUE.max_element(QUEUE.q) << endl;
	cout << "\t" << "������� ����� �������� ������������� ��������: "; 
	QUEUE.delete_max_element(QUEUE.q, QUEUE.n);
	cout << "������� 3: " << endl;
	QUEUE.add_average(QUEUE.q, QUEUE.n);
	cout << endl;

	
	cout << "������ 2: " << endl;
	Times<int> TIME;
	cout << "������� 1: " << endl;
	cout << "\t" << "�������� �������: ";
	TIME.print_deque1(TIME.d);
	cout << endl << "\t" << "����������� �������: " << TIME.min_Element(TIME.d) << endl;
	cout << "\t" << "������������ �������: " << TIME.max_Element(TIME.d) << endl;
	cout << "\t" << "�� ����� ������� �������� ����������� �������?";
	TIME.add_min_element1(TIME.d, TIME.array_deque1, TIME.n);
	cout << endl;
	cout << "\t" << "������� ����� �������� ������������� ��������: "; 
	TIME.delete_max_element1(TIME.d, TIME.n);
	cout << "������� 3: " << endl;
	TIME.add_average1(TIME.d, TIME.n);
	cout << endl;
	
	
	cout << "������ 4: " << endl;
	priority_queue<int> p_q;
	int n;
		cout << "������� ���������� ���������: ";
		cin >> n;
		int* array_queue4 = new int[n];
		cout << "������� �������� �������: " << endl;
		for(int i = 0; i < n; i++){
			cout << "->";
			int p;
			cin >> p;
			array_queue4[i] = p;
			p_q.push(p);
		}
	cout << "������� 1: " << endl;
	cout << "\t" << "�������� �������: ";
	print_deque1(p_q);
	cout << endl << "\t" << "����������� �������: " << min_element4(p_q) << endl;
	cout << "\t" << "������������ �������: " << max_element4(p_q) << endl;
	cout << "������� 2: " << endl;
	cout << "\t" << "�� ����� ������� �������� ����������� �������?";
	add_min_element4(p_q, array_queue4, n);
	cout << endl;
	cout << "\t" << "������� ����� �������� ������������� ��������: "; 
	delete_max_element4(p_q, n);
	cout << "������� 3: " << endl;
	add_average4(p_q, n);
	cout << endl;
	
	cout << "������ 5:" << endl;
	cout << "������� 1: " << endl;
	vector_stl Vector;
	
	cout << "\t" << "�������� �������: ";
	Vector.print_deque5(Vector.io);
	cout << endl << "\t" << "����������� �������: " << Vector.min_element5(Vector.io) << endl;
	cout << "\t" << "������������ �������: " << Vector.max_element5(Vector.io) << endl;
	cout << "\t" << "�� ����� ������� �������� ����������� �������?";
	Vector.add_min_element5(Vector.io, Vector.array_deque5, Vector.n);
	cout << endl;
	cout << "������� 2: " << endl;
	cout << "\t" << "������� ����� �������� ������������� ��������: "; 
	Vector.delete_max_element5(Vector.io, Vector.n);
	cout << "������� 3: " << endl;
	Vector.add_average5(Vector.io, Vector.n);
	cout << endl;
	return 0;
}
