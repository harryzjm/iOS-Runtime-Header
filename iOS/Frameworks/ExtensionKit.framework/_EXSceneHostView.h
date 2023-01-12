//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class FBScene, NSString, NSUUID, _EXExtensionProcessHandle;
@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _EXSceneHostView : UIView
{
    FBScene *_scene;
    id <UIScenePresenter> _scenePresenter;
    _EXExtensionProcessHandle *_extensionProcess;
    NSUUID *_sessionUUID;
    NSString *_role;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
@property(retain, nonatomic) id <UIScenePresenter> scenePresenter; // @synthesize scenePresenter=_scenePresenter;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void)layoutSubviews;
- (void)creatScene;
- (id)initWithExtensionProcess:(id)arg1 sessionUUID:(id)arg2 role:(id)arg3;

@end

