//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker
{
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
- (void).cxx_destruct;
- (_Bool)shouldShowAllDraftContent;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (id)initWithPrivateChannelMembershipController:(id)arg1;
- (id)init;

@end
