//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPRTLandmarkDetector : NSObject
{
    struct LandmarkDetector *_internalLandmarkDetector;
    int _numOfLandmarks;
}

- (void)calculateFaceRectFromPrevLM:(float *)arg1 result:(float *)arg2 numOfLandmarks:(int)arg3;
- (void)detectLandmark:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float *)arg5 prevResult:(float *)arg6 result:(float *)arg7;
- (void)dealloc;
- (id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6;

@end

