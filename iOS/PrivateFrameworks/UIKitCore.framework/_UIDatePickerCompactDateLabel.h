//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSString, _UIDatePickerLinkedLabel, _UIDatePickerOverlayPresentation;
@protocol _UIDatePickerCompactDateLabelDelegate;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCompactDateLabel : UIView
{
    _Bool _tapInteractionControlledExternally;
    _Bool _highlightedForTouch;
    id <_UIDatePickerCompactDateLabelDelegate> _delegate;
    _UIDatePickerOverlayPresentation *_overlayPresentation;
    UIView *_backgroundView;
    _UIDatePickerLinkedLabel *_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool highlightedForTouch; // @synthesize highlightedForTouch=_highlightedForTouch;
@property(retain, nonatomic) _UIDatePickerLinkedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak _UIDatePickerOverlayPresentation *overlayPresentation; // @synthesize overlayPresentation=_overlayPresentation;
@property(nonatomic) __weak id <_UIDatePickerCompactDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tapInteractionControlledExternally; // @synthesize tapInteractionControlledExternally=_tapInteractionControlledExternally;
@property(retain, nonatomic) NSDictionary *overrideAttributes;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) NSArray *titles;
@property(nonatomic) _Bool textColorFollowsTintColor;
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)setEnabled:(_Bool)arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;
- (void)_didTapTextLabel;
- (void)activateLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

