//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSceneLayer, FBSceneLayerHostContainerView, NSOrderedSet, NSString;

@protocol FBSceneLayerHostContainerViewDataSource <NSObject>
- (NSString *)layerMinificationFilterNameForHostContainerView:(FBSceneLayerHostContainerView *)arg1;
- (unsigned long long)contextHostRenderingModeForHostContainerView:(FBSceneLayerHostContainerView *)arg1;
- (double)hostContainerView:(FBSceneLayerHostContainerView *)arg1 alphaForLayer:(FBSceneLayer *)arg2;
- (NSOrderedSet *)layersForHostContainerView:(FBSceneLayerHostContainerView *)arg1;
@end
