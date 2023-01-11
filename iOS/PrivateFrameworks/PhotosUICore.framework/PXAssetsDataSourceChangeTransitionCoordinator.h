//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, PXBasicTileAnimationOptions;

@interface PXAssetsDataSourceChangeTransitionCoordinator
{
    PXBasicTileAnimationOptions *_deleteAnimationOptions;
    PXBasicTileAnimationOptions *_insertAnimationOptions;
    NSMutableDictionary *_overrideInitialGeometryByTileIdentifier;
    NSMutableDictionary *_overrideFinalGeometryByTileIdentifier;
}

- (void).cxx_destruct;
- (_Bool)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (_Bool)getFinalGeometry:(out struct PXTileGeometry *)arg1 finalUserData:(out id *)arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (_Bool)getInitialGeometry:(out struct PXTileGeometry *)arg1 initialUserData:(out id *)arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (void)setDelayInsertions:(_Bool)arg1;
- (void)setTreatRemovalsAsDeletes:(_Bool)arg1;
- (void)_updateAnimationDelay;
- (id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2;

@end
