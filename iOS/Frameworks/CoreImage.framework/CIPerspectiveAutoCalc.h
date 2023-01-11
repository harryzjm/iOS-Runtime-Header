//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, CIImage;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalc : NSObject
{
    CIImage *img;
    CIContext *ctx;
    CDStruct_58ac58eb config;
    double pitch;
    double yaw;
    double roll;
    double confidence;
    CIImage *debugImage;
    long long pitchFailureReason;
    long long yawFailureReason;
    _Bool generateDebugImage;
}

@property(readonly) long long yawFailureReason; // @synthesize yawFailureReason;
@property(readonly) long long pitchFailureReason; // @synthesize pitchFailureReason;
@property(readonly) CIImage *debugImage; // @synthesize debugImage;
@property _Bool generateDebugImage; // @synthesize generateDebugImage;
@property(readonly) double confidence; // @synthesize confidence;
@property(readonly) double roll; // @synthesize roll;
@property(readonly) double yaw; // @synthesize yaw;
@property(readonly) double pitch; // @synthesize pitch;
- (_Bool)compute;
- (void)dealloc;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;

@end
