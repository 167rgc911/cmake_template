// ==========================================================================
//
//       Filename:  intro.cpp
//
//    Description:
//
//        Created:  08/10/24 20:13:01
//         Author:  rgc (), sessyargc.jp@gmail.com
//   Organization:
//
// ==========================================================================

#include <spdlog/spdlog.h>

#include "mock.h"

int
main ()
{
  spdlog::info ("main");
  mock ();
  return 0;
}
