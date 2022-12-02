#include <stdlib.h>
#include <stdio.h>

#include "../library/src/bid_conf.h"
#include "../library/src/bid_functions.h"

int main() {

  // BID_UINT128 bid128 = bid128_from_uint64(23);

  BID_UINT128 bid128;
  bid128.w[1] = 0x000000028a080400;
  bid128.w[0] = 0x8002020024000000;

  // bid128_scalbn 0 [000000028a080400,8002020024000000] -9 [000000000000000ae7dcfc24a9355432] 30

  BID_UINT128 res = bid128_scalbn(bid128, -9);

  printf("%016llx %016llx\n", res.w[1], res.w[0]);

  printf("%x", *pfpsf);

  return EXIT_SUCCESS;
}