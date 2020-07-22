//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/NSObject-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSArray, NSDictionary, SCNNode, SCNScene, SKScene, SKTransition;
@protocol SCNSceneRendererDelegate;

@protocol SCNSceneRenderer <NSObject>
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
@property(readonly, nonatomic) void *context;
@property(readonly, nonatomic) unsigned long long renderingAPI;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) unsigned long long debugOptions;
@property(nonatomic) _Bool showsStatistics;
@property(nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
@property(nonatomic) _Bool autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) _Bool loops;
@property(getter=isPlaying) _Bool playing;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
@property(nonatomic) double sceneTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(void (^)(_Bool))arg2;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(_Bool (^)(void))arg2;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (NSArray *)nodesInsideFrustumWithPointOfView:(SCNNode *)arg1;
- (_Bool)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (NSArray *)hitTest:(struct CGPoint)arg1 options:(NSDictionary *)arg2;
- (void)presentScene:(SCNScene *)arg1 withTransition:(SKTransition *)arg2 incomingPointOfView:(SCNNode *)arg3 completionHandler:(void (^)(void))arg4;
@end
