//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/PKToolPickerObserver-Protocol.h>

@class PKToolPicker, UIColor;

@protocol PKToolPickerObserverPrivate <PKToolPickerObserver>

@optional
- (void)_toolPickerVisibilityDidChange:(PKToolPicker *)arg1 isAnimationFinished:(_Bool)arg2;
- (void)_toolPickerDidChangeScaleFactor:(PKToolPicker *)arg1;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1;
- (void)_toolPicker:(PKToolPicker *)arg1 didChangeColor:(UIColor *)arg2;
@end

