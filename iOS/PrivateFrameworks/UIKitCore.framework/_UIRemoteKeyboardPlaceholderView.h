//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView
{
    UIView *_mirroredView;
    struct CGSize _fixedSize;
    CDUnknownBlockType _sizeBlock;
    UIWindowScene *_sceneForHeight;
    _Bool _isLocalMinimumHeight;
    UIView *_fallbackView;
    UIView *_associatedView;
}

+ (id)placeholderWithWidthSizer:(CDUnknownBlockType)arg1 heightWithScene:(id)arg2;
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;
+ (id)placeholderForView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
- (void)_configureDebugOverlayIfNecessary;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightPlaceholder;
- (void)_isPlaceholderViewSelector;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGSize fixedSize;
- (_Bool)refreshPlaceholder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
@property(readonly) UIView *placeheldView;
- (id)initWithSize:(struct CGSize)arg1;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (struct CGSize)rightContentViewSize;
- (struct CGSize)leftContentViewSize;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (struct CGRect)_compatibleBounds;
- (void)didEndSplitTransition;
- (void)willBeginSplitTransition;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateMergedSubviewConstraints;
- (void)layoutMergedSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

