
#include "list.h"
#include <vector>
#include "catch.hpp"
TEST_CASE("Test remove_front", "[Single]") {
  Node* l1 = create_list({1, 2, 3, 4});
  Node* l1_rm = remove_front(l1);
  REQUIRE(list_check(l1_rm, {2, 3, 4}));
  Node* l2 = create_list({1});
  Node* l2_rm = remove_front(l2);
  REQUIRE(list_check(l2_rm, {}));
  Node* l3 = create_list({});
  Node* l3_rm = remove_front(l3);
  REQUIRE(list_check(l3_rm, {}));
}

TEST_CASE("Test remove_back", "[Single]") {
  Node* l1 = create_list({1, 2, 3, 4});
  Node* l1_rm = remove_back(l1);
  REQUIRE(list_check(l1_rm, {1, 2, 3}));
  Node* l2 = create_list({1});
  Node* l2_rm = remove_back(l2);
  REQUIRE(list_check(l2_rm, {}));
  Node* l3 = create_list({});
  Node* l3_rm = remove_back(l3);
  REQUIRE(list_check(l3_rm, {}));
}
