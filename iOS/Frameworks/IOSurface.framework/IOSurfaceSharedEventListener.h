//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IOSurfaceSharedEventListener : NSObject
{
    struct IONotificationPort *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

