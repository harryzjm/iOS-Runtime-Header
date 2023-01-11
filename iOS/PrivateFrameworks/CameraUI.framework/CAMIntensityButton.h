//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface CAMIntensityButton : UIButton
{
    double _intensityValue;
    long long _layoutStyle;
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) double intensityValue; // @synthesize intensityValue=_intensityValue;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isActive) _Bool active;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithLayoutStyle:(long long)arg1;

@end
