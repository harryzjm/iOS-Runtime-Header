//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRAVDiscoverySessionHelper : NSObject
{
    unsigned long long _discoverySessionFeatures;
}

- (id)createDiscoverySession;
- (void)searchAVOutputDeviceForUID:(id)arg1 timeout:(double)arg2 identifier:(id)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithFeatures:(unsigned long long)arg1;

@end
