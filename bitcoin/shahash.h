#ifndef LIGHTNING_BITCOIN_SHAHASH_H
#define LIGHTNING_BITCOIN_SHAHASH_H
#include "config.h"
#include "shadouble.h"
#include <ccan/crypto/sha256/sha256.h>
#include <ccan/crypto/sha512/sha512.h>

void sha_hash(struct sha256_double *shadouble, const void *p, size_t len);

void sha_hash_done(struct sha512_ctx *shactx, struct sha256_double *res);
#endif /* LIGHTNING_BITCOIN_SHAHASH_H */
