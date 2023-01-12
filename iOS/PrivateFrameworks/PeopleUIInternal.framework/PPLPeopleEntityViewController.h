//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PeopleUIInternal/PPLPeopleAppSceneRequester-Protocol.h>

@class FBScene, NSString, NSURL, PPLPeopleAppSceneManager, PPLPeopleEntityMetadata, UIView;
@protocol PPLPeopleEntityViewControllerDelegate, UIScenePresentation, UIScenePresenter;

@interface PPLPeopleEntityViewController : UIViewController <PPLPeopleAppSceneRequester>
{
    id <PPLPeopleEntityViewControllerDelegate> _delegate;
    FBScene *_scene;
    UIView<UIScenePresentation> *_hostView;
    id <UIScenePresenter> _presenter;
    PPLPeopleEntityMetadata *_metadata;
    PPLPeopleAppSceneManager *_sceneManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PPLPeopleAppSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) PPLPeopleEntityMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id <UIScenePresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIView<UIScenePresentation> *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <PPLPeopleEntityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct UIEdgeInsets)safeAreaInsetFromSceneSettings:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets sceneSafeAreaInsetPortrait;
- (struct CGRect)sceneSettingsFrameFromRect:(struct CGRect)arg1;
- (void)viewDidLayoutSubviews;
- (void)sceneManager:(id)arg1 sceneDidRequestDismissal:(id)arg2;
- (void)sceneManager:(id)arg1 didRevokeOwnershipOfScene:(id)arg2;
- (void)sceneManager:(id)arg1 didGrantOwnershipOfScene:(id)arg2;
@property(readonly, nonatomic) NSURL *personURL;
@property(readonly, nonatomic) struct CGRect initialSceneFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithMetadata:(id)arg1 sceneManager:(id)arg2;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
