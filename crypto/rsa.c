#include "../log/log.h"
#include "rsa.h"

ICACHE_FLASH_ATTR int rsa_pubkey_decrypt(Bigint *clear, const Bigint *cipher) {
    int rv;

    if (bigint_bits(cipher) > bigint_bits(&pubkey_mod)) {
        ERROR(CRYPTO, "assert bits(cipher) <= bits(pubkey_mod)")
        return 1;
    }

    if ((rv = bigint_expmod(clear, cipher, &pubkey_exp, &pubkey_mod)) > 0)
        return rv;

    return 0;
}
