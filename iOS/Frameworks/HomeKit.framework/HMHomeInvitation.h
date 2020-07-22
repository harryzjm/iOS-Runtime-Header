//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMHome, HMHomeInvitationData, NSDate, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding>
{
    HMHome *_home;
    NSURL *_homeObjectURL;
    HMHomeInvitationData *_invitationData;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMHomeInvitationData *invitationData; // @synthesize invitationData=_invitationData;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)_updateInvitationState:(long long)arg1;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long invitationState;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) NSURL *homeObjectURL; // @synthesize homeObjectURL=_homeObjectURL;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
