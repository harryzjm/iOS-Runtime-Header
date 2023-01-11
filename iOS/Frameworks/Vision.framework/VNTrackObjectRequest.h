//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNTrackObjectRequest
{
    struct CGSize _trackingFrameSizeInPixels;
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (const CDStruct_7d93034e *)revisionAvailability;
@property(nonatomic) struct CGSize trackingFrameSizeInPixels; // @synthesize trackingFrameSizeInPixels=_trackingFrameSizeInPixels;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (void)setTrackingLevel:(unsigned long long)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;

@end
