//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject
{
    _Bool _reported;
    int _state;
    RPDevice *_device;
    RPLegacyDeviceDiscovery *_discovery;
    RPLegacySession *_session;
}

- (void).cxx_destruct;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) RPLegacySession *session; // @synthesize session=_session;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(retain, nonatomic) RPLegacyDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) RPDevice *device; // @synthesize device=_device;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;
- (void)pairVerify;
- (void)invalidate;

@end
