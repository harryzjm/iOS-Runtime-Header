//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKServerChangeToken, HMBMirrorInput, NSSet, NSString;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo <HMFLogging>
{
    NSSet *_interestedRecordIDs;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_originalChangeToken;
    HMBMirrorInput *_mirrorInput;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMBMirrorInput *mirrorInput; // @synthesize mirrorInput=_mirrorInput;
@property(readonly, nonatomic) CKServerChangeToken *originalChangeToken; // @synthesize originalChangeToken=_originalChangeToken;
@property(retain, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(readonly, nonatomic) NSSet *interestedRecordIDs; // @synthesize interestedRecordIDs=_interestedRecordIDs;
- (void)finishWithError:(id)arg1;
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(_Bool)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
