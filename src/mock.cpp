// ==========================================================================
//
//       Filename:  mock.cpp
//
//    Description:
//
//        Created:  08/10/24 20:12:34
//         Author:  rgc (), sessyargc.jp@gmail.com
//   Organization:
//
// ==========================================================================

#include <array>
#include <cstdint>

#include <spdlog/fmt/bin_to_hex.h>
#include <spdlog/spdlog.h>

constexpr uint8_t a_len = 4;
constexpr std::array<uint8_t, a_len> deadbeef{
  {0xde, 0xad, 0xbe, 0xef}};

void
mock ()
{
  spdlog::info ("mock");
  spdlog::info ("{}", spdlog::to_hex (deadbeef));
}
