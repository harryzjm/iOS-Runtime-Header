//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol AVOutputDeviceDiscoverySessionImpl, OS_dispatch_queue;

@interface AVOutputDeviceDiscoverySessionInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end

