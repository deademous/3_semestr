#pragma once
int add(int a, int b);
//
std::vector<int> full_null(std::vector<int>& a);
std::vector<int> any_full_and_print(std::vector<int>& a);
std::pair<int,int> max_and_min_vec(std::vector<int>& a);
std::vector<int> sort_vec(std::vector<int>& a, int *mass, int size);
std::vector<int> more_then_num(std::vector<int>& a, int num);
std::vector<int> rand_shuffle(std::vector<int>& a);
std::vector<int> delete_mere_then_num(std::vector<int>& a,int num);
size_t ceht_nechet(std::vector<int>& a);
std::vector<int> clean(std::vector<int>& a);
//
std::list<int> add_to_end_mass(std::list<int>& a, int* mass,int size);
std::vector<int> first_n_ints(std::list<int>& a, int n);
std::list<int> list_erase(std::list<int>& a, int n);
std::list<int> list_insert_3_any(std::list<int>& a);
std::list<int> delete_povtor(std::list<int>& a);
//
std::list<int> reverse_list(std::list<int>& a);
void print_stack(std::stack<int>& a);