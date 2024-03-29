//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    struct __CFString *_flavorName;
    struct __CFUUID *_uuid;
    struct __CFData *_data;
    NSObject<OS_xpc_object> *_xpcData;
    unsigned long long _dataFlags;
    CDUnknownBlockType _promisor;
    CDUnknownBlockType _asyncPromisor;
    NSObject<OS_dispatch_group> *_promiseGroup;
    NSObject<OS_xpc_object> *_promisorConnection;
    struct os_unfair_lock_s _lock;
    int _itemIdentifier;
    unsigned char _isHidden;
    unsigned char _isPendingFlush;
    unsigned char _extensionConsumed;
    _Atomic unsigned char _promiseState;
}

@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property(getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property(readonly) struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property(readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property(readonly) struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
- (CDUnknownBlockType)requestDataForPasteboard:(struct __CFPasteboard *)arg1 generation:(long long)arg2 immediatelyAvailableResult:(CDStruct_55991ab6 *)arg3;
- (void)resolveClientPromisedDataWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned char)resolveLocalPromisedData;
- (void)promiseDataWithBlock:(CDUnknownBlockType)arg1 forPasteboard:(struct __CFPasteboard *)arg2 generation:(long long)arg3;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;
@property(readonly) unsigned char promisorExistsInCurrentProcess;
- (void)_setLocalPromiseState:(unsigned char)arg1;
@property(readonly) unsigned char hasLocalPromise;
- (struct __CFData *)createDataAndReturnError:(int *)arg1;
- (id)_createXPCData;
- (void)setData:(struct __CFData *)arg1;
@property(readonly) unsigned char hasData;
- (id)description;
- (void)dealloc;
- (id)initWithFlavorName:(struct __CFString *)arg1 itemIdentifier:(int)arg2;
- (void)promiseDataWithFetchOperation:(id)arg1;

@end

