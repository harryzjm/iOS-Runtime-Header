//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureInputPort, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureMetadataInputInternal : NSObject
{
    AVCaptureInputPort *metadataPort;
    NSString *sourceID;
    struct opaqueCMFormatDescription *desc;
    struct OpaqueCMClock *clock;
    struct OpaqueCMBlockBuffer *emptyBoxedMetadata;
}

@end

