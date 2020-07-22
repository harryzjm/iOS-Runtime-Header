//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardUIServices/FBUISceneClientProxy-Protocol.h>
#import <FrontBoardUIServices/FBUISceneHostProxy-Protocol.h>

@class FBSSceneParameters;
@protocol FBUISceneClientProxy, FBUISceneHostProxy;

@protocol FBUISceneConduit <FBUISceneHostProxy, FBUISceneClientProxy>
- (id <FBUISceneClientProxy>)sceneClient;
- (id <FBUISceneHostProxy>)sceneHost;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 registerSceneClient:(id <FBUISceneClientProxy>)arg2 withInitialParameters:(FBSSceneParameters *)arg3;
@end

