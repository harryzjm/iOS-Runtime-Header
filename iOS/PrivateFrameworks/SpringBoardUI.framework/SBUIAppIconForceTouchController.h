//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBUIAppIconForceTouchShortcutViewControllerDelegate-Protocol.h>
#import <SpringBoardUI/SBUIIconForceTouchControllerDataSource-Protocol.h>
#import <SpringBoardUI/SBUIIconForceTouchControllerDelegate-Protocol.h>

@class FBSOpenApplicationService, NSString, SBUIAppIconForceTouchControllerDataProvider, SBUIIconForceTouchController, UIViewController;
@protocol SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate;

@interface SBUIAppIconForceTouchController : NSObject <SBUIAppIconForceTouchShortcutViewControllerDelegate, SBUIIconForceTouchControllerDataSource, SBUIIconForceTouchControllerDelegate>
{
    SBUIIconForceTouchController *_iconForceTouchController;
    struct {
        unsigned int appIconForceTouchController_shouldHandleGestureRecognizer:1;
        unsigned int appIconForceTouchController_shouldUseSecureWindowForGestureRecognizer:1;
        unsigned int appIconForceTouchController_willPresentForGestureRecognizer:1;
        unsigned int appIconForceTouchController_didPresentForGestureRecognizer:1;
        unsigned int appIconForceTouchController_willDismissForGestureRecognizer:1;
        unsigned int appIconForceTouchController_didDismissForGestureRecognizer:1;
        unsigned int appIconForceTouchController_shouldActivateApplicationShortcutItem_atIndex_forGestureRecognizer:1;
    } _delegateRespondsTo;
    SBUIAppIconForceTouchControllerDataProvider *_dataProvider;
    UIViewController *_primaryViewController;
    UIViewController *_secondaryViewController;
    FBSOpenApplicationService *_openApplicationService;
    id <SBUIAppIconForceTouchControllerDataSource> _dataSource;
    id <SBUIAppIconForceTouchControllerDelegate> _delegate;
}

+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
@property(nonatomic) __weak id <SBUIAppIconForceTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBUIAppIconForceTouchControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)iconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 willDismissForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 didPresentForGestureRecognizer:(id)arg2;
- (void)iconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;
- (_Bool)iconForceTouchController:(id)arg1 shouldUseSecureWindowForGestureRecognizer:(id)arg2;
- (_Bool)iconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (struct CGPoint)iconForceTouchController:(id)arg1 zoomDownCenterForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 zoomDownViewForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 parallaxSettingsForGestureRecognizer:(id)arg2;
- (double)iconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct UIEdgeInsets)iconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 secondaryViewControllerForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 primaryViewControllerForGestureRecognizer:(id)arg2;
- (struct CGRect)iconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)iconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (long long)iconForceTouchController:(id)arg1 layoutStyleForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchShortcutViewController:(id)arg1 activateApplicationShortcutItem:(id)arg2;
- (_Bool)appIconForceTouchShortcutViewControllerShouldHandleGestureRecognizers:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_peekAnimated:(_Bool)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(_Bool)arg3;
- (void)_setupWithGestureRecognizer:(id)arg1;
- (id)_shortcutViewControllerForDataProvider:(id)arg1;
- (id)_widgetViewControllerForDataProvider:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopHandlingGestureRecognizer:(id)arg1;
- (void)startHandlingGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) long long state;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

