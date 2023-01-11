//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INControlHomeIntentExport-Protocol.h>

@class INDateComponentsRange, INHomeUserTask, NSArray, NSString;

@interface INControlHomeIntent <INControlHomeIntentExport>
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
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (void)setContents:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contents;
- (id)initWithContents:(id)arg1;
- (void)setTime:(id)arg1;
@property(readonly, copy, nonatomic) INDateComponentsRange *time;
- (void)setFilters:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *filters;
- (void)setUserTask:(id)arg1;
@property(readonly, copy, nonatomic) INHomeUserTask *userTask;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3;
- (id)_categoryVerb;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (_Bool)_hasTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
