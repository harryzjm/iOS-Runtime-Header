//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, NSArray, PSSimStatusCache, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier
{
    NSArray *_cachedPlanItems;
    PSUICellularPlanManagerCache *_planManagerCache;
    CTCellularPlanManager *_planManager;
    PSSimStatusCache *_simStatusCache;
    NSArray *_cachedSubscriptionContexts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedSubscriptionContexts; // @synthesize cachedSubscriptionContexts=_cachedSubscriptionContexts;
@property(retain, nonatomic) PSSimStatusCache *simStatusCache; // @synthesize simStatusCache=_simStatusCache;
@property(retain, nonatomic) CTCellularPlanManager *planManager; // @synthesize planManager=_planManager;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) NSArray *cachedPlanItems; // @synthesize cachedPlanItems=_cachedPlanItems;
- (id)getLogger;
- (id)subscriptionContextForListItem:(id)arg1;
- (id)planItemForListItem:(id)arg1;
- (void)setDefaultVoiceLine:(id)arg1 specifier:(id)arg2;
- (id)defaultVoiceLine:(id)arg1;
@property(readonly, nonatomic) _Bool isSubcontrollerNeeded;
- (void)updateCachedState;
- (id)initWithPlanManagerCache:(id)arg1 planManager:(id)arg2 simStatusCache:(id)arg3;
- (id)initSpecifier;

@end

