//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/MarkupViewController.h>

__attribute__((visibility("hidden")))
@interface QLMUViewController : MarkupViewController
{
    long long _currentEditNumber;
}

@property long long currentEditNumber; // @synthesize currentEditNumber=_currentEditNumber;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;

@end

