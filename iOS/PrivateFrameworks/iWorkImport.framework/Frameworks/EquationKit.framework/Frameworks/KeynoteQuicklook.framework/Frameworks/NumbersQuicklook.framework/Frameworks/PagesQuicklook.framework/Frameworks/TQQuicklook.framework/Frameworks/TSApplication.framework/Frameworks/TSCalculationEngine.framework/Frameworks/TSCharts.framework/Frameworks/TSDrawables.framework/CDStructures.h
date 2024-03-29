//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDTexturedRectangle;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct InternalMetadata {
    void *_field1;
};

struct Message {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadata _field2;
};

struct Path {
    int _field1;
    int _field2;
    int _field3;
    struct path_descr *_field4;
    int _field5;
    int _field6;
    _Bool _field7;
    _Bool _field8;
    int _field9;
    int _field10;
    int _field11;
    char *_field12;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _TSDContentBlend {
    TSDTexturedRectangle *fromTR;
    TSDTexturedRectangle *toTR;
    double blendPercent;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct path_descr;

struct vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<boost::polygon::segment_data<double>*, std::allocator<boost::polygon::segment_data<double>>> {
        void *_field1;
    } _field3;
};

struct vector<double, std::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned long long _field2;
    double _field3;
} CDStruct_45a6b6f8;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double skew;
    double skewOffset;
    double scale;
} CDStruct_d6fcdff4;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    double _field1;
    struct CGPoint _field2;
    long long _field3;
    double _field4;
} CDStruct_46b2202e;

typedef struct {
    long long _field1;
    unsigned long long _field2;
    _Bool _field3;
    char *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    _Bool _field8;
    struct _NSRange _field9;
    unsigned long long _field10;
} CDStruct_c8fb1f71;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

// Ambiguous groups
typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float r;
    float g;
    float b;
    float a;
} CDStruct_83984b6f;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} CDStruct_f2e236b6;

typedef struct vector<boost::polygon::segment_data<double>, std::allocator<boost::polygon::segment_data<double>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<boost::polygon::segment_data<double>*, std::allocator<boost::polygon::segment_data<double>>> {
        void *_field1;
    } _field3;
} vector_a5fcbc61;

typedef struct vector<double, std::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *_field1;
    } _field3;
} vector_5e219421;

