//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCArticleAccessChecker
{
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
- (void).cxx_destruct;
- (id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2;
- (id)initWithAccessCheckers:(id)arg1;
- (id)init;

@end
