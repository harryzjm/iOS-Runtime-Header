//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PHRecyclableObjectVendor;
@protocol PHImageCacheDelegate;

@interface PHImageCache : NSObject
{
    NSMutableDictionary *_cachesBySize;
    struct os_unfair_lock_s _lock;
    PHRecyclableObjectVendor *_entryVendor;
    id <PHImageCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <PHImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)removeEntriesForSize:(struct CGSize)arg1 assetUUIDs:(id)arg2;
- (void)queryEntryForSize:(struct CGSize)arg1 assetUUID:(id)arg2 didWaitForInFlightRequest:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (_Bool)populateEntryWithImage:(struct CGImage *)arg1 requestID:(int)arg2 forSize:(struct CGSize)arg3 assetUUID:(id)arg4;
- (void)pinEntryForSize:(struct CGSize)arg1 assetUUID:(id)arg2 requestID:(int)arg3 postProcessingHandler:(CDUnknownBlockType)arg4;
- (void)_removeEntry:(id)arg1;
- (id)_cacheForSizeKey:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)init;

@end

