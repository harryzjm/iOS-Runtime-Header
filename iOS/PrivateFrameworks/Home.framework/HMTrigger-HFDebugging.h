//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTrigger.h>

@class NSSet, NSString, NSUUID;

@interface HMTrigger (HFDebugging)
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;
+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;
- (id)hf_naturalLangugeDetailsWithOptions:(id)arg1;
- (_Bool)hf_affectsProfiles:(id)arg1;
- (_Bool)hf_affectsCharacteristics:(id)arg1;
- (_Bool)hf_affectsHomeKitObject:(id)arg1;
- (id)hf_forceDisableReasons;
- (_Bool)hf_shouldDisplayTrigger;
@property(readonly, nonatomic) NSSet *hf_anonymousActions;
@property(readonly, nonatomic) _Bool hf_isShortcutOwned;
@property(readonly, nonatomic) _Bool hf_requiresConfirmationToRun;
- (unsigned long long)hf_triggerType;
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

