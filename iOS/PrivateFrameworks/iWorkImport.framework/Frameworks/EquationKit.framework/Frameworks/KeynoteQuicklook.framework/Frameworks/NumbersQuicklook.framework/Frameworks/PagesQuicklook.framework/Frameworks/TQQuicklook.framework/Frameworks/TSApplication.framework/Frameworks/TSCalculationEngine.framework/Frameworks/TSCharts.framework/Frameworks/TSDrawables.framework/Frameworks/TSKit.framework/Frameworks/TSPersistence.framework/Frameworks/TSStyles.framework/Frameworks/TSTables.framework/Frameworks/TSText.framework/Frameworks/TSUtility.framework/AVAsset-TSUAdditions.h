//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (TSUAdditions)
+ (id)tsu_containsHDRContentKeys;
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_codecTypesForProRes;
+ (id)tsu_playableKeysWithKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
@property(readonly, nonatomic) _Bool tsu_containsHDRContent;
- (void)tsu_loadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
- (_Bool)tsu_containsTrackWithMediaType:(id)arg1 matchingCodecTypes:(id)arg2;
- (_Bool)tsu_containsVideoTrackWithDimensionsGreaterThan:(CDStruct_1ef3fb1f)arg1;
@property(readonly, nonatomic) _Bool tsu_isPlayable;
@property(readonly, nonatomic) struct CGSize naturalSizeWithPreferredTransforms;
@end

