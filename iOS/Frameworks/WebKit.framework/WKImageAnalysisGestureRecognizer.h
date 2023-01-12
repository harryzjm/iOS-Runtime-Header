//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class UIView;
@protocol WKImageAnalysisGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer
{
    UIView<WKImageAnalysisGestureRecognizerDelegate> *_imageAnalysisGestureRecognizerDelegate;
}

- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)beginAfterExceedingForceThresholdIfNeeded:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithImageAnalysisGestureDelegate:(id)arg1;

@end

