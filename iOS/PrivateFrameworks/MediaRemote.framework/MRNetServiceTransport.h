//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MRExternalDeviceTransport.h"

@class MRDeviceInfo, NSNetService;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    MRDeviceInfo *_deviceInfo;
    _Bool _requiresCustomPairing;
    NSNetService *_netService;
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;
+ (id)createDeviceInfoFromNetService:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property(nonatomic) _Bool requiresCustomPairing;
- (void)resetWithError:(id)arg1;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (id)createConnectionWithUserInfo:(id)arg1;
- (id)error;
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;
- (_Bool)shouldUseSystemAuthenticationPrompt;
- (long long)connectionType;
- (long long)port;
- (id)hostname;
- (id)name;
- (id)deviceInfo;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;

@end

