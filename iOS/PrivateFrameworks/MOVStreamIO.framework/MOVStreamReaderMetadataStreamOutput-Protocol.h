//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/MOVStreamReaderBaseStreamOutput-Protocol.h>

@class AVTimedMetadataGroup, NSArray;

@protocol MOVStreamReaderMetadataStreamOutput <MOVStreamReaderBaseStreamOutput>
- (AVTimedMetadataGroup *)grabNextTimedMetadataGroupOfStreamError:(out id *)arg1;
- (NSArray *)grabNextMetadataOfStreamTimeRange:(out CDStruct_3c1748cc *)arg1 error:(out id *)arg2;
@end

