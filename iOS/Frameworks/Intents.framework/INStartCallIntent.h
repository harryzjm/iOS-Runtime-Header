//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartCallIntentExport-Protocol.h>

@class INCallRecord, INCallRecordFilter, NSArray, NSString;

@interface INStartCallIntent <INStartCallIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (id)_currentParameterCombination;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setCallCapability:(long long)arg1;
@property(readonly, nonatomic) long long callCapability;
@property(nonatomic, setter=setTTYType:) long long ttyType;
- (void)setContacts:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contacts;
@property(nonatomic) long long preferredCallProvider;
- (void)setDestinationType:(long long)arg1;
@property(readonly, nonatomic) long long destinationType;
- (void)setAudioRoute:(long long)arg1;
@property(readonly, nonatomic) long long audioRoute;
- (void)setCallRecordToCallBack:(id)arg1;
@property(readonly, copy, nonatomic) INCallRecord *callRecordToCallBack;
- (void)setCallRecordFilter:(id)arg1;
@property(readonly, copy, nonatomic) INCallRecordFilter *callRecordFilter;
- (id)_emptyCopy;
- (id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 preferredCallProvider:(long long)arg5 contacts:(id)arg6 ttyType:(long long)arg7 callCapability:(long long)arg8;
- (id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 contacts:(id)arg5 callCapability:(long long)arg6;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (_Bool)_isGroupFaceTime;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
@property(nonatomic) long long recordTypeForRedialing;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
