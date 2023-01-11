//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionGroupDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSString, UIInterfaceActionGroup, UIInterfaceActionGroupView, UIInterfaceActionVisualStyle;
@protocol UIInterfaceActionVisualStyleProviding;

@interface UIInterfaceActionGroupViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>
{
    _Bool _springLoaded;
    id <UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceActionGroup *_actionGroup;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIInterfaceActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @synthesize springLoaded=_springLoaded;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property(nonatomic) __weak id <UIInterfaceActionVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;
- (void)reloadVisualStyle;
@property(readonly, copy, nonatomic) UIInterfaceActionGroupView *actionGroupView; // @synthesize actionGroupView=_actionGroupView;
- (id)initWithActionGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
