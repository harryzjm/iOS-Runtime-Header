//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct Matrix4d {
    double m[16];
};

struct PFIntSize_st {
    unsigned long long width;
    unsigned long long height;
};

struct Quad2d {
    struct Vector2d V0;
    struct Vector2d V1;
    struct Vector2d V2;
    struct Vector2d V3;
};

struct Rect;

struct RectArray {
    struct Rect *_field1;
    struct Rect *_field2;
    struct __compressed_pair<PA::Rect *, std::__1::allocator<PA::Rect>> {
        struct Rect *_field1;
    } _field3;
};

struct Region {
    struct unordered_set<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect>> _field1;
};

struct Vector2d {
    double X;
    double Y;
};

struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*> *_field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect>> {
    struct __hash_table<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*>, std::__1::allocator<std::__1::__hash_node<PA::RegionRect, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, PA::RectHash> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, PA::RectEqualTo> {
            float _field1;
        } _field4;
    } _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

