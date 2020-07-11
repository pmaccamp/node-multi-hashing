#ifndef LBRY_H
#define LBRY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void lbry_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif