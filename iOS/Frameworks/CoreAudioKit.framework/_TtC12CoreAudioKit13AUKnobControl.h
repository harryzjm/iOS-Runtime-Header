//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit13AUKnobControl : UIControl
{
    MISSING_TYPE *param;
    MISSING_TYPE *min;
    MISSING_TYPE *max;
    MISSING_TYPE *previousTouchPosition;
    MISSING_TYPE *numDigits;
    MISSING_TYPE *formatter;
    MISSING_TYPE *value;
    MISSING_TYPE *title;
    MISSING_TYPE *valueLayer;
    MISSING_TYPE *lineLayer;
    MISSING_TYPE *titleLayer;
    MISSING_TYPE *valueLabel;
    MISSING_TYPE *minValueLayer;
    MISSING_TYPE *maxValueLayer;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
@property(nonatomic) unsigned long long accessibilityTraits;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

