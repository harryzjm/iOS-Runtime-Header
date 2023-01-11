//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    const struct __CFString *_flavorName;
    const struct __CFUUID *_uuid;
    const struct __CFData *_data;
    NSObject<OS_xpc_object> *_shmem;
    unsigned long long _shmemLength;
    unsigned long long _dataFlags;
    unsigned char _isHidden;
    CDUnknownBlockType _promisor;
    CDUnknownBlockType _asyncPromisor;
    int _promiseState;
    NSObject<OS_xpc_object> *_promisorConnection;
    int _itemIdentifier;
    unsigned char _isPendingFlush;
    unsigned char _extensionConsumed;
}

@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property(getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property(readonly) const struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property(readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property(readonly) const struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
- (void)resolveClientPromisedDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned char)resolveLocalPromisedData;
- (void)promiseDataWithBlock:(CDUnknownBlockType)arg1 forPasteboard:(struct __CFPasteboard *)arg2 generation:(long long)arg3;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;
- (void)_setLocalPromiseState:(int)arg1;
@property(readonly) unsigned char hasLocalPromise;
- (const struct __CFData *)createDataAndReturnError:(int *)arg1;
- (id)_createShmemIfNecessaryLength:(unsigned long long *)arg1;
- (void)setData:(struct __CFData *)arg1;
@property(readonly) unsigned char hasData;
- (id)description;
- (void)dealloc;
- (id)initWithFlavorName:(const struct __CFString *)arg1 itemIdentifier:(int)arg2;
- (void)promiseDataWithFetchOperation:(id)arg1;

@end

