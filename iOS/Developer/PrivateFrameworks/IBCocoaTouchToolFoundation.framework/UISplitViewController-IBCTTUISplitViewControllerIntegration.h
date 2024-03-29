//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class IBPlaceholderDrawingAttributes, UIViewController;

@interface UISplitViewController (IBCTTUISplitViewControllerIntegration)
- (void)ibInstallPlaceholderView:(id)arg1;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibSupplementaryViewControllerPlaceholderDrawingAttributes;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibDetailViewControllerPlaceholderDrawingAttributes;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibMasterViewControllerPlaceholderDrawingAttributes;
- (void)setIbSupplementaryPlaceholderViewController:(id)arg1;
- (id)ibSupplementaryPlaceholderViewController;
- (void)setIbDetailPlaceholderViewController:(id)arg1;
- (id)ibDetailPlaceholderViewController;
- (void)setIbMasterPlaceholderViewController:(id)arg1;
- (id)ibMasterPlaceholderViewController;
- (void)ibToggleDisplayModeFromButton;
- (void)ibRevealColumnForCanvasEditing:(long long)arg1;
- (void)_updateViewControllers;
- (_Bool)ibWillDisplaySupplementaryColumn;
@property(retain, nonatomic) UIViewController *ibSupplementaryViewController;
@property(retain, nonatomic) UIViewController *ibDetailViewController;
@property(retain, nonatomic) UIViewController *ibMasterViewController;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end

