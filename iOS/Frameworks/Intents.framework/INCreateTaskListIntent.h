//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateTaskListIntentExport-Protocol.h>

@class INSpeakableString, NSArray, NSString;

@interface INCreateTaskListIntent <INCreateTaskListIntentExport>
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
- (void)setGroupName:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *groupName;
- (void)setTaskTitles:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *taskTitles;
- (void)setTitle:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *title;
- (id)initWithTitle:(id)arg1 taskTitles:(id)arg2 groupName:(id)arg3;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
