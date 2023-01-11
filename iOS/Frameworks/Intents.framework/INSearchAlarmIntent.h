//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchAlarmIntentExport-Protocol.h>

@class INAlarmSearch, NSArray, NSString;

@interface INSearchAlarmIntent <INSearchAlarmIntentExport>
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
- (void)setAlarms:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *alarms;
- (void)setAlarmSearchType:(long long)arg1;
@property(readonly, nonatomic) long long alarmSearchType;
- (void)setAlarmSearch:(id)arg1;
@property(readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
- (id)initWithAlarmSearch:(id)arg1 alarmSearchType:(long long)arg2 alarms:(id)arg3;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
