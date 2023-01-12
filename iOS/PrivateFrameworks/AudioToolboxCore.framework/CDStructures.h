//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AUAudioUnit_XPC, NSXPCConnection;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct APComponent;

struct AUAudioUnit_XPC_PropListener;

struct AUOOPRenderClientUser {
    AUAudioUnit_XPC *au;
    NSXPCConnection *xpcConnection;
    CDUnknownBlockType musicalContextBlock;
    CDUnknownBlockType transportStateBlock;
    CDUnknownBlockType MIDIOutputEventBlock;
    CDUnknownBlockType MIDIOutputEventListBlock;
    unsigned int serviceProcessAUInstanceToken;
    _Bool isOffline;
    _Bool isMIDIProcessor;
};

struct AUPBMethods {
    unsigned int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct AUProcAndUserData;

struct AUProcessingBlock {
    struct AUPBMethods _field1;
    void *_field2;
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct AudioComponentVector {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<APComponent>*, std::allocator<std::shared_ptr<APComponent>>> {
        void *__value_;
    } __end_cap_;
    _Bool mSorted;
};

struct CAMutex;

struct CGSize {
    double _field1;
    double _field2;
};

struct ConnectionInfo {
    NSXPCConnection *mConnection;
    int mExtUsePermission;
    _Bool mLinkedSDKRequiresEntitlement;
};

struct NewServerListener;

struct PipeSubPool;

struct PropertyListener;

struct RenderPipeUser {
    struct PipeSubPool *mPipeSubPool;
    struct AUOOPRenderClientUser mRenderClientUser;
    struct atomic<bool> mInvalidated;
};

struct TestAUProcessingBlock;

struct __shared_weak_count;

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct function<void ()> {
    struct __value_func<void ()> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct function<void (AudioComponentVector &, AudioComponentVector &)> {
    struct __value_func<void (AudioComponentVector &, AudioComponentVector &)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> {
    struct __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> {
    struct __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct optional<auoop::RenderPipeUser> {
    union {
        char __null_state_;
        struct RenderPipeUser __val_;
    } ;
    _Bool __engaged_;
};

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct shared_ptr<APComponent> {
    struct APComponent *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct type {
    unsigned char __lx[24];
};

struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> {
    struct __compressed_pair<AUProcAndUserData *, std::default_delete<AUProcAndUserData>> {
        struct AUProcAndUserData *__value_;
    } __ptr_;
};

struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> {
    struct __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> {
        struct CAMutex *__value_;
    } __ptr_;
};

struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> {
    struct __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> {
        struct TestAUProcessingBlock *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
    struct __hash_table<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::hash<long>, std::equal_to<long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>, std::equal_to<long>, std::hash<long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> {
    struct AUAudioUnit_XPC_PropListener *__begin_;
    struct AUAudioUnit_XPC_PropListener *__end_;
    struct __compressed_pair<AUAudioUnit_XPC_PropListener *, std::allocator<AUAudioUnit_XPC_PropListener>> {
        struct AUAudioUnit_XPC_PropListener *__value_;
    } __end_cap_;
};

struct vector<NSObject<OS_dispatch_semaphore>*, std::allocator<NSObject<OS_dispatch_semaphore>*>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<NSObject<OS_dispatch_semaphore>**, std::allocator<NSObject<OS_dispatch_semaphore>*>> {
        id *__value_;
    } __end_cap_;
};

struct vector<NewServerListener, std::allocator<NewServerListener>> {
    struct NewServerListener *__begin_;
    struct NewServerListener *__end_;
    struct __compressed_pair<NewServerListener *, std::allocator<NewServerListener>> {
        struct NewServerListener *__value_;
    } __end_cap_;
};

struct vector<PropertyListener, std::allocator<PropertyListener>> {
    struct PropertyListener *__begin_;
    struct PropertyListener *__end_;
    struct __compressed_pair<PropertyListener *, std::allocator<PropertyListener>> {
        struct PropertyListener *__value_;
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
    unsigned int _field1[8];
} CDStruct_6ad76789;

