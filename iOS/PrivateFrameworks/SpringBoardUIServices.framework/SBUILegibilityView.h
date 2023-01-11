//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UILegibilityView.h>

#import <SpringBoardUIServices/SBUILegibility-Protocol.h>

@class NSString, UIImage, _UILegibilitySettings;

@interface SBUILegibilityView : _UILegibilityView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    long long _tintStyle;
    UIImage *_tintImage;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property(retain, nonatomic) UIImage *tintImage; // @synthesize tintImage=_tintImage;
@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void).cxx_destruct;
- (id)_tintColorForSettings:(id)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintStyle:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double strength; // @dynamic strength;
@property(readonly) Class superclass;

@end

