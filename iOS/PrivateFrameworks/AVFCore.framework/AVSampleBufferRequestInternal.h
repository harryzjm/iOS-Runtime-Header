//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSampleCursor;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRequestInternal : NSObject
{
    AVSampleCursor *startCursor;
    long long direction;
    AVSampleCursor *limitCursor;
    long long preferredMinSampleCount;
    long long maxSampleCount;
    long long mode;
    CDStruct_1b6d18a9 overrideTime;
}

@end
