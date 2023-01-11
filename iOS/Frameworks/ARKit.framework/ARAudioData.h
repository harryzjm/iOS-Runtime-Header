//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensorData-Protocol.h>

@class NSString;

@interface ARAudioData : NSObject <ARSensorData>
{
    double _timestamp;
    struct opaqueCMSampleBuffer *_sampleBuffer;
}

@property(readonly, nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

