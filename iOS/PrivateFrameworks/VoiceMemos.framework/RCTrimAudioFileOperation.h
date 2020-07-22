//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURL, RCCompositionComposedAssetWriter;

@interface RCTrimAudioFileOperation
{
    RCCompositionComposedAssetWriter *_assetWriter;
    _Bool _success;
    _Bool _createWaveform;
    NSError *_error;
    double _exportedDuration;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
}

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;
@property(readonly, nonatomic) _Bool createWaveform; // @synthesize createWaveform=_createWaveform;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (double)exportedDuration;
- (id)error;
- (_Bool)success;
- (void).cxx_destruct;
- (double)progress;
- (void)main;
- (void)cancel;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(_Bool)arg3 timeRange:(CDStruct_73a5d3ca)arg4 trimMode:(long long)arg5;

@end

