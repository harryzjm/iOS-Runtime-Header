//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnectionConfigurable-Protocol.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>
{
    _Bool _machService;
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    NSXPCInterface *_exportedInterface;
    unsigned long long _options;
}

+ (id)eraseDeviceServiceConfiguration;
+ (id)helperConfiguration;
+ (id)fmipConfiguration;
+ (id)btDiscoveryConfiguration;
+ (id)userNotificationConfiguration;
+ (id)emergencyCallInfoPublisherConfiguration;
+ (id)identityConfiguration;
- (void).cxx_destruct;
@property(nonatomic) _Bool machService; // @synthesize machService=_machService;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
