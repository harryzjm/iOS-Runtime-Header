//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVOutputContextManagerImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextManagerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextManagerImpl> impl;
}

@end
