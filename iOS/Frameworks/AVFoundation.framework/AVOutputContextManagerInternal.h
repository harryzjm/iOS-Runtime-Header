//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol AVOutputContextManagerImpl, OS_dispatch_queue;

@interface AVOutputContextManagerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextManagerImpl> impl;
}

@end
