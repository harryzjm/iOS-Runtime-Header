//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

#pragma mark Typedef'd Structures

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector2 {
    CDStruct_b2fbf00d _field1;
    CDStruct_b2fbf00d _field2;
    float _field3[2];
};

union _GLKVector4 {
    CDStruct_818bb265 _field1;
    CDStruct_818bb265 _field2;
    CDStruct_818bb265 _field3;
    float _field4[4];
};
