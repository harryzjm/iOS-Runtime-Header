//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFile, NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNAudioCorrelator : NSObject
{
    SNSystemConfiguration *_systemConfiguration;
    shared_ptr_f6ac7592 _graph;
    AVAudioFile *_referenceAudioFile;
    double _referenceSampleRate;
    unsigned int _channelCount;
    unsigned int _framesProcessed;
    double _overlapFactor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
@property(readonly, nonatomic) void *resultsBox;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

