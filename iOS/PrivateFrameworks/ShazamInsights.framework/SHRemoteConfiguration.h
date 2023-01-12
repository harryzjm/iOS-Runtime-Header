//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBag, AMSBagValue, SHFeatureFlags;

__attribute__((visibility("hidden")))
@interface SHRemoteConfiguration : NSObject
{
    SHFeatureFlags *_featureFlags;
    AMSBag *_amsBag;
    AMSBagValue *_featureFlagsBagValue;
    AMSBagValue *_endpointsBagValue;
    AMSBagValue *_insightsBagValue;
    AMSBagValue *_internalHostBagValue;
    AMSBagValue *_externalHostBagValue;
    AMSBagValue *_campaignTokenBagValue;
    AMSBagValue *_defaultValuesBagValue;
    AMSBagValue *_languageTagBagValue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) AMSBagValue *languageTagBagValue; // @synthesize languageTagBagValue=_languageTagBagValue;
@property(retain, nonatomic) AMSBagValue *defaultValuesBagValue; // @synthesize defaultValuesBagValue=_defaultValuesBagValue;
@property(retain, nonatomic) AMSBagValue *campaignTokenBagValue; // @synthesize campaignTokenBagValue=_campaignTokenBagValue;
@property(retain, nonatomic) AMSBagValue *externalHostBagValue; // @synthesize externalHostBagValue=_externalHostBagValue;
@property(retain, nonatomic) AMSBagValue *internalHostBagValue; // @synthesize internalHostBagValue=_internalHostBagValue;
@property(retain, nonatomic) AMSBagValue *insightsBagValue; // @synthesize insightsBagValue=_insightsBagValue;
@property(retain, nonatomic) AMSBagValue *endpointsBagValue; // @synthesize endpointsBagValue=_endpointsBagValue;
@property(retain, nonatomic) AMSBagValue *featureFlagsBagValue; // @synthesize featureFlagsBagValue=_featureFlagsBagValue;
@property(retain, nonatomic) AMSBag *amsBag; // @synthesize amsBag=_amsBag;
- (void)defaultValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)campaignTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)hostForClientType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insightsWithCompletion:(CDUnknownBlockType)arg1;
- (void)endpointsWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SHFeatureFlags *featureFlags; // @synthesize featureFlags=_featureFlags;
- (void)populateFeatureFlags;
- (void)populateRemoteConfiguration;
- (id)initWithBag:(id)arg1;

@end
