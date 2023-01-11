//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL, NSXMLParser, RBDevice, RBDisplayList, RBFill, RBShape;

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Bounds {
    int x;
    int y;
    int w;
    int h;
};

struct Buffer;

struct BufferRegion {
    struct Buffer *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGContext;

struct CGGlyphLock;

struct CGImage;

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

struct Clip;

struct ContextDelegate {
    float _field1;
    struct vector<RB::ContextDelegate::Layer, std::__1::allocator<RB::ContextDelegate::Layer>> _field2;
    struct objc_ptr<RBShape *> _field3;
    struct objc_ptr<RBFill *> _field4;
    id _field5;
    struct CGAffineTransform _field6;
    unsigned int _field7;
    _Bool _field8;
};

struct Device {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct objc_ptr<id<MTLDevice>> _field3;
    struct objc_ptr<id<MTLLibrary>> _field4;
    struct objc_ptr<id<MTLCommandQueue>> _field5;
    struct objc_ptr<id<MTLCaptureScope>> _field6;
    struct BufferRegion _field7;
    struct BufferRegion _field8;
    struct BufferRegion _field9;
    struct objc_ptr<id<MTLTexture>> _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    struct Heap _field16;
    struct list<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer>>> _field17;
    struct list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> _field18;
    struct Table<const RB::FormattedRenderState *, const RB::Device::RenderPipelineEntry *> _field19;
    struct objc_ptr<id<MTLSamplerState>> _field20[6];
    struct objc_ptr<id<MTLDepthStencilState>> _field21[3][6];
    struct Table<unsigned long, RB::Texture *> _field22;
    struct unique_ptr<RB::GlyphMaskCache, std::__1::default_delete<RB::GlyphMaskCache>> _field23;
    struct unique_ptr<RB::GlyphPathCache, std::__1::default_delete<RB::GlyphPathCache>> _field24;
    struct CGGlyphLock *_field25;
};

struct DisplayList {
    struct Heap _heap;
    struct Layer *_layer;
    struct State *_state;
    struct State *_free_state;
    struct Clip *_all_clips;
    struct Style *_all_styles;
    _Bool _empty;
};

struct Drawable;

struct Element;

struct GlyphMaskCache;

struct GlyphPathCache;

struct Heap {
    unsigned long long _page_size;
    struct Page *_pages;
    char *_sbrk;
    unsigned long long _avail;
};

struct InlineHeap<256> {
    unsigned long long _page_size;
    struct Page *_pages;
    char *_sbrk;
    unsigned long long _avail;
    unsigned char _buffer[256];
};

struct Item;

struct Layer;

struct Node;

struct Page;

struct Pool<RB::UntypedTable::Node> {
    struct Item *_field1;
};

struct RBFillData {
    int type;
    unsigned char data[136];
};

struct RBShapeData {
    int type;
    unsigned char data[144];
};

struct Rect {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct RenderFrame {
    struct Device *_field1;
    struct Drawable *_field2;
    struct objc_ptr<id<MTLCommandBuffer>> _field3;
    struct unique_ptr<RB::RenderQueue, std::__1::default_delete<RB::RenderQueue>> _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct vector<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer>>> _field8;
    struct vector<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> _field9;
    struct forward_list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> _field10;
    struct Buffer *_field11;
    unsigned long long _field12;
    _Bool _field13;
    struct Table<const RB::RenderFrame::RegionKey *, const RB::RenderFrame::RegionEntry *> _field14;
};

struct RenderQueue;

struct State {
    CDUnknownFunctionPointerType *_field1;
    struct State *_field2;
};

struct Style;

struct Table<const RB::FormattedRenderState *, const RB::Device::RenderPipelineEntry *> {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    struct Heap *_field5;
    struct Pool<RB::UntypedTable::Node> _field6;
    struct Node **_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
};

struct Table<const RB::RenderFrame::RegionKey *, const RB::RenderFrame::RegionEntry *> {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    struct Heap *_field5;
    struct Pool<RB::UntypedTable::Node> _field6;
    struct Node **_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
};

struct Table<unsigned long, RB::Texture *> {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    struct Heap *_field5;
    struct Pool<RB::UntypedTable::Node> _field6;
    struct Node **_field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
};

struct Texture;

struct Tree {
    struct refcounted_ptr<RB::XMLRecorder::Element> _root;
    struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *>>> _stack;
};

struct _CAImageQueue;

struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> {
    struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> *_field1;
    struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> *_field2;
};

struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> {
    struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> *_field1;
    struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> *_field2;
};

struct atomic<unsigned int> {
    _Atomic unsigned int __a_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct cf_ptr<CGContext *> {
    struct CGContext *_p;
};

struct cf_ptr<CGImage *> {
    struct CGImage *_p;
};

struct cf_ptr<_CAImageQueue *> {
    struct _CAImageQueue *_p;
};

struct cf_ptr<__CFDictionary *> {
    struct __CFDictionary *_p;
};

struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *>> {
    struct __split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **>> {
        struct Element ***__first_;
        struct Element ***__begin_;
        struct Element ***__end_;
        struct __compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **>> {
            struct Element ***__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *>> {
        unsigned long long __value_;
    } __size_;
};

struct forward_list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> {
    struct __compressed_pair<std::__1::__forward_begin_node<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *>*>, std::__1::allocator<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *>>> {
        struct __forward_begin_node<std::__1::__forward_list_node<RB::refcounted_ptr<RB::Texture>, void *>*> {
            struct __forward_list_node<RB::refcounted_ptr<RB::Texture>, void *> *_field1;
        } _field1;
    } _field1;
};

struct list<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer>>> {
    struct __list_node_base<RB::refcounted_ptr<RB::Buffer>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RB::refcounted_ptr<RB::Buffer>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> {
    struct __list_node_base<RB::refcounted_ptr<RB::Texture>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<RB::refcounted_ptr<RB::Texture>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct objc_ptr<NSObject<OS_dispatch_queue>*> {
    NSObject *_p;
};

struct objc_ptr<NSObject<OS_dispatch_semaphore>*> {
    NSObject *_p;
};

struct objc_ptr<NSURL *> {
    NSURL *_p;
};

struct objc_ptr<NSXMLParser *> {
    NSXMLParser *_p;
};

struct objc_ptr<RBDevice *> {
    RBDevice *_p;
};

struct objc_ptr<RBDisplayList *> {
    RBDisplayList *_p;
};

struct objc_ptr<RBFill *> {
    RBFill *_p;
};

struct objc_ptr<RBShape *> {
    RBShape *_p;
};

struct objc_ptr<id<MTLCaptureScope>> {
    id _field1;
};

struct objc_ptr<id<MTLCommandBuffer>> {
    id _field1;
};

struct objc_ptr<id<MTLCommandQueue>> {
    id _field1;
};

struct objc_ptr<id<MTLDepthStencilState>> {
    id _field1;
};

struct objc_ptr<id<MTLDevice>> {
    id _p;
};

struct objc_ptr<id<MTLLibrary>> {
    id _field1;
};

struct objc_ptr<id<MTLSamplerState>> {
    id _field1;
};

struct objc_ptr<id<MTLTexture>> {
    id _field1;
};

struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>;

struct refcounted_ptr<(anonymous namespace)::Surface>;

struct refcounted_ptr<RB::Buffer>;

struct refcounted_ptr<RB::Device> {
    struct Device *_p;
};

struct refcounted_ptr<RB::Texture> {
    struct Texture *_p;
};

struct refcounted_ptr<RB::XMLRecorder::Element> {
    struct Element *_p;
};

struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *>>> {
    struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *>> c;
};

struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> {
    struct __compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable>> {
        struct Drawable *__value_;
    } __ptr_;
};

struct unique_ptr<RB::GlyphMaskCache, std::__1::default_delete<RB::GlyphMaskCache>> {
    struct __compressed_pair<RB::GlyphMaskCache *, std::__1::default_delete<RB::GlyphMaskCache>> {
        struct GlyphMaskCache *_field1;
    } _field1;
};

struct unique_ptr<RB::GlyphPathCache, std::__1::default_delete<RB::GlyphPathCache>> {
    struct __compressed_pair<RB::GlyphPathCache *, std::__1::default_delete<RB::GlyphPathCache>> {
        struct GlyphPathCache *_field1;
    } _field1;
};

struct unique_ptr<RB::RenderQueue, std::__1::default_delete<RB::RenderQueue>> {
    struct __compressed_pair<RB::RenderQueue *, std::__1::default_delete<RB::RenderQueue>> {
        struct RenderQueue *_field1;
    } _field1;
};

struct vector<RB::ContextDelegate::Layer, std::__1::allocator<RB::ContextDelegate::Layer>> {
    struct Layer *_field1;
    struct Layer *_field2;
    struct __compressed_pair<RB::ContextDelegate::Layer *, std::__1::allocator<RB::ContextDelegate::Layer>> {
        struct Layer *_field1;
    } _field3;
};

struct vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface>>> {
    struct refcounted_ptr<(anonymous namespace)::Surface> *__begin_;
    struct refcounted_ptr<(anonymous namespace)::Surface> *__end_;
    struct __compressed_pair<RB::refcounted_ptr<(anonymous namespace)::Surface>*, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface>>> {
        struct refcounted_ptr<(anonymous namespace)::Surface> *__value_;
    } __end_cap_;
};

struct vector<RB::refcounted_ptr<RB::Buffer>, std::__1::allocator<RB::refcounted_ptr<RB::Buffer>>> {
    struct refcounted_ptr<RB::Buffer> *_field1;
    struct refcounted_ptr<RB::Buffer> *_field2;
    struct __compressed_pair<RB::refcounted_ptr<RB::Buffer>*, std::__1::allocator<RB::refcounted_ptr<RB::Buffer>>> {
        struct refcounted_ptr<RB::Buffer> *_field1;
    } _field3;
};

struct vector<RB::refcounted_ptr<RB::Texture>, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> {
    struct refcounted_ptr<RB::Texture> *_field1;
    struct refcounted_ptr<RB::Texture> *_field2;
    struct __compressed_pair<RB::refcounted_ptr<RB::Texture>*, std::__1::allocator<RB::refcounted_ptr<RB::Texture>>> {
        struct refcounted_ptr<RB::Texture> *_field1;
    } _field3;
};

struct vector<RBStrokeElement, std::__1::allocator<RBStrokeElement>> {
    unsigned char *__begin_;
    unsigned char *__end_;
    struct __compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement>> {
        unsigned char *__value_;
    } __end_cap_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>>> {
    struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>> *__begin_;
    struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>> *__end_;
    struct __compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>*, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>>> {
        struct pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>> *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    float red;
    float green;
    float blue;
    float alpha;
} CDStruct_0b1c536a;

typedef struct {
    int _field1;
    void *_field2;
} CDStruct_27041886;
