//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNGenerateOpticalFlowRequest
{
}

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (_Bool)_calculateLKTVectorResult:(struct __CVBuffer *)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (id)_initializedLKTMetalContextAndReturnError:(id *)arg1;
- (struct __CVBuffer *)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id *)arg3;
- (struct __CVBuffer *)_createLKTPixelBufferFromPixelRegionOfInterest:(struct CGRect)arg1 inImageBuffer:(id)arg2 error:(id *)arg3;

@end
