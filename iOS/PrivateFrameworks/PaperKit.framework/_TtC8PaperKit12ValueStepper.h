//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit12ValueStepper : UIControl
{
    MISSING_TYPE *decreaseButton;
    MISSING_TYPE *increaseButton;
    MISSING_TYPE *valueLabel;
    MISSING_TYPE *contentStackView;
    MISSING_TYPE *interItemSpacing;
    MISSING_TYPE *cornerRadius;
    MISSING_TYPE *valueLabelWidth;
    MISSING_TYPE *valueLabelBorderWidth;
    MISSING_TYPE *minValue;
    MISSING_TYPE *maxValue;
    MISSING_TYPE *unit;
    MISSING_TYPE *$__lazy_storage_$_currentValue;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didTapRightButton;
- (void)didTapLeftButton;
- (id)initWithCoder:(id)arg1;

@end

