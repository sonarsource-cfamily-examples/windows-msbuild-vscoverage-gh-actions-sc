#include "CppUnitTest.h"
#include "..\src\lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {

  int id(int) { return 0; }

  TEST_CLASS(tests) {
  public:

    TEST_METHOD(TestMyFun) {
      myfun(true, &id);
    }
  };
}
