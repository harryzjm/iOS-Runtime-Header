//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;
    _Bool _headerInfoRead;
    _Bool _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)popRawFrame;
- (void)reset;
- (void)_readFrameHeaderIfPossible;
- (void)pushFrameData:(id)arg1;
- (unsigned long long)bytesNeededForCurrentFrame;
- (unsigned long long)_getCurrentFrameSize;
- (_Bool)hasPartialData;
- (_Bool)hasCompleteFrame;
- (_Bool)hasFailed;
- (id)init;

@end

