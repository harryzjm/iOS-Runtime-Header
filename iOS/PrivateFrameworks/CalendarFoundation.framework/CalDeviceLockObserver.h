//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalDeviceLockObservable-Protocol.h>

@class CalDarwinNotificationListener, NSString;
@protocol OS_dispatch_queue;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable>
{
    _Bool _internalHasBeenUnlockedSinceBoot;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CalDarwinNotificationListener *_notificationListener;
    CDUnknownBlockType _stateChangedCallback;
}

+ (id)stateChangedNotificationName;
+ (_Bool)hasBeenUnlockedSinceBoot;
- (void).cxx_destruct;
@property(nonatomic) _Bool internalHasBeenUnlockedSinceBoot; // @synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) CalDarwinNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool hasBeenUnlockedSinceBoot;
- (void)_notificationReceived;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
