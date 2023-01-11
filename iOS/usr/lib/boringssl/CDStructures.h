//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SSLCertificate {
    struct SSLCertificate *_field1;
    CDStruct_061587d8 _field2;
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct boringssl_ctx_alert {
    int ssl_alert_type;
    unsigned char ssl_alert_code;
    unsigned char ssl_warning_count;
};

struct boringssl_legacy_ctx {
    unsigned int _field1;
    void *_field2;
};

struct nw_frame;

struct nw_frame_array_s {
    struct nw_frame *tqh_first;
    struct nw_frame **tqh_last;
};

struct nw_protocol {
    unsigned char flow_id[16];
    struct nw_protocol_identifier *identifier;
    struct nw_protocol_callbacks *callbacks;
    struct nw_protocol *output_handler;
    void *handle;
    struct nw_protocol *default_input_handler;
    void *output_handler_context;
};

struct nw_protocol_boringssl_private_key_methods {
    CDUnknownFunctionPointerType type;
    CDUnknownFunctionPointerType max_signature_len;
    CDUnknownFunctionPointerType sign;
    CDUnknownFunctionPointerType decrypt;
};

struct nw_protocol_callbacks;

struct nw_protocol_identifier;

struct tls_buffer_list_s {
    struct tls_buffer_list_s *_field1;
    CDStruct_061587d8 _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long length;
    char *data;
} CDStruct_061587d8;

