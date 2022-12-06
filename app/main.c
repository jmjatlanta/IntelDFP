#include <stdlib.h>
#include <stdio.h>

#include "../library/src/bid_conf.h"
#include "../library/src/bid_functions.h"

void display(char *fname, BID_UINT128 x) {
  char buffer[500];
  printf("\n%s\n", fname);
  printf("=====================================================================\n");
  printf("bid128 = [%016llx %016llx]\n", x.w[1], x.w[0]);
  printf("0x%016llx, 0x%016llx\n", x.w[1], x.w[0]);
  printf("status = %x\n", *pfpsf);
  bid128_to_string(buffer, x);
  printf("string = %s\n", buffer);
}

void test_bid128_scalbn() {
  BID_UINT128 bid128;
  bid128.w[1] = 0x000000028a080400;
  bid128.w[0] = 0x8002020024000000;
  BID_UINT128 res = bid128_scalbn(bid128, -9);
  display("bid128_scalbn", res);
}

void test_bid128_from_string() {
  //BID_UINT128 res = bid128_from_string("12345678901234567890123456789012345");
  //BID_UINT128 res = bid128_from_string("9999999999999999999999999999999999");
  BID_UINT128 res = bid128_from_string("1.00000000000000000000000000000000000000000000000001");
  //BID_UINT128 res = bid128_from_string("0E+6111");
  display("bid128_from_string", res);
  printf("%x\n", (6111 + 6176) << 1);
  //   1ed09bead87c0378d8e63ffffffff
  //3041ed09bead87c0378d8e63ffffffff
}

int main() {

  test_bid128_from_string();

  //test_bid128_scalbn();

  return EXIT_SUCCESS;
}