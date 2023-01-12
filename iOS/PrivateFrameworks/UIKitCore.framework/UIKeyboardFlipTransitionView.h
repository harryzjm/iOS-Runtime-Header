//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardFlipTransitionView
{
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    _Bool _showingFrontFace;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    struct {
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isShowingFrontFace) _Bool showingFrontFace; // @synthesize showingFrontFace=_showingFrontFace;
- (_Bool)transitionIsVisible;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)rebuildMoreIntlKeys;
- (void)updateMoreIntlKey:(id)arg1 asStart:(_Bool)arg2 withRect:(struct CGRect)arg3 showIntl:(_Bool)arg4 showDictKey:(_Bool)arg5;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)rebuildTransition;
- (void)rebuildBackgroundTransition;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (void)_flipToFront:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

