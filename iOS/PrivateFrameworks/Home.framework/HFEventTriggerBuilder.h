//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCharacteristicTriggerBuilderInterface, HFEventBuilderLocationInterface, HFEventTrigggerBuilderTimeInterface, NSArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface HFEventTriggerBuilder
{
    _Bool _executeOnce;
    _Bool _shouldMarkTriggerAsHomeAppCreated;
    NSSet *_eventTypes;
    NSArray *_recurrences;
    NSMutableSet *_mutableEventBuilders;
    NSMutableDictionary *_extensionInterfaces;
}

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extensionInterfaces; // @synthesize extensionInterfaces=_extensionInterfaces;
@property(retain, nonatomic) NSMutableSet *mutableEventBuilders; // @synthesize mutableEventBuilders=_mutableEventBuilders;
@property(nonatomic) _Bool shouldMarkTriggerAsHomeAppCreated; // @synthesize shouldMarkTriggerAsHomeAppCreated=_shouldMarkTriggerAsHomeAppCreated;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(retain, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
- (void)_createEventBuilders;
- (id)_allActionSets;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_performValidation;
- (id)_updateRecurrences;
- (id)_updateExecuteOnce;
- (id)_updateEvents;
- (id)_createEvents;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (id)commitItem;
- (void)removeServiceLikeItem:(id)arg1;
- (id)deleteTrigger;
- (id)naturalLanguageDetailsWithOptions:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (_Bool)requiresConfirmationToRun;
- (_Bool)supportsEndEvents;
- (_Bool)supportsConditions;
@property(readonly, nonatomic) NSSet *eventTypes; // @synthesize eventTypes=_eventTypes;
@property(readonly, nonatomic) NSSet *characteristics;
@property(readonly, nonatomic) NSArray *eventBuilders;
- (void)applyEventBuilderDiff:(id)arg1;
- (void)removeEventBuilder:(id)arg1;
- (void)addEventBuilder:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) HFEventTrigggerBuilderTimeInterface *timeInterface;
@property(readonly, nonatomic) HFEventBuilderLocationInterface *locationInterface;
@property(readonly, nonatomic) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
- (id)compareToObject:(id)arg1;

@end
