//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class HMFMACAddress, HMFSoftwareVersion, NSObject, NSString;
@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMobileGestaltDataSource : HMFObject
{
    struct os_unfair_lock_s _lock;
    _Bool _supportsBLE;
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_model;
    NSString *_regionInfo;
    NSString *_serialNumber;
    long long _productPlatform;
    long long _productClass;
    long long _productVariant;
    HMFSoftwareVersion *_softwareVersion;
    HMFMACAddress *_WiFiInterfaceMACAddress;
    long long _productColor;
    NSObject<OS_dispatch_queue> *_queue;
    struct MGNotificationTokenStruct *_notificationToken;
}

- (void).cxx_destruct;
@property(readonly) struct MGNotificationTokenStruct *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) long long productColor; // @synthesize productColor=_productColor;
@property(readonly) _Bool supportsBLE; // @synthesize supportsBLE=_supportsBLE;
@property(readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress; // @synthesize WiFiInterfaceMACAddress=_WiFiInterfaceMACAddress;
@property(readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) long long productVariant; // @synthesize productVariant=_productVariant;
@property(readonly, nonatomic) long long productClass; // @synthesize productClass=_productClass;
@property(readonly, nonatomic) long long productPlatform; // @synthesize productPlatform=_productPlatform;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *regionInfo; // @synthesize regionInfo=_regionInfo;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property __weak id <HMFSystemInfoNameDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)shouldFetchProtectedKey:(id)arg1;
- (_Bool)shouldFetchUserAssignedDeviceName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

