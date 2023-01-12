//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class UIImage, UIView, UIViewController;
@protocol PXVKImageAnalysisInteraction;

@protocol PXVKImageAnalysisInteractionDelegate <NSObject>

@optional
- (void)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 livePhotoShouldPlay:(_Bool)arg2;
- (_Bool)isShowingLivePhotoForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (_Bool)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 shouldBeginAtPoint:(struct CGPoint)arg2 forAnalysisType:(unsigned long long)arg3;
- (UIImage *)contentImageForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (UIView *)contentViewForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id <PXVKImageAnalysisInteraction>)arg1;
- (void)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
@end

