//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject
{
    struct os_unfair_lock_s _lock;
    BSAtomicSignal *_submitted;
    NSThread *_submissionThread;
    CDUnknownBlockType _lock_workBlock;
    _Bool _lock_workCompletionWasCalled;
    UIImage *_postlock_cachedImage;
}

- (void).cxx_destruct;
- (id)cacheImage;
- (void)submitWorkBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

