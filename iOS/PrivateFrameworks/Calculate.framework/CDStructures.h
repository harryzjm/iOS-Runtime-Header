//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct UnitCount {
    int unitID;
    int exponent;
};

struct UnitCounts {
    struct UnitCount types[16];
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long w[2];
} CDStruct_bc361aee;

typedef struct {
    unsigned int :24;
    unsigned int :8;
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_ef06dbdc;

