//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BSSecTask : NSObject
{
    struct __SecTask *_lock_taskRef;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;

@end
