//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalActivatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>
{
    _Bool _listening;
    NSString *_notificationName;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool listening; // @synthesize listening=_listening;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (_Bool)_removeObserver;
- (_Bool)_addObserver;
- (void)_notificationWithNameReceived:(id)arg1;
- (void)deactivate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithNotificationName:(id)arg1 callback:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end
