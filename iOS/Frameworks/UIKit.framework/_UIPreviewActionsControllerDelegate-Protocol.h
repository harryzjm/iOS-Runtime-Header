//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UIPreviewAction, _UIPreviewActionsController;

@protocol _UIPreviewActionsControllerDelegate <NSObject>
- (void)previewActionsController:(_UIPreviewActionsController *)arg1 didUpdatePlatterTranslation:(struct CGVector)arg2 withVelocity:(struct CGVector)arg3;
- (void)didDismissPreviewActionsController:(_UIPreviewActionsController *)arg1;
- (void)previewActionsController:(_UIPreviewActionsController *)arg1 didCompleteWithSelectedAction:(UIPreviewAction *)arg2;
- (struct CGSize)maximumPreviewActionsViewSizeForPreviewActionsController:(_UIPreviewActionsController *)arg1;
- (struct CGPoint)initialPlatterPositionForPreviewActionsController:(_UIPreviewActionsController *)arg1;
@end

