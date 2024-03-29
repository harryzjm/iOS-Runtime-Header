//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject
{
    int fPriority;
    void *fLocationdConnection;
    CDUnknownBlockType fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)stopGestureUpdatesPrivate;
- (void)startGestureUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;

@end

