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
    double _field1;
    double _field2;
};

struct __UniformBinding {
    int location;
    char *name;
};

struct __UniformBindings {
    struct __UniformBinding viewProjectionMatrix;
    struct __UniformBinding modelMatrix;
    struct __UniformBinding environmentMatrix;
    struct __UniformBinding cameraPosition;
    struct __UniformBinding useTexture;
    struct __UniformBinding useTextureShine;
    struct __UniformBinding useFullColorEnamel;
    struct __UniformBinding color;
    struct __UniformBinding enamelColor;
    struct __UniformBinding colorSampler;
    struct __UniformBinding environmentSampler;
    struct __UniformBinding fleckNormalSampler;
    struct __UniformBinding triColor1;
    struct __UniformBinding triColor2;
    struct __UniformBinding triColor3;
};

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

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

