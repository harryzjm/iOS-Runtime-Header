//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDeviceInfoRequest : NSObject
{
}

+ (void)deviceInfoForUID:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)deviceInfoForOrigin:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)cachedDeviceInfoForOrigin:(id)arg1;
+ (id)deviceInfoForOrigin:(id)arg1;

@end
