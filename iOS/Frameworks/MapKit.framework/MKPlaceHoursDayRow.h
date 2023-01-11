//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, UIColor;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow
{
    NSArray *_labels;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaselineConstraints;
    NSArray *_baselineToBottomConstraints;
    UIColor *_openingStateColor;
}

@property(retain, nonatomic) UIColor *openingStateColor; // @synthesize openingStateColor=_openingStateColor;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)setDays:(id)arg1 hours:(id)arg2 shouldStack:(_Bool)arg3 isViewControllerExpanding:(_Bool)arg4 shouldCollapseFurther:(_Bool)arg5;
- (id)_standardLabel;
- (_Bool)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

