//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBackgroundTaskAgentTimer, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    _Bool _repetitive;
    HMDBackgroundTaskAgentTimer *_btaTimer;
}

+ (_Bool)isValidOffsetDateComponents:(id)arg1;
+ (_Bool)isValidAbsoluteDateComponents:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaTimer; // @synthesize btaTimer=_btaTimer;
@property(readonly, nonatomic) _Bool repetitive; // @synthesize repetitive=_repetitive;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_reactiveTriggerAfterDelay;
- (void)timerFired:(id)arg1;
- (id)_nextTimerDate;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isActive;
- (void)_updateRepetitive;
- (void)_initialize;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

