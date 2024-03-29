//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString, UIScene, _UISceneHostingDiffAction;

__attribute__((visibility("hidden")))
@interface _UISceneHostingControllerRegistry : NSObject
{
    _UISceneHostingDiffAction *_hostingSceneDiffAction;
    NSPointerArray *_weakAssociatedSceneHostingControllers;
    UIScene *_scene;
}

+ (id)componentForScene:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (void)performOnAllHostingControllers:(CDUnknownBlockType)arg1;
- (void)unassociateSceneHostingController:(id)arg1;
- (void)associateSceneHostingController:(id)arg1;
- (id)associatedSceneHostingControllers;
- (long long)_indexOfSceneHostingController:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

