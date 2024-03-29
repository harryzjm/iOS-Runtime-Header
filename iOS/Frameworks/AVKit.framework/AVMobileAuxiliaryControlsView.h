//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVControlOverflowButton, NSArray, NSString;
@protocol AVMobileAuxiliaryControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileAuxiliaryControlsView
{
    AVControlOverflowButton *_overflowControl;
    NSArray *_controlsInPriorityOrder;
    _Bool _hasOverflowOnlyControl;
    NSArray *_controls;
    double _controlSpacing;
    id <AVMobileAuxiliaryControlsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVMobileAuxiliaryControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasOverflowOnlyControl; // @synthesize hasOverflowOnlyControl=_hasOverflowOnlyControl;
@property(nonatomic) double controlSpacing; // @synthesize controlSpacing=_controlSpacing;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
- (void)_updatePriorityOrderControlsList;
- (void)_updateOverflowControlContextMenu;
- (void)_updateHasOverflowOnlyControl;
- (_Bool)_requiresOverflowControl;
- (id)_overflowControl;
- (id)_controlsWithViewsInPriorityOrder;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)overflowMenuItemsForControlOverflowButton:(id)arg1;
- (void)overflowButtonWillShowContextMenu:(id)arg1;
- (void)overflowButtonDidHideContextMenu:(id)arg1;
- (void)auxiliaryControlDidChangeState:(id)arg1;
- (void)updateOverflowMenu;
- (struct CGSize)sizeFittingControls:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

