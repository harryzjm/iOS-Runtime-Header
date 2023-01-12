//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSFairPlayContext;

@interface AMSSubscriptionBag : NSObject
{
    AMSFairPlayContext *_fairPlayContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) AMSFairPlayContext *fairPlayContext; // @synthesize fairPlayContext=_fairPlayContext;
- (_Bool)_generateSubscriptionBagRequestWithAccountIdentifier:(id)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id *)arg4 error:(id *)arg5;
- (id)subscriptionBagSyncDataForAccount:(id)arg1;
- (id)init;

@end
