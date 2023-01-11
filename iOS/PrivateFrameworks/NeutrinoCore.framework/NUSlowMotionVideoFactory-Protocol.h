//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, AVComposition;
@protocol NUSlowMotionTimeRangeMapper;

@protocol NUSlowMotionVideoFactory
+ (id <NUSlowMotionTimeRangeMapper>)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4;
+ (AVComposition *)assetFromVideoAsset:(AVAsset *)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(_Bool)arg4 outAudioMix:(id *)arg5 outTimeRangeMapper:(id *)arg6;
@end
