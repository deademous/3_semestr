#include "STL.h"
#include "gtest.h"
TEST(test_add, can_add_test) {
	// Arrange
	int x = 6, y = -5;
	// Act
	int res = add(x, y);
	// Assert
	EXPECT_EQ(res, 1);
}
TEST(test_full_null, can_full_null) {
	std::vector<int> v;
	std::vector<int> expected(20, 0);
	EXPECT_EQ(full_null(v), expected);
}
TEST(test_any_full_and_print, can_any_full_and_print) {
	std::vector<int> v(10);
	std::vector<int> result = any_full_and_print(v);
	EXPECT_EQ(result.size(), 10);
}
TEST(test_max_and_min_vec, can_max_and_min_vec) {
	std::vector<int> v = { 1, 2, 3, 4, 5,-3 };
	std::pair<int, int> result = max_and_min_vec(v);
	EXPECT_EQ(result.first, 5);
	EXPECT_EQ(result.second, -3);
}
TEST(test_sort_vec, can_sort_vec) {
	std::vector<int> v;
	int arr[] = { 5, 3, 1, 4, 2 };
	std::vector<int> expected = { 1, 2, 3, 4, 5 };
	EXPECT_EQ(sort_vec(v, arr, 5), expected);
}

TEST(test_more_then_num, can_more_then_num) {
	std::vector<int> pod = { 1, 2, 3, 42, 56, 11, -3 };
	int num = 10;
	std::vector<int> res;
	std::vector<int> ex;
	ex = {0,0,0,42,56,11,0};
	res = more_then_num(pod,num);
	EXPECT_EQ(res,ex );
}
TEST(test_rand_shuffle, can_rand_shuffle) {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::vector<int> result = rand_shuffle(v);
	EXPECT_EQ(result.size(), 5);
}
TEST(test_delete_less_then_num, can_less_then_num) {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::vector<int> expected = { 1, 2, 3 };
	EXPECT_EQ(delete_mere_then_num(v, 3), expected);
}
TEST(test_ceht_nechet, can_ceht_nechet) {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	EXPECT_EQ(ceht_nechet(v), 4);
}
TEST(test_clean, can_clean) {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::vector<int> expected;
	EXPECT_EQ(clean(v), expected);
}
TEST(test_add_to_end_mass, can_add_to_end_mass) {
	std::list<int> l;
	int arr[] = { 1, 2, 3, 4, 5 };
	std::list<int> expected = { 1, 2, 3, 4, 5 };
	EXPECT_EQ(add_to_end_mass(l, arr, 5), expected);
}
TEST(test_first_n_ints, can_first_n_ints) {
	std::list<int> l = { 1, 2, 3, 4, 5 };
	std::vector<int> expected = { 1, 2, 3 };
	EXPECT_EQ(first_n_ints(l, 3), expected);
}
TEST(test_list_erase, can_list_erase) {
	std::list<int> l = { 1, 2, 3, 4, 5 };
	std::list<int> expected = { 1, 2, 4, 5 };
	EXPECT_EQ(list_erase(l, 2), expected);
}
TEST(test_list_insert_3_any, can_list_insert_3_any) {
	std::list<int> l = { 1, 2, 3, 4, 5 };
	std::list<int> result = list_insert_3_any(l);
	EXPECT_EQ(result.size(), 5);
}

TEST(test_delete_povtor, can_delete_povtor) {
	std::list<int> l = { 1, 2, 2, 3, 3, 3, 4, 5, 5 };
	std::list<int> expected = { 1, 2, 3, 4, 5 };
	EXPECT_EQ(delete_povtor(l), expected);
}
TEST(test_reverse_list, can_reverse_list) {
	std::list<int> l = { 1, 2, 3, 4, 5 };
	std::list<int> expected = { 5, 4, 3, 2, 1 };
	EXPECT_EQ(reverse_list(l), expected);
}

TEST(test_print_stack, can_print_stack) {
	std::stack<int> pod;
	pod.push(1);
	pod.push(2);
	pod.push(3);
	pod.push(42);
	pod.push(56);
	pod.push(11);
	pod.push(-3);
	print_stack(pod);
	EXPECT_EQ(1, 1);
}