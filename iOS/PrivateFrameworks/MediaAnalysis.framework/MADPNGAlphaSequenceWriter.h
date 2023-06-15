//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MADPNGAlphaSequenceWriter
{
    NSMutableData *_data;
    struct CF<CGImageDestination *> _destination;
    unsigned long long _remainingFrameCount;
    struct CF<__CVBuffer *> _lastPixelBuffer;
    CDStruct_1b6d18a9 _lastPTS;
    struct CF<CGImage *> _lastImage;
    int _status;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)transcodeWithMaxDimension:(unsigned long long)arg1;
- (id)finishWithEndTime:(CDStruct_1b6d18a9)arg1;
- (int)addPixelBuffer:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithFrameCount:(unsigned long long)arg1;

@end

