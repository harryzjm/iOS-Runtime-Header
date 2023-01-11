//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHRecyclableObject-Protocol.h>

@class NSDictionary, NSError, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject>
{
    NSError *_error;
    struct CGImage *_imageRef;
    NSDictionary *_additionalInfo;
    struct os_unfair_lock_s _lock;
    _Bool _isCancelled;
    NSMutableArray *_handlersWaitingOnResult;
    int _imageRequestIDForPopulatingCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) int imageRequestIDForPopulatingCache; // @synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache;
- (void)prepareForReuse;
- (_Bool)isCancelled;
- (void)cancel;
- (void)populateWithImageRef:(struct CGImage *)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(CDUnknownBlockType)arg4;
- (void)addNotifyHandler:(CDUnknownBlockType)arg1;
- (void)_callWaiters:(id)arg1 wasCancelled:(_Bool)arg2;
- (_Bool)hasImageRef;
- (struct CGImage *)createImageRef;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
