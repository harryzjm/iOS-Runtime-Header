//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNDetectDocumentSegmentationRequest
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;
- (id)supportedImageSizeSet;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end
