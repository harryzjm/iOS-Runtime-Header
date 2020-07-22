//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFTimer, HMHomeInvitationData, NSArray, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>
{
    long long _invitationState;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDHome *_home;
    HMHomeInvitationData *_invitationData;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _resolutionHandler;
    CDUnknownBlockType _expirationHandler;
    HMFTimer *_timer;
    NSArray *_operations;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(copy, nonatomic) CDUnknownBlockType resolutionHandler; // @synthesize resolutionHandler=_resolutionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMHomeInvitationData *invitationData; // @synthesize invitationData=_invitationData;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
- (void).cxx_destruct;
- (id)describeWithFormat;
- (void)_resolve:(_Bool)arg1;
- (void)_clearTimer;
- (void)_configureTimer;
- (void)expire;
- (void)decline;
- (void)accept;
- (void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2;
- (void)updateInvitationState:(long long)arg1;
@property(readonly, nonatomic, getter=isDeclined) _Bool declined;
@property(readonly, nonatomic, getter=isAccepted) _Bool accepted;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)timerDidFire:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)refreshDisplayName;
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

