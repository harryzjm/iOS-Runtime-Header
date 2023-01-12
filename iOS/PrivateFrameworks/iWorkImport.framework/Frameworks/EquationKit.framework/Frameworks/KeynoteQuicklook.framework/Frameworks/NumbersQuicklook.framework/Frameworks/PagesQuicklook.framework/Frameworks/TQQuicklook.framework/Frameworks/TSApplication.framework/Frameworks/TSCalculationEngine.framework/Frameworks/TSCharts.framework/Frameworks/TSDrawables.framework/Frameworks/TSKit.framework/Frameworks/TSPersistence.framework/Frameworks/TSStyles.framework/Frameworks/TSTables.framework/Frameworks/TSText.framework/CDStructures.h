//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColor;

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

struct TSWPAttributeArray;

struct TSWPAttributeEnumerator {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct TSWPAttributeArray *_field5;
    _Bool _field6;
    unsigned long long _field7;
    _Bool _field8;
    struct TSWPAttributeRecord _field9;
};

struct TSWPAttributeRecord {
    unsigned long long _field1;
    union {
        id _field1;
        struct TSWPParagraphData _field2;
    } _field2;
};

struct TSWPDrawingState {
    id _field1;
    id _field2;
    struct CGRect _field3;
    id _field4;
    id _field5;
    unsigned long long _field6;
    struct CGColor *_field7;
    double _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    unsigned long long _field17;
    struct _NSRange _field18;
    id _field19;
    id _field20;
    struct _NSRange _field21;
    struct _NSRange _field22;
    unsigned long long _field23;
    struct _NSRange _field24;
    id _field25;
    _Bool _field26;
    id _field27;
};

struct TSWPFontHeightInfo {
    double spaceBefore;
    double attachmentHeight;
    double ascent;
    double capHeight;
    double descent;
    double leadingAbove;
    double leadingBelow;
    double spaceAfter;
    double verticalHeight;
    double xHeight;
    double underlinePosition;
    double underlineThickness;
};

struct TSWPLineRef {
    struct __CTLine *_field1;
    struct CGPoint _field2;
    struct _NSRange _field3;
    unsigned long long _field4;
    struct CGAffineTransform _field5;
    unsigned long long _field6;
};

struct TSWPParagraphData {
    union {
        struct {
            unsigned int listStart;
        } ;
        struct {
            unsigned short level;
            unsigned short flags;
        } ;
        struct {
            unsigned short row;
            unsigned short column;
        } ;
        struct {
            int writingDirection;
        } ;
        struct {
            unsigned int _singleValue;
        } ;
        struct {
            unsigned short _first;
            unsigned short _second;
        } ;
    } ;
};

struct TSWPParagraphMetrics {
    _Bool _field1;
    struct CGSize _field2;
    unsigned long long _field3;
    double _field4;
};

struct TSWPParagraphTypesetter;

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _TSWPCharIndexAndAffinity;

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct list<unsigned long, std::allocator<unsigned long>> {
    struct __list_node_base<unsigned long, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct map<unsigned long, TSWPFontMetricsCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontMetricsCacheEntry>>> {
    struct __tree<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
    struct __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct shared_ptr<TSWPParagraphTypesetter> {
    struct TSWPParagraphTypesetter *_field1;
    struct __shared_weak_count *_field2;
};

struct vector<CGPoint, std::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<TSWPAttachmentPosition, std::allocator<TSWPAttachmentPosition>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<TSWPAttachmentPosition *, std::allocator<TSWPAttachmentPosition>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<TSWPParagraphMetrics, std::allocator<TSWPParagraphMetrics>> {
    struct TSWPParagraphMetrics *__begin_;
    struct TSWPParagraphMetrics *__end_;
    struct __compressed_pair<TSWPParagraphMetrics *, std::allocator<TSWPParagraphMetrics>> {
        struct TSWPParagraphMetrics *__value_;
    } __end_cap_;
};

struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> {
    struct _TSWPCharIndexAndAffinity *__begin_;
    struct _TSWPCharIndexAndAffinity *__end_;
    struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> {
        struct _TSWPCharIndexAndAffinity *__value_;
    } __end_cap_;
};

struct vector<bool, std::allocator<bool>> {
    unsigned long long *__begin_;
    unsigned long long __size_;
    struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
        unsigned long long __value_;
    } __cap_alloc_;
};

struct vector<unsigned long, std::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short *__begin_;
    unsigned short *__end_;
    struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
        unsigned short *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1;
    double _field2;
} CDStruct_316206b0;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

typedef struct {
    struct _NSRange _field1;
    id _field2;
    double _field3;
    id _field4[3];
    unsigned int _field5;
    struct TSWPDrawingState *_field6;
    id _field7;
    id _field8;
    id _field9;
    struct __CTFont *_field10;
    struct CGColor *_field11;
    id _field12;
    _Bool _field13;
    int _field14;
    double _field15;
    struct CGColor *_field16;
    double _field17;
} CDStruct_3b6efdb6;

typedef struct {
    struct _NSRange _field1;
    long long _field2;
} CDStruct_9ae92562;

// Template types
typedef struct shared_ptr<TSWPParagraphTypesetter> {
    struct TSWPParagraphTypesetter *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_b124cf66;

typedef struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> {
    struct _TSWPCharIndexAndAffinity *__begin_;
    struct _TSWPCharIndexAndAffinity *__end_;
    struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> {
        struct _TSWPCharIndexAndAffinity *__value_;
    } __end_cap_;
} vector_c03e297f;

