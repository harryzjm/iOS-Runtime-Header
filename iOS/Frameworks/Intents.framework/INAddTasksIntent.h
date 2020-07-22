//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAddTasksIntentExport-Protocol.h>

@class INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray, NSString;

@interface INAddTasksIntent <INAddTasksIntentExport>
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
- (void)setTemporalEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setSpatialEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
- (void)setTaskTitles:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *taskTitles;
- (void)setTargetTaskList:(id)arg1;
@property(readonly, copy, nonatomic) INTaskList *targetTaskList;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

