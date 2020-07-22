//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy>
{
    CDPContext *_cdpContext;
}

+ (_Bool)canAuthenticate;
+ (_Bool)registerCredentialsFromContext:(id)arg1 force:(_Bool)arg2;
+ (_Bool)registerCredentialsFromContext:(id)arg1;
@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (void).cxx_destruct;
- (_Bool)_performSOSCBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (_Bool)isLastBackupMakingPeer:(id *)arg1;
- (_Bool)removeNonViewAwarePeers:(id *)arg1;
- (_Bool)hasNonViewAwarePeers;
- (_Bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id *)arg2;
- (_Bool)_viewMemberForView:(struct __CFString *)arg1 error:(id *)arg2;
- (_Bool)viewMemberForAutofillPasswords:(id *)arg1;
- (_Bool)viewMemberForPCSMaster:(id *)arg1;
- (_Bool)requestToResetCloudKitData:(id *)arg1;
- (_Bool)requestToResetCircle:(id *)arg1;
- (_Bool)requestToJoinCircleAfterRestore:(id *)arg1;
- (_Bool)requestToJoinCircle:(id *)arg1;
- (_Bool)removeThisDeviceFromCircle:(id *)arg1;
- (_Bool)synchronizeCircleViews;
- (id)generateVerifierWithRcoveryKey:(id)arg1 error:(id *)arg2;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)peerDeviceNamesByPeerID;
- (unsigned long long)peerCount;
- (id)peerId;
- (int)_authenticatedCircleStatus:(id *)arg1;
- (int)_circleStatus:(id *)arg1;
- (int)circleStatus:(id *)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
