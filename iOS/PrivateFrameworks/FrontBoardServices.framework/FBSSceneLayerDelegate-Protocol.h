//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSSceneLayer;

@protocol FBSSceneLayerDelegate <NSObject>
- (void)sceneLayerDidInvalidate:(FBSSceneLayer *)arg1;
- (void)sceneLayerDidUpdate:(FBSSceneLayer *)arg1;
- (_Bool)sceneLayerShouldObserveUpdates:(FBSSceneLayer *)arg1;
@end
