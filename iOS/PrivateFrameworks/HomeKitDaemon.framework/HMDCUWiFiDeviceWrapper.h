//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUWACSession, CUWiFiDevice, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCUWiFiDeviceWrapper : NSObject
{
    CUWiFiDevice *_cuWiFiDevice;
    CUWACSession *_wacSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *deviceID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id underlyingDevice; // @dynamic underlyingDevice;
@property(readonly, nonatomic) _Bool supportsAirPlay2; // @dynamic supportsAirPlay2;
@property(readonly, nonatomic) _Bool isConfigured; // @dynamic isConfigured;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *ssid; // @dynamic ssid;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

