//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeRecommendationEngine/HREActionRecommendation-Protocol.h>

@class HFTriggerBuilder, HREActionVarianceCollection, NSMutableSet, NSSet, NSString;
@protocol HFIconDescriptor;

@interface HRETriggerRecommendation <HREActionRecommendation>
{
    HREActionVarianceCollection *allowedVariance;
    HFTriggerBuilder *_selectedTriggerBuilder;
    NSMutableSet *mutableTriggerBuilders;
    id <HFIconDescriptor> _iconDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(retain, nonatomic) NSMutableSet *mutableTriggerBuilders; // @synthesize mutableTriggerBuilders;
@property(retain, nonatomic) HREActionVarianceCollection *allowedVariance; // @synthesize allowedVariance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilder;
- (void)replaceTriggerBuilder:(id)arg1 withTriggerBuilder:(id)arg2 allowEditingExistingActions:(_Bool)arg3;
@property(readonly, nonatomic) NSSet *addedActions;
- (id)compareForMatchingToTrigger:(id)arg1;
- (_Bool)includesObjects:(id)arg1;
- (id)involvedObjects;
- (id)changedInvolvedObjects;
- (_Bool)containsRecommendableContent;
- (_Bool)containsMeaningfulChanges;
@property(readonly, nonatomic) NSSet *triggerBuilders;
- (void)removeActions:(id)arg1;
- (void)addActions:(id)arg1 allowEditingExistingActions:(_Bool)arg2;
- (void)addActions:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1 allowEditingExistingActions:(_Bool)arg2;
- (void)addAction:(id)arg1;
- (id)existingActionBuilder:(id)arg1 inSet:(id)arg2;
@property(readonly, nonatomic) NSSet *actions;
@property(retain, nonatomic) HFTriggerBuilder *selectedTriggerBuilder; // @synthesize selectedTriggerBuilder=_selectedTriggerBuilder;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
