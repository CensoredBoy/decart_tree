#include "decart_tree.hpp"
#include <gtest/gtest.h>
#include <iostream>

TEST(module_name, test_name1) {
	DTree t = DTree(1);
	t.insert(121);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.find(121), true);
}
TEST(module_name, test_name2) {
	DTree t = DTree(1);
	t.insert(121);
	t.remove(121);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.find(121), false);
}

TEST(module_name, test_name3) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(Nodes::find(1), true);
}

TEST(module_name, test_name4) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.key, 1);
}

TEST(module_name, test_name5) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.prior, 1);
}

int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
