//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HMHomeDelegate-Protocol.h>

@class CLLocation, HMActionSet, HMHome, HMResidentDevice, HMRoom, HMServiceGroup, HMUser, NSArray, NSString;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
@end

