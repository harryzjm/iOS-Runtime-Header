//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RCCompositionWaveformDataSource.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource
{
    NSURL *_destinationWaveformURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *destinationWaveformURL; // @synthesize destinationWaveformURL=_destinationWaveformURL;
- (id)generatedWaveformOutputURL;
- (_Bool)preferLoadingFragmentWaveforms;
- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2;

@end

