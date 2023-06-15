//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/SBHWidgetDragHandlerPassing-Protocol.h>

@class SBHApplicationWidgetCollection, SBIconView, UIView, UIViewController;
@protocol SBHWidgetSheetViewControlling;

@protocol SBHAddWidgetSheetViewControllerDelegate <SBHWidgetDragHandlerPassing>
- (void)addWidgetSheetViewControllerDidDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerDidAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerDidCancel:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1 didSelectWidgetIconView:(SBIconView *)arg2;

@optional
- (void)configureBackgroundView:(UIView *)arg1 matchingMaterialBeneathAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (UIView *)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (UIViewController *)galleryViewControllerForAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (UIViewController *)addWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1 detailViewControllerForWidgetCollection:(SBHApplicationWidgetCollection *)arg2;
@end

