//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    struct OpaqueCMClock *clock;
    _Bool enabled;
    int changeSeed;
    NSString *sourceID;
}

- (void)dealloc;
- (id)init;

@end
