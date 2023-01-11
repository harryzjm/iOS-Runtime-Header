//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;
@protocol AMSBagProtocol;

@interface AMSMarketingItemTask <AMSBagConsumer>
{
    _Bool _hydrateRelatedContent;
    _Bool _includeMediaAssets;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSDictionary *_contextInfo;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    NSString *_logKey;
    NSString *_placement;
    NSString *_serviceType;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(nonatomic) _Bool includeMediaAssets; // @synthesize includeMediaAssets=_includeMediaAssets;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(nonatomic) _Bool hydrateRelatedContent; // @synthesize hydrateRelatedContent=_hydrateRelatedContent;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_processMediaResultFromPromise:(id)arg1;
- (id)_fetchItemsFromURL:(id)arg1;
- (id)_fetchItems;
- (id)performWithFetchOnly;
- (id)perform;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 placement:(id)arg5 serviceType:(id)arg6;
- (id)initWithBag:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 placement:(id)arg4 serviceType:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
