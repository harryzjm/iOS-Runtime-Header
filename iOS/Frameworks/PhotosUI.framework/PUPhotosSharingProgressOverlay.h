//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUPhotosSharingProgressOverlay : UIView
{
    _Bool _isShowing;
    UIView *_progressView;
}

@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)setShowing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)addProgressView:(id)arg1;
- (void)_tearDownOverlayAnimated:(_Bool)arg1;
- (void)_setupOverlayAnimated:(_Bool)arg1;
- (id)_grayScaleImageFromImage:(id)arg1;
- (id)_screenshotImage;
- (void)_installInStatusBarWindow;
- (id)_statusBarWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

