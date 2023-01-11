//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class CCUIContentModuleContainerViewController, NSString;

@interface CCUIContentModuleContainerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    _Bool _appearanceTransition;
    CCUIContentModuleContainerViewController *_viewController;
    struct CGRect _contentRestOverrideFrame;
}

@property(nonatomic) struct CGRect contentRestOverrideFrame; // @synthesize contentRestOverrideFrame=_contentRestOverrideFrame;
@property(nonatomic, getter=isAppearanceTransition) _Bool appearanceTransition; // @synthesize appearanceTransition=_appearanceTransition;
@property(nonatomic) __weak CCUIContentModuleContainerViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

