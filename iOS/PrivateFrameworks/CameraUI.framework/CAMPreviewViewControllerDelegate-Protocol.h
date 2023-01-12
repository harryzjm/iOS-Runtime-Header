//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMMachineReadableCodeResult, CAMPreviewViewController, UIGestureRecognizer;

@protocol CAMPreviewViewControllerDelegate <NSObject>
- (void)previewViewController:(CAMPreviewViewController *)arg1 didSelectMRCResult:(CAMMachineReadableCodeResult *)arg2;
- (void)previewViewControllerDidChangeVideoFillAspectRatio:(CAMPreviewViewController *)arg1;
- (_Bool)previewViewController:(CAMPreviewViewController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)previewViewControllerDidChangeFocusOrExposure:(CAMPreviewViewController *)arg1;
- (void)previewViewControllerDidChangeFocusOrExposureLocked:(CAMPreviewViewController *)arg1 shouldAnimate:(_Bool)arg2;
@end

