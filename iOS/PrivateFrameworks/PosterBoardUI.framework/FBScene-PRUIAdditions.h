//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBScene.h>

@interface FBScene (PRUIAdditions)
- (id)_layersToExcludeForOptions:(long long)arg1;
- (long long)_renderingContentForOptions:(long long)arg1;
- (id)prui_snapshotContextConfiguredWithOptions:(long long)arg1;
- (id)prui_createSnapshotWithContext:(id)arg1;
- (void)prui_snapshotSceneWithOptions:(long long)arg1 traitCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prui_restoreSceneAfterSnapshottingWithUpdater:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prui_restoreSceneAfterSnapshottingWithCompletion:(CDUnknownBlockType)arg1;
- (void)prui_setupSceneForSnapshottingWithOptions:(long long)arg1 traitCollection:(id)arg2 updater:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)prui_setupSceneForSnapshottingWithOptions:(long long)arg1 traitCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end

