//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatar, SCNMaterial, SCNNode, SCNScene;

@interface AVTAvatarEnvironment : NSObject
{
    SCNScene *_scene;
    AVTAvatar *_avatar;
    SCNNode *_trackingLostIndicator;
    _Bool _trackingLostIndicatorVisible;
    SCNMaterial *_shadowPlaneMaterial;
    SCNNode *_whitePlane;
    SCNNode *_environmentNode;
    SCNNode *_defaultPointOfView;
    SCNNode *_specializedLightingNode;
    SCNNode *_defaultLightingNode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool faceIsFullyVisible;
@property(nonatomic) float fadeFactor;
- (void)didSnapshot;
- (void)willSnapshot;
- (void)hideTrackingLossIndicator;
- (void)showTrackingLossIndicator;
- (void)hideReticle;
- (_Bool)showReticle;
- (void)setShowReticle:(_Bool)arg1;
- (void)updateARMode:(_Bool)arg1;
- (void)updateSpecializedLighting;
- (void)avatarDidChange:(id)arg1 arMode:(_Bool)arg2;
@property(readonly, nonatomic) SCNNode *defaultPointOfView;
@property(readonly, nonatomic) SCNNode *environmentNode;
- (id)initAndInstallInScene:(id)arg1;
- (id)defaultEnvironmentNode;

@end
