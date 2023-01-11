//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIFloatingContentView.h>

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>
#import <TVMLKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIView;

@interface _TVCardFloatingContentView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting>
{
    UIView *_unfocusedShadowView;
    UIView *_focusedShadowView;
    UIImageView *_bgImageView;
    double _unfocusedAlpha;
    _Bool _isSelected;
    double _unfocusedShadowAlpha;
    double _focusedShadowAlpha;
    UIImage *_unfocusedShadowImage;
    UIImage *_focusedShadowImage;
    CDUnknownBlockType _pressCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pressCompletionBlock; // @synthesize pressCompletionBlock=_pressCompletionBlock;
@property(retain, nonatomic) UIImage *focusedShadowImage; // @synthesize focusedShadowImage=_focusedShadowImage;
@property(retain, nonatomic) UIImage *unfocusedShadowImage; // @synthesize unfocusedShadowImage=_unfocusedShadowImage;
@property(nonatomic) double focusedShadowAlpha; // @synthesize focusedShadowAlpha=_focusedShadowAlpha;
@property(nonatomic) double unfocusedShadowAlpha; // @synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha;
- (void).cxx_destruct;
- (void)_setBgImageWithColor:(id)arg1 cornerRadius:(double)arg2;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)prepareForReuse;
- (void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

