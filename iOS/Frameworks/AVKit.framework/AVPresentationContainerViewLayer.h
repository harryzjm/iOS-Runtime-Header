//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewLayer : CALayer
{
    _Bool _wantsAppearanceConfigValues;
    AVPresentationContainerViewAppearanceProxy *_appearanceProxy;
}

@property(nonatomic) _Bool wantsAppearanceConfigValues; // @synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues;
- (void).cxx_destruct;
- (void)setContinuousCorners:(_Bool)arg1;
- (_Bool)continuousCorners;
- (void)setCornerRadius:(double)arg1;
- (double)cornerRadius;
- (void)setCornerCurve:(id)arg1;
- (id)cornerCurve;
- (void)setMasksToBounds:(_Bool)arg1;
- (_Bool)masksToBounds;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (unsigned long long)maskedCorners;
@property(readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy; // @synthesize appearanceProxy=_appearanceProxy;

@end
