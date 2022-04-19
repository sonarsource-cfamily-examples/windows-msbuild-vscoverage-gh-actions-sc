#include "CppUnitTest.h"
#include "..\src\lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {

  int ff(int x) {
    return 2 / x;
  }

  TEST_CLASS(tests) {
  public:

    TEST_METHOD(TestMyFun) {
      myfun(false, ff);
    }
  };
}
