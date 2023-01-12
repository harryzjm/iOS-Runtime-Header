//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol MTLDevice, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VNCIContextsHandler : NSObject
{
    id <MTLDevice> _metalDevice;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct os_unfair_lock_s _contextsLock;
    NSMutableArray *_freeContexts;
    NSMutableSet *_inUseContexts;
}

- (void).cxx_destruct;

@end

