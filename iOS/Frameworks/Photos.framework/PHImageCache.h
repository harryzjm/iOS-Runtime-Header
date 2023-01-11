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
    NSMutableDictionary *_backingDictionary;
    NSMutableDictionary *_uncommittedInserts;
    NSMutableDictionary *_uncommittedDeletes;
    struct os_unfair_lock_s _lock;
    PHRecyclableObjectVendor *_entryVendor;
    id <PHImageCacheDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PHImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)commitChangesWithQueueToProcessDeletes:(id)arg1;
- (void)removeAllEntries;
- (void)removeEntriesForKeys:(id)arg1;
- (void)queryEntryForKey:(id)arg1 didWaitForInFlightRequest:(_Bool *)arg2 didFindImage:(_Bool *)arg3 entryIsValidBlock:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (_Bool)populateEntryWithImage:(struct CGImage *)arg1 requestID:(int)arg2 forKey:(id)arg3 additionalInfo:(id)arg4;
- (_Bool)pinEntryForKey:(id)arg1 requestID:(int)arg2 inFlightRequestID:(int *)arg3;
- (void)_removeEntry:(id)arg1;
- (id)init;

@end
