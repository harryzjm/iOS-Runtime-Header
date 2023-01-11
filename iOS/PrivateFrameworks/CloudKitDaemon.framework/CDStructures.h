//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct internal_state;

struct pcc_invocation_key {
    unsigned char _field1[32];
};

struct pcc_wrapped_invocation_key {
    char *_field1;
    unsigned long long _field2;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int _field1;
    unsigned char _field2[16];
} CDStruct_46dcf1da;

// Ambiguous groups
typedef struct {
    unsigned int doubleValue:1;
    unsigned int int64Value:1;
    unsigned int boolValue:1;
} CDStruct_f7459c01;

typedef struct {
    unsigned int code:1;
} CDStruct_9ab06576;

typedef struct {
    unsigned int contentRequestAuthorizeGetOptions:1;
} CDStruct_3f29eb26;

typedef struct {
    unsigned int status:1;
} CDStruct_47fe53f2;

typedef struct {
    unsigned int success:1;
} CDStruct_f2ecb737;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;
