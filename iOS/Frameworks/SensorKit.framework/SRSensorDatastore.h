//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRDefaults, SRFrameStore;

@interface SRSensorDatastore : NSObject
{
    unsigned long long _permission;
    unsigned long long _maxAllowedPages;
    float _segmentResizeFactor;
    SRDefaults *_defaults;
    SRFrameStore *_framesStore;
    SRFrameStore *_metadata;
}

+ (void)initialize;
@property(retain) SRFrameStore *metadata; // @synthesize metadata=_metadata;
@property(retain) SRFrameStore *framesStore; // @synthesize framesStore=_framesStore;
- (void)syncMappedFiles;
@property(readonly) double startTimeOfCurrentSegment;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchSamplesFrom:(double)arg1 to:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchMetadataWithTime:(double)arg1 offset:(unsigned long long)arg2 metadataFrame:(void **)arg3 next:(void **)arg4;
- (id)findClosestMetadataFrameTo:(double)arg1 offset:(unsigned long long)arg2;
- (void)writeMetadataBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (_Bool)writeSampleBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)dealloc;
- (id)initWithSampleFile:(id)arg1 metadataFile:(id)arg2 permission:(unsigned long long)arg3 defaults:(id)arg4;
- (id)initForPruningWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;
- (id)initForWritingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;
- (id)initForReadingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;

@end
