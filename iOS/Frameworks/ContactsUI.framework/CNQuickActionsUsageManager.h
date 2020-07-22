//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CNContact, NSCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CNQuickActionsUsageManager : NSObject
{
    _Bool _sortsWithDuet;
    NSCountedSet *_actionsUsageSet;
    NSMutableSet *_enabledActionIdentifiers;
    CNContact *_contact;
}

+ (_Bool)sortUsingCoreDuetAvailable;
+ (id)managerForContact:(id)arg1;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableSet *enabledActionIdentifiers; // @synthesize enabledActionIdentifiers=_enabledActionIdentifiers;
@property(retain, nonatomic) NSCountedSet *actionsUsageSet; // @synthesize actionsUsageSet=_actionsUsageSet;
@property(nonatomic) _Bool sortsWithDuet; // @synthesize sortsWithDuet=_sortsWithDuet;
- (void).cxx_destruct;
- (id)sortedActions:(id)arg1;
- (void)_updateDuetInteractionsIfNeeded;
- (void)updateCachedEnabledStateForAction:(id)arg1;
- (void)cacheEnabledStateForAction:(id)arg1;
- (double)scoreForAction:(id)arg1;
- (void)actionPerformed:(id)arg1;
- (id)init;

@end

