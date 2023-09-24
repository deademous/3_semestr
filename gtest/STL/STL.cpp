
#include"STL.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<random>
#include<list>
#include<windows.h>
#include<time.h>
#include<stack>
int add(int a , int b) {
	return a + b;
}
std::vector<int> full_null(std::vector<int>& a) {
	a.clear();
	a.resize(20, 0);
	return a;
}
std::vector<int> any_full_and_print(std::vector<int>& a){
	srand(time(0));
	for (std::vector<int>::iterator it = begin(a); it != end(a); ++it) {
		*it = -100 + rand() & 201;
		std::cout << *it << " ";
	}
	return a;
}
std::pair<int, int> max_and_min_vec(std::vector<int>& a){
	
	int max = a[0];
	int min = a[0];
	for (std::vector<int>::iterator it = begin(a); it != end(a); ++it) {
		if (*it>max) {
			max = *it;
		}
		if (*it<min) {
			min = *it;
		}
	}
	std::pair<int, int> max_min(max,min);
	return max_min;
}
std::vector<int> sort_vec(std::vector<int>& a, int* mass, int size){
	for (int i = 0; i< size; i++) {
		a.push_back(mass[i]);
	}
	std::sort(begin(a), end(a));
	return a;
}
std::vector<int> more_then_num(std::vector<int>& a, int num){
	for (std::vector<int>::iterator it = begin(a); it != end(a);++it) {
		if (*it<num) {
			*it = 0;
		}
	}
	return a;
}
std::vector<int> rand_shuffle(std::vector<int>& a){
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(begin(a), end(a),g );
	return a;
}
std::vector<int> delete_mere_then_num(std::vector<int>& a,int num){
	for (std::vector<int>::iterator it = begin(a); it != end(a); ++it) {
		if (*it>num) {
			a.erase(it);
		}
	}
	return a;
}
size_t ceht_nechet(std::vector<int>& a){
	if (a.size() % 2 == 1) {
		a.pop_back();
	}
	else {
		reverse(begin(a),end(a));
	}
	return a.size();
}
std::vector<int> clean(std::vector<int>& a) {
	a.clear();
	return a;
}
//
std::list<int> add_to_end_mass(std::list<int>& a, int* mass, int size){
	for (int i = 0; i < size;i++) {
		a.push_back(mass[i]);
	}
	return a;
}
std::vector<int> first_n_ints(std::list<int>& a, int n){
	std::vector<int> res;
	for (std::list<int>::iterator it = begin(a); it != end(a);++it) {
		if (n==1) {
			return res;
		}
		res.push_back(*it);
		n--;
	}
	return res;
}
std::list<int> list_erase(std::list<int>& a, int n){
	std::list<int>::iterator it = begin(a);
	advance(it,n);
	a.erase(it);
	return a;
}
std::list<int> list_insert_3_any(std::list<int>& a){
	for (int i = 0; i < 3;i++) {
		std::list<int>::iterator it = begin(a);
		advance(it, rand()%a.size());
		*it = -100 + rand() % 201;
	}
	return a;
}
std::list<int> delete_povtor(std::list<int>& a){
	auto last = std::unique(a.begin(), a.end());
	a.erase(last, a.end());
	return a;
}
//
std::list<int> reverse_list(std::list<int>& a) {
	std::stack<int> b;
	for (std::list<int>::iterator it = begin(a); it != end(a); ++it) {
		b.push(*it);
	}
	std::list<int> res;
	while (!b.empty()) {
		res.push_back(b.top());
		b.pop();
	}
	return res;
}

void print_stack(std::stack<int>& a) {
	if (a.empty()) {
		std::cout << "Stack is empty\n";
	}
	while (!a.empty()) {
		std::cout << "|" << a.top() << "|" << "\n";
		a.pop();
	}
	std::cout << "---";
}