//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSString;
@protocol MPAVLightweightRoutingControllerDelegate;

__attribute__((visibility("hidden")))
@interface MPAVLightweightRoutingController : NSObject
{
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    long long _discoveryMode;
    NSString *_name;
    id <MPAVLightweightRoutingControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MPAVLightweightRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *pickedRoutes;
@property(readonly, nonatomic, getter=isDevicePresenceDetected) _Bool devicePresenceDetected;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
