//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet, NSSet;

@interface HFConditionItemProvider
{
    NSSet *_conditions;
    HMHome *_home;
    NSMutableSet *_conditionItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *conditionItems; // @synthesize conditionItems=_conditionItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSSet *conditions; // @synthesize conditions=_conditions;
- (id)reloadItems;
- (id)items;
- (id)initWithConditions:(id)arg1 home:(id)arg2;
- (id)init;

@end
