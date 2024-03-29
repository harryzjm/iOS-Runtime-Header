//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardDockView : UIView
{
    id <UIKeyboardDockViewDelegate> _delegate;
    UIKeyboardDockItem *_leftDockItem;
    UIKeyboardDockItem *_rightDockItem;
    UIKeyboardDockItem *_centerDockItem;
}

+ (id)dockViewHomeGestureExclusionZones;
+ (CDStruct_b7523c42)_itemFramesForBoundingSize:(struct CGSize)arg1;
+ (long long)_currentInterfaceOrientation;
- (void).cxx_destruct;
@property(retain, nonatomic) UIKeyboardDockItem *centerDockItem; // @synthesize centerDockItem=_centerDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *rightDockItem; // @synthesize rightDockItem=_rightDockItem;
@property(retain, nonatomic) UIKeyboardDockItem *leftDockItem; // @synthesize leftDockItem=_leftDockItem;
@property(nonatomic) __weak id <UIKeyboardDockViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_keyboardLongPressInteractionRegions;
- (id)_keyboardLayoutView;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)_didReceiveHandBiasChangeNotification:(id)arg1;
- (id)_dockItemWithButton:(id)arg1;
- (void)_configureDockItem:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

