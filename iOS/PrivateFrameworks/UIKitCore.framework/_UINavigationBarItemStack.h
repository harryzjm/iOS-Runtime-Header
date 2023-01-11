//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UINavigationItem, _UINavigationBarItemStackEntry, _UINavigationBarTransitionAssistant;
@protocol _UINavigationItemChangeObserver;

@interface _UINavigationBarItemStack : NSObject
{
    NSArray *_previousItems;
    NSMutableArray *_items;
    int _state;
    id <_UINavigationItemChangeObserver> _changeObserver;
    _UINavigationBarTransitionAssistant *_transitionAssistant;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant; // @synthesize transitionAssistant=_transitionAssistant;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <_UINavigationItemChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (id)description;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1;
- (long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2;
- (void)reverseIterateEntries:(CDUnknownBlockType)arg1;
- (void)iterateEntries:(CDUnknownBlockType)arg1;
- (void)iterateItems:(CDUnknownBlockType)arg1;
- (_Bool)stackItemsAreEqualTo:(id)arg1;
- (id)_shim_popNestedNavigationItem;
- (void)_shim_pushNestedNavigationItem:(id)arg1;
- (void)endInteractiveTransition;
- (void)beginInteractiveTransition;
- (void)cancelOperation;
- (void)completeOperation;
- (void)_completeTransition;
- (void)_cleanupTransitionAssistant;
- (void)setItems:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)popItemWithTransitionAssistant:(id)arg1;
- (void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)_prepareTransitionWithAssistant:(id)arg1;
- (void)_updateChangeObserversFor:(id)arg1;
@property(readonly, nonatomic) UINavigationItem *previousBackItem;
@property(readonly, nonatomic) UINavigationItem *previousTopItem;
@property(readonly, nonatomic) UINavigationItem *backItem;
@property(readonly, nonatomic) UINavigationItem *topItem;
@property(readonly, nonatomic) _UINavigationBarItemStackEntry *previousBackEntry;
@property(readonly, nonatomic) _UINavigationBarItemStackEntry *previousTopEntry;
@property(readonly, nonatomic) _UINavigationBarItemStackEntry *backEntry;
@property(readonly, nonatomic) _UINavigationBarItemStackEntry *topEntry;
@property(readonly, nonatomic, getter=isPopping) _Bool popping;
@property(readonly, nonatomic, getter=isPushing) _Bool pushing;
@property(readonly, nonatomic, getter=isPushingOrPopping) _Bool pushingOrPopping;
@property(readonly, nonatomic) long long itemCount;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
