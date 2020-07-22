//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/NSObject-Protocol.h>

@class AKController, MUContentViewController, MUPDFContentViewController, NSArray, NSURL, NSUndoManager, UIView, UIViewController;

@protocol MUContentViewControllerDelegate <NSObject>
- (NSArray *)annotationControllerOfContentViewController:(MUContentViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forContentViewController:(MUContentViewController *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(MUContentViewController *)arg2;
- (NSUndoManager *)undoManagerForContentViewController:(MUContentViewController *)arg1;

@optional
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (_Bool)contentViewController:(MUPDFContentViewController *)arg1 shouldHandleURL:(NSURL *)arg2;
@end

