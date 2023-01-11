//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BannerKit/_UISceneComponentProviding-Protocol.h>

@class BNBannerClientContainerViewController, NSString, UIScene, UIWindow;
@protocol BNBannerSceneComponentProviderDelegate;

@interface BNBannerSceneComponentProvider : NSObject <_UISceneComponentProviding>
{
    UIWindow *_sceneWindow;
    UIScene *_scene;
    id <BNBannerSceneComponentProviderDelegate> _delegate;
    BNBannerClientContainerViewController *_containerViewController;
}

+ (id)delegateAssociatedWithSceneForPresentableWithUniqueIdentifier:(id)arg1;
+ (void)unregisterDelegateForSceneForPresentableWithUniqueIdentifier:(id)arg1;
+ (void)registerDelegate:(id)arg1 forSceneForPresentableWithUniqueIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BNBannerClientContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <BNBannerSceneComponentProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
@property(readonly, nonatomic) UIWindow *sceneWindow; // @synthesize sceneWindow=_sceneWindow;
- (id)_actionHandlersForScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)_newSceneWindowWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
