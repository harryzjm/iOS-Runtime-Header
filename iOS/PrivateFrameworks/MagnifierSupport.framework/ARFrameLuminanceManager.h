//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ARFrameLuminanceManager : NSObject
{
    double _lastComputedLuminance;
    unsigned long long _currentFrameId;
}

@property unsigned long long currentFrameId; // @synthesize currentFrameId=_currentFrameId;
@property double lastComputedLuminance; // @synthesize lastComputedLuminance=_lastComputedLuminance;
- (double)computeLuminanceFromPixelBuffer:(struct __CVBuffer *)arg1;
- (id)init;

@end
