//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNetService;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport
{
    void *_deviceInfo;
    NSNetService *_netService;
}

+ (void *)createDeviceInfoFromTXTRecord:(id)arg1;
+ (void *)createDeviceInfoFromNetService:(id)arg1;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (_Bool)requiresCustomPairing;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (long long)port;
- (id)hostname;
- (id)name;
- (void *)deviceInfo;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;

@end
