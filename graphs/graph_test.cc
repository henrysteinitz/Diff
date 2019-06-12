#include "testing/base/public/gmock.h"
#include "testing/base/public/gunit.h"

namespace {

using ::testing::Eq;  // Optional ::testing aliases. Remove if unused.
using ::testing::Test;

// TODO(henrysteinitz): Welcome to your new test for Graph. You're almost
// done, but first:
// 1: Add your new BUILD rule by running:
//      build_cleaner --action_spec=add_missing_rules //my/package/BUILD
// 2: Make sure you've read http://go/totw/122.  Specifically:
//    a: Consider whether you need a test fixture or if a simple TEST suffices,
//       and delete the example below that you don't use.
//    b: Remember to comment your tests well!
//    c: Keep individual TEST/TEST_Fs small and focused.  It's expected that
//       there will be many TEST/TEST_Fs in this file.
// 3: DO NOT SUBMIT until you delete this comment block. :)
//
// See http://go/gunitprimer for an introduction to gUnit
// See http://go/gmockguide for an introduction to gMock and EXPECT_THAT

// EXAMPLE: TEST (no fixture)
TEST(GraphTest, DoesFoo) {
  EXPECT_THAT(1, Eq(2));  // Obvious failure, for educational purposes only.
}

// EXAMPLE: With a test fixture and TEST_Fs
// A test fixture is used because {TODO(henrysteinitz): put reason here}.
class GraphTest : public Test {
 protected:
  // Called before every TEST_F using this fixture.  See
  // http://go/gunitfaq#CtorVsSetUp for more information.
  GraphTest() {}

  // 'protected' members can be used by all TEST_Fs using this fixture.
  // See http://go/gunitprimer#same-data-multiple-tests for details.
};

TEST_F(GraphTest, HasPropertyBar) {
  EXPECT_THAT(1, Eq(2));  // Obvious failure, for educational purposes only.
}
// End TEST_F EXAMPLE.

}  // namespace
