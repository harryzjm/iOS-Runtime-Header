//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRMultiSampleExporting-Protocol.h>

@class NSMutableArray, NSString;

@interface HAECGExporter : NSObject <SRMultiSampleExporting>
{
    struct unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs>> _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
    _Bool _fromRightWrist;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fromRightWrist; // @synthesize fromRightWrist=_fromRightWrist;
- (id)sr_dictionaryRepresentationWithSample:(id)arg1;
- (id)sr_endMultiSampleStream;
- (id)dumpCurrentWaveform;
- (void)sr_beginMultiSampleStream;
- (void)resetFilter;
- (void)handleRealtimeSamples:(const float *)arg1 count:(unsigned int)arg2 startTimestamp:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
