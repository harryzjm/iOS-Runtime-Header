//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSaveProfileInCarIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSaveProfileInCarIntent <INSaveProfileInCarIntentExport>
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
- (void)setProfileName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileName;
- (void)setProfileNumber:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *profileNumber;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2;
- (id)_metadata;
- (id)_typedBackingStore;
@property(readonly, copy, nonatomic) NSString *profileLabel;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

