//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKActionMenuGestureRecognizer, NSDate, UIButton;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKActionMenuGestureRecognizerButton : NSObject
{
    CKActionMenuGestureRecognizer *_gestureRecognizer;
    UIButton *_button;
    id <CKActionMenuGestureRecognizerButtonDelegate> _delegate;
    NSDate *_gestureDidBeginDate;
}

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *gestureDidBeginDate; // @synthesize gestureDidBeginDate=_gestureDidBeginDate;
@property(nonatomic) __weak id <CKActionMenuGestureRecognizerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)gestureRecognized:(id)arg1;
- (void)touchUpOutsideButton:(id)arg1;
- (void)touchUpInsideButton:(id)arg1;
- (void)touchDownButton:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;

@end

