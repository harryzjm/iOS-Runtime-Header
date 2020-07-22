//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class CAFilter, NSValue, _UIBackdropViewSettings;

@interface MusicInteractiveContentEffectView : UIImageView
{
    CAFilter *_colorMatrixFilter;
    CAFilter *_colorSaturateFilter;
    CAFilter *_gaussianBlurFilter;
    NSValue *_inputBoundsValue;
    _UIBackdropViewSettings *_backdropSettings;
    double _transitionProgress;
    struct CGRect _inputBounds;
}

@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) struct CGRect inputBounds; // @synthesize inputBounds=_inputBounds;
@property(retain, nonatomic) _UIBackdropViewSettings *backdropSettings; // @synthesize backdropSettings=_backdropSettings;
- (void).cxx_destruct;
- (void)_applyTransitionProgress;
- (id)initWithFrame:(struct CGRect)arg1 backdropSettings:(id)arg2;

@end

