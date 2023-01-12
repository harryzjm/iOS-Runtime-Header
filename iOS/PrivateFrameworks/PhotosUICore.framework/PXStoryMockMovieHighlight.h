//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryMovieHighlight-Protocol.h>

@class NSData;

@interface PXStoryMockMovieHighlight : NSObject <PXStoryMovieHighlight>
{
    _Bool _hasFace;
    _Bool _hasVoice;
    _Bool _hasMusic;
    float _qualityScore;
    float _loudness;
    float _peakVolume;
    NSData *_normalizationData;
    struct CGRect _bestPlaybackRect;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect bestPlaybackRect; // @synthesize bestPlaybackRect=_bestPlaybackRect;
@property(nonatomic) float peakVolume; // @synthesize peakVolume=_peakVolume;
@property(nonatomic) float loudness; // @synthesize loudness=_loudness;
@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) _Bool hasVoice; // @synthesize hasVoice=_hasVoice;
@property(nonatomic) _Bool hasFace; // @synthesize hasFace=_hasFace;
@property(retain, nonatomic) NSData *normalizationData; // @synthesize normalizationData=_normalizationData;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)description;
- (CDStruct_e83c9415)bestTimeRangeForPreferredDuration:(double)arg1 min:(double)arg2 max:(double)arg3;
- (CDStruct_e83c9415)bestTimeRangeForTargetDuration:(double)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect)arg3 normalizationData:(id)arg4 face:(_Bool)arg5 voice:(_Bool)arg6 music:(_Bool)arg7 loudness:(float)arg8 peak:(float)arg9;
- (id)initWithBestPlaybackRect:(struct CGRect)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect)arg3 normalizationData:(id)arg4;
- (id)init;

@end
