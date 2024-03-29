//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SAUILayoutHosting-Protocol.h>

@class UIView;
@protocol SAElementViewProviding;

@protocol SAUILayoutHostingPrivate <SAUILayoutHosting>

@optional
- (double)viewProviderSensorShadowOpacityFactor:(id <SAElementViewProviding>)arg1;
- (_Bool)viewProviderShouldMakeSensorShadowVisible:(id <SAElementViewProviding>)arg1;
- (_Bool)viewProviderShouldAvoidAppearanceTransitionInitialization:(id <SAElementViewProviding>)arg1;
- (struct CGSize)maximumAvailableSizeForProvidedTrailingView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGSize)maximumAvailableSizeForProvidedLeadingView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGSize)maximumAvailableSizeForProvidedMinimalView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect)sensorRegionInContentView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect)sensorRegionObstructingViewProvider:(id <SAElementViewProviding>)arg1 inContentView:(UIView *)arg2;
- (double)concentricPaddingForProvidedView:(UIView *)arg1 fromViewProvider:(id <SAElementViewProviding>)arg2;
- (struct CGRect)interSensorRegionInContentView:(UIView *)arg1;
@end

