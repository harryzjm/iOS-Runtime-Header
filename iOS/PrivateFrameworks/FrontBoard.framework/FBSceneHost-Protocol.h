//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneLayer, FBSSceneSpecification, FBSSceneTransitionContext, NSSet, NSString;
@protocol FBSceneClient;

@protocol FBSceneHost <NSObject>
@property(readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)clientWillInvalidate:(id <FBSceneClient>)arg1;
- (void)client:(id <FBSceneClient>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)client:(id <FBSceneClient>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)client:(id <FBSceneClient>)arg1 detachLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 updateLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 attachLayer:(FBSSceneLayer *)arg2;
@end

