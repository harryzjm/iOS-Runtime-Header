//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBScene.h>

@interface FBScene (PRRenderingScene)
+ (id)pr_createPosterSceneWithRole:(id)arg1 path:(id)arg2 provider:(id)arg3;
+ (id)pr_createPosterSceneWithRole:(id)arg1 path:(id)arg2;
- (void)pr_postSignificantEvent:(unsigned long long)arg1;
- (void)pr_invalidateAndReleaseMediaResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)pr_invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)pr_invalidateAndFreeMediaResources:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pr_makePosterSceneTransitionContext;
- (id)pr_posterSceneSpecification;
- (_Bool)pr_isLegacyProvider;
- (void)pr_setShortDescription:(id)arg1;
- (id)pr_shortDescription;
- (void)pr_setPosterComponent:(id)arg1;
- (id)pr_posterComponent;
- (void)pr_setPosterPath:(id)arg1;
- (void)pr_applyPosterPath:(id)arg1 toSettings:(id)arg2;
- (id)pr_posterPath;
- (void)pr_updateWithPath:(id)arg1 inSettings:(id)arg2;
@end

