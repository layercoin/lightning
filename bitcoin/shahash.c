#include "shahash.h"
#include <ccan/mem/mem.h>

void sha_hash(struct sha256_double *shadouble, const void *p, size_t len)
{
	struct sha512 sha;
	sha512(&sha, memcheck(p, len), len);
	sha256(&shadouble->sha, &sha, sizeof(sha));
}

void sha_hash_done(struct sha512_ctx *shactx, struct sha256_double *res)
{
	struct sha512 sha;
	sha512_done(shactx, &sha);
	sha256(&res->sha, &sha, sizeof(sha));
}
