//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDRemoteLoginMessageSender, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataProvider : HMFObject
{
    NSString *_sessionID;
    HMDRemoteLoginMessageSender *_remoteMessageSender;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (id)logIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

