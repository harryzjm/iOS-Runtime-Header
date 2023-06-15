//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSString, UIInputViewController, UIInputViewSet, UIRemoteInputViewInfo, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewHost : NSObject
{
    UIViewController *_inputRootViewController;
    UIInputViewController *_inputViewController;
    UIView *_inputView;
    NSLayoutConstraint *_inputViewWidthConstraint;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_inputViewBottomConstraint;
    UIViewController *_assistantViewController;
    _Bool _shouldShowDockView;
    UIWindow *_inputViewWindow;
    UIWindow *_assistantViewWindow;
    UIInputViewSet *_inputViewSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDockView; // @synthesize shouldShowDockView=_shouldShowDockView;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIWindow *assistantViewWindow; // @synthesize assistantViewWindow=_assistantViewWindow;
@property(readonly, nonatomic) UIWindow *inputViewWindow; // @synthesize inputViewWindow=_inputViewWindow;
- (id)settingsScene;
- (id)remoteAssistantItemForResponder:(id)arg1;
- (id)rtiGroupsForBarButtonItemGroups:(id)arg1;
@property(readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
- (void)updateInputViewsIfNecessary;
- (_Bool)updateCustomInputViewIfNecessary;
- (_Bool)updateAssistantViewIfNecessary;
- (struct UIEdgeInsets)assistantViewInsets;
@property(readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;
- (void)setInputViewSet:(id)arg1 delayRemoveInputView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

