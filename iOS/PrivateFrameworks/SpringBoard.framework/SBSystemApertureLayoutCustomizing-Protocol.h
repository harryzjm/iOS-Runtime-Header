//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIView;

@protocol SBSystemApertureLayoutCustomizing <NSObject>

@optional
@property(readonly, nonatomic) _Bool overridesConcentricPaddingInCompactLayout;
@property(readonly, nonatomic) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property(readonly, nonatomic) long long systemApertureCustomLayout;
- (_Bool)isRequestingLayoutUpdateForHostedClient;
- (_Bool)isRequestingAnimatedDynamicLayoutUpdateForHostedClient;
- (double)concentricPaddingOverrideForCompactLayoutOfView:(UIView *)arg1;
@end

