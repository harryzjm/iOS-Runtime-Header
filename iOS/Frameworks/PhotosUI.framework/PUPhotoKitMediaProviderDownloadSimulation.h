//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject
{
    _Bool _shouldSimulateFailure;
    double _downloadDuration;
    double __updateInterval;
    double __simulatedProgress;
}

@property(nonatomic, setter=_setSimulatedProgress:) double _simulatedProgress; // @synthesize _simulatedProgress=__simulatedProgress;
@property(readonly, nonatomic) double _updateInterval; // @synthesize _updateInterval=__updateInterval;
@property(nonatomic) double downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(nonatomic) _Bool shouldSimulateFailure; // @synthesize shouldSimulateFailure=_shouldSimulateFailure;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_updateSimulatedDownload;
- (void)beginSimulation;
- (id)init;

@end

