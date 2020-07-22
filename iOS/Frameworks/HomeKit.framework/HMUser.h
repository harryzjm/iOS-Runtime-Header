//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMHome, HMHomeAccessControl, HMThreadSafeMutableArrayCollection, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMUser : NSObject <NSSecureCoding, HMObjectMerge>
{
    HMThreadSafeMutableArrayCollection *_pendingAccessoryInvitations;
    _Bool _currentUser;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    NSString *_userID;
    HMHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_unconfigure;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 owner:(_Bool)arg5 administrator:(_Bool)arg6;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)init;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (id)pendingAccessoryInvitations;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)updateHomeAccessControl:(_Bool)arg1 remoteAccess:(_Bool)arg2;
@property(retain, nonatomic) HMHomeAccessControl *homeAccessControl; // @synthesize homeAccessControl=_homeAccessControl;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

