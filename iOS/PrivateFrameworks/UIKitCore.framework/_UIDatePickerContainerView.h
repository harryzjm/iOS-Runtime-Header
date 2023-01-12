//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIDatePickerContainerView : UIView
{
    _Bool _lastHitTestWasPassedThrough;
    _UIDatePickerOverlayPresentation *_presentation;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool lastHitTestWasPassedThrough; // @synthesize lastHitTestWasPassedThrough=_lastHitTestWasPassedThrough;
@property(retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *presentation; // @synthesize presentation=_presentation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isTransparentFocusItem;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

