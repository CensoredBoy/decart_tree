#include "decart_tree.hpp"
#include <gtest/gtest.h>
#include <iostream>

TESTINSERT(module_name, test_name) {
	DTree t = DTree(1);
	t.insert(121);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.find(121), true);
}
TESTREMOVE(module_name, test_name) {
	DTree t = DTree(1);
	t.insert(121);
	t.remove(121);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.find(121), false);
}

TESTNODE(module_name, test_name) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(Nodes::find(1), true);
}

TESTTESTNODEKEY(module_name, test_name) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.key, 1);
}

TESTNODEPRIOR(module_name, test_name) {
	Node t = Node(1);
    // Google Test will also provide macros for assertions.
    ASSERT_EQ(t.prior, 1);
}

int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}