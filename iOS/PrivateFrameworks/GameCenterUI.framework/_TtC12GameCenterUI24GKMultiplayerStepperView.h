//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24GKMultiplayerStepperView : UIView
{
    MISSING_TYPE *downButton;
    MISSING_TYPE *upButton;
    MISSING_TYPE *label;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *model;
    MISSING_TYPE *isStepperHidden;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilityUpdateStepperWithValue:(long long)arg1;
@property(nonatomic, readonly) UIButton *accessibilityUpButton;
@property(nonatomic, readonly) UIButton *accessibilityDownButton;
- (void)didTapUp:(id)arg1;
- (void)didTapDown:(id)arg1;
- (void)layoutSubviews;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

