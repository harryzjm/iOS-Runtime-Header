//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMNowPlayingOutputDevice : NSObject
{
    unsigned long long _deviceType;
    unsigned long long _deviceSubType;
    NSString *_deviceId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned long long deviceSubType; // @synthesize deviceSubType=_deviceSubType;
@property(readonly, nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)proto;
- (id)initWithDeviceType:(unsigned long long)arg1 deviceSubType:(unsigned long long)arg2 deviceId:(id)arg3;

@end
