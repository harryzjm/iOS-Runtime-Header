//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientConnectionContext : NSObject
{
    struct os_unfair_lock_s _lock;
    struct __CFArray *_cleanupBlocks;
}

- (void)cleanup;
- (void)addCleanupBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

