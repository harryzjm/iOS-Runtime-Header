//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityHUDGestureHosting-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIAccessibilityHUDGestureManager, UIColor, UIGestureRecognizer, UIView, _UIStatusBarAction, _UIStatusBarData, _UIStatusBarDataAggregator, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarVisualProvider;

@interface _UIStatusBar <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureHosting>
{
    long long _style;
    UIColor *_foregroundColor;
    long long _mode;
    _UIStatusBarData *_currentData;
    NSArray *_enabledPartIdentifiers;
    NSMutableDictionary *_items;
    NSMutableDictionary *_displayItemStates;
    CDUnknownBlockType _updateCompletionHandler;
    UIView *_foregroundView;
    _UIStatusBarRegion *_targetRegion;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
    id <_UIStatusBarVisualProvider> _visualProvider;
    NSDictionary *_regions;
    _UIStatusBarDataAggregator *_dataAggregator;
    _UIStatusBarData *_currentAggregatedData;
    _UIStatusBarStyleAttributes *_styleAttributes;
    _UIStatusBarAction *_action;
    UIGestureRecognizer *_actionGestureRecognizer;
}

+ (double)heightForOrientation:(long long)arg1;
+ (void)setDefaultVisualProviderClass:(Class)arg1;
+ (_Bool)forceSplit;
+ (void)setForceSplit:(_Bool)arg1;
+ (void)initialize;
@property(readonly, nonatomic) UIGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) _UIStatusBarData *currentAggregatedData; // @synthesize currentAggregatedData=_currentAggregatedData;
@property(retain, nonatomic) _UIStatusBarDataAggregator *dataAggregator; // @synthesize dataAggregator=_dataAggregator;
@property(readonly, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property(retain, nonatomic) id <_UIStatusBarVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
@property(retain, nonatomic) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager; // @synthesize accessibilityHUDGestureManager=_accessibilityHUDGestureManager;
@property(nonatomic) __weak _UIStatusBarRegion *targetRegion; // @synthesize targetRegion=_targetRegion;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSMutableDictionary *displayItemStates; // @synthesize displayItemStates=_displayItemStates;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *enabledPartIdentifiers; // @synthesize enabledPartIdentifiers=_enabledPartIdentifiers;
@property(readonly, nonatomic) _UIStatusBarData *currentData; // @synthesize currentData=_currentData;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)dataEntryKeysForItemsWithIdentifiers:(id)arg1;
- (id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (struct CGRect)frameForDisplayItemWithIdentifier:(id)arg1;
- (id)itemsDependingOnKeys:(id)arg1;
- (id)stateForDisplayItemWithIdentifier:(id)arg1;
- (id)regionWithIdentifier:(id)arg1;
- (id)displayItemWithIdentifier:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) UIView *containerView;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)actionForPartWithIdentifier:(id)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)_displayItemsForPartWithIdentifier:(id)arg1;
- (id)_regionsForPartWithIdentifier:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)statusBarGesture:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 isInsideRegion:(id)arg2;
- (void)_rearrangeOverflowedItems;
- (void)_updateRegionItems;
- (void)layoutSubviews;
- (void)_performAnimations:(id)arg1;
- (void)updateWithAnimations:(id)arg1;
- (void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2;
- (void)_prepareAnimations:(id)arg1;
- (void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3;
- (void)_performWithMatchingCAAnimations:(CDUnknownBlockType)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateWithAggregatedData:(id)arg1;
- (void)_updateWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithData:(id)arg1;
- (void)resetVisualProvider;
- (void)_prepareVisualProviderIfNeeded;
@property(readonly, copy) NSString *description;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (id)_statusBarWindowForAccessibilityHUD;
- (id)initWithStyle:(long long)arg1;
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
