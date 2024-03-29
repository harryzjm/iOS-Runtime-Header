//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIView;
@protocol _UIFluidSliderDrivable;

@protocol _UIFluidSliderDriving <NSObject>
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) double stretchAmount;
@property(nonatomic) unsigned long long trackAxis;
@property(nonatomic) double trackLength;
@property(nonatomic) _Bool enabled;
@property(nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <_UIFluidSliderDrivable> drivable;
- (void)cancel;
- (void)stop;
@end

