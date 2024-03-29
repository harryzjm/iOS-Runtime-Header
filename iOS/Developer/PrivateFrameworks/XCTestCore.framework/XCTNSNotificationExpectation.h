//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface XCTNSNotificationExpectation
{
    CDUnknownBlockType _handler;
    NSString *_notificationName;
    id _observedObject;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)cleanup:(_Bool)arg1;
- (void)_observeExpectedNotification:(id)arg1;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2;
- (id)initWithName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3;

@end

