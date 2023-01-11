//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BSCornerRadiusConfiguration;

@interface SBAsymmetricalCornerRadiusWrapperView : UIView
{
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    UIView *_trailingCornersMaskingView;
}

@property(retain, nonatomic) UIView *trailingCornersMaskingView; // @synthesize trailingCornersMaskingView=_trailingCornersMaskingView;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
- (void).cxx_destruct;
- (void)_updateMaskedCorners;
- (void)_updateCornerRadius;
- (void)sendContentViewToBack:(id)arg1;
- (void)bringContentViewToFront:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
