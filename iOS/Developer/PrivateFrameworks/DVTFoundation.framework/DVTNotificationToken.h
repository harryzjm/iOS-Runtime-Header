//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSNotificationCenter, NSString, _DVTNotificationReceiver;

@interface DVTNotificationToken : NSObject <DVTCancellable>
{
    NSNotificationCenter *_notificationCenter;
    id _observedObject;
    NSString *_name;
    _DVTNotificationReceiver *_receiver;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (id)initWithDistributedNotificationCenter:(id)arg1 receiver:(id)arg2 name:(id)arg3 observedObject:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)initWithNotificationCenter:(id)arg1 receiver:(id)arg2 name:(id)arg3 observedObject:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
