//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class NSArray, NSString;
@protocol TPSCloudCallingDeviceControllerDelegate;

@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate>
{
    _Bool _enabled;
    id <TPSCloudCallingDeviceControllerDelegate> _delegate;
    NSArray *_devices;
}

@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <TPSCloudCallingDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeCloudCallingDevices;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

