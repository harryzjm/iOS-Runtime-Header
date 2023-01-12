//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryPacingCueSource-Protocol.h>

@class NSArray;
@protocol PXAudioCueSource;

@interface PXStoryMockPacingCueSource : NSObject <PXStoryPacingCueSource>
{
    id <PXAudioCueSource> _audioCueSource;
    NSArray *_cueTimes;
    long long _cuesVersion;
    CDStruct_1b6d18a9 _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long cuesVersion; // @synthesize cuesVersion=_cuesVersion;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, copy, nonatomic) NSArray *cueTimes; // @synthesize cueTimes=_cueTimes;
@property(readonly, nonatomic) id <PXAudioCueSource> audioCueSource; // @synthesize audioCueSource=_audioCueSource;
- (id)diagnosticCueStringForSize:(struct CGSize)arg1 withIndicatorTime:(CDStruct_1b6d18a9)arg2 rangeIndicatorTimeRange:(CDStruct_e83c9415)arg3;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;
- (id)init;
- (id)initWithCueTimes:(id)arg1;

@end
