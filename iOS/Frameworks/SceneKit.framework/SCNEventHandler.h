//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNNode, SCNView;

@interface SCNEventHandler : NSObject
{
    SCNView *_view;
    _Bool _enableFreeCamera;
    _Bool _autoSwitchToFreeCamera;
}

- (void)activateFreeCamera;
@property _Bool autoSwitchToFreeCamera;
@property _Bool enableFreeCamera;
@property(readonly) SCNNode *freeCamera;
- (_Bool)wantsRedraw;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)cameraDidChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)sceneWillChange;
- (id)gestureRecognizers;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
@property(readonly) SCNView *view;
- (void)dealloc;
- (id)init;

@end
