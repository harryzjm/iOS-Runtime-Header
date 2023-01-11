//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class NSString;

@interface ARMattingImageMetaData : NSObject <ARResultData>
{
    double _timestamp;
    struct __CVBuffer *_downSampledImageBuffer;
    struct __CVBuffer *_mattingScaleImageBuffer;
}

@property(readonly, nonatomic) struct __CVBuffer *mattingScaleImageBuffer; // @synthesize mattingScaleImageBuffer=_mattingScaleImageBuffer;
@property(readonly, nonatomic) struct __CVBuffer *downSampledImageBuffer; // @synthesize downSampledImageBuffer=_downSampledImageBuffer;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;
- (id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(struct __CVBuffer *)arg2 mattingScaleImageBuffer:(struct __CVBuffer *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
