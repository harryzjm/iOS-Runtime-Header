//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicAnimator
{
    CDUnknownBlockType _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

- (void).cxx_destruct;
- (void)updateAllItemsFromCurrentState;
- (void)removeItemBehaviorForIdentifier:(id)arg1;
- (void)addItemBehavior:(id)arg1;
@property(readonly, nonatomic) NSSet *visibleItemIdentifiers;
@property(readonly, nonatomic) NSArray *visibleItems;
@property(readonly, nonatomic) NSArray *visibleItemBehaviors;
- (id)behaviorForIdentifier:(id)arg1;
- (_Bool)_animatorStep:(double)arg1;
- (id)initWithReferenceSystem:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end
