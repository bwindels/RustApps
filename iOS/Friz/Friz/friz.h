#pragma once

#include <stdint.h>

struct RustByteSlice {
    const uint8_t *bytes;
    size_t length;
};

int32_t rust_print(char*);

typedef struct CTwitterClient {} CTwitterClient;

CTwitterClient* twitter_create(void);
void twitter_destroy(CTwitterClient*);

typedef struct CTweetList {} CTweetList;

CTweetList* tweet_list_create(CTwitterClient*);
void tweet_list_destroy(CTweetList*);
size_t tweet_list_len(CTweetList*);

typedef struct CTweet {} CTweet;

CTweet* tweet_list_get(CTweetList*, size_t);
struct RustByteSlice tweet_get_username(CTweet*);
struct RustByteSlice tweet_get_text(CTweet*);


struct Hello {
    int x, y;
};
