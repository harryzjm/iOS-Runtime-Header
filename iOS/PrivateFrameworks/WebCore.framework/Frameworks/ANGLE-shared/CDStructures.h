//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct SharedSwapState {
    struct SwapTexture _field1[3];
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field2;
    struct SwapTexture *_field3;
    struct SwapTexture *_field4;
    struct SwapTexture *_field5;
};

struct SwapTexture {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
};

