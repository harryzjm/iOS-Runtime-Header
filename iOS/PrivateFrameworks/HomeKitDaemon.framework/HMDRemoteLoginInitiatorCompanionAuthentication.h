//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication
{
    ACAccount *_account;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_authenticate;
- (void)authenticate;
- (int)loginType;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;

@end
