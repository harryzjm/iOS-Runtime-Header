//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVDepthData;

@interface AVCaptureSynchronizedDepthDataInternal : NSObject
{
    AVDepthData *depthData;
    _Bool depthDataWasDropped;
    long long droppedReason;
}

@end
