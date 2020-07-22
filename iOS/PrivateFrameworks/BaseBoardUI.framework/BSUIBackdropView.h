//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIBackdropView.h>

@interface BSUIBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
    double _scaleForNoBlur;
    double _rasterizationScale;
}

@property(nonatomic) double rasterizationScale; // @synthesize rasterizationScale=_rasterizationScale;
@property(nonatomic) double scaleForNoBlur; // @synthesize scaleForNoBlur=_scaleForNoBlur;
- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end

