//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSSet, NSString;
@protocol AMSBagProtocol;

@interface AMSDeviceOfferRegistrationTask <AMSBagConsumer>
{
    _Bool _lightweightCheckOnly;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSSet *_offerIdentifiers;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(nonatomic) _Bool lightweightCheckOnly; // @synthesize lightweightCheckOnly=_lightweightCheckOnly;
@property(retain, nonatomic) NSSet *offerIdentifiers; // @synthesize offerIdentifiers=_offerIdentifiers;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_urlRequestWithBagURL:(id)arg1;
- (id)_urlRequestMethod;
- (void)_updateWithDeviceOffers:(id)arg1;
- (id)_requestParameters;
- (id)_latestOffersWithFetchedDeviceOffers:(id)arg1 offersStore:(id)arg2;
- (id)_deviceOffersURL;
- (id)_bucketedOffers:(id)arg1;
- (id)perform;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
