//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNUIUserActionItem, NSArray, NSMutableArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject
{
    CNUIUserActionItem *_defaultAction;
    NSMutableArray *_actions;
    NSArray *_recentActions;
    NSArray *_directoryServiceActions;
    NSArray *_foundOnDeviceActions;
}

+ (id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;
@property(retain, nonatomic) NSArray *foundOnDeviceActions; // @synthesize foundOnDeviceActions=_foundOnDeviceActions;
@property(retain, nonatomic) NSArray *directoryServiceActions; // @synthesize directoryServiceActions=_directoryServiceActions;
@property(retain, nonatomic) NSArray *recentActions; // @synthesize recentActions=_recentActions;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) CNUIUserActionItem *defaultAction; // @synthesize defaultAction=_defaultAction;
- (void).cxx_destruct;
- (void)removeDefaultActionFromListOfActions;
- (void)promoteLoneActionToBeDefault;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)removeDuplicateIntentActionsFromSameProvider;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeUninterestingItentActions;
- (id)model;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5;

@end

