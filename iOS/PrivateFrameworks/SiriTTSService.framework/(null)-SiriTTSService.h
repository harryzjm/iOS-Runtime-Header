//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (SiriTTSService)
- (void)pingWithReply:(CDUnknownBlockType)arg1;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)arg1 wordTimingInfo:(id)arg2;
- (void)didGenerateAudioWithRequestId:(unsigned long long)arg1 audio:(id)arg2;
- (void)didReportInstrumentWithRequestId:(unsigned long long)arg1 instrumentationMetrics:(id)arg2;
- (void)didStartSpeakingWithRequestId:(unsigned long long)arg1;
@end

