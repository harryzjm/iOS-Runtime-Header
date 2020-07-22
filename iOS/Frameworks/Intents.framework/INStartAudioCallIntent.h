//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartAudioCallIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent <INStartAudioCallIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
@property(nonatomic, setter=setTTYType:) long long ttyType;
- (void)setContacts:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contacts;
@property(nonatomic) long long preferredCallProvider;
- (void)setDestinationType:(long long)arg1;
@property(readonly, nonatomic) long long destinationType;
@property(nonatomic) long long audioRoute;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithContacts:(id)arg1;
- (void)setUseSpeaker:(_Bool)arg1;
@property(readonly, nonatomic) _Bool useSpeaker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
