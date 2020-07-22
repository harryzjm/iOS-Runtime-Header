//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct IMFileLocation_t {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    int _field5;
};

struct IMPerfMeasurement_t {
    struct IMFileLocation_t _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
    double _field5;
    double _field6;
    double _field7;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

