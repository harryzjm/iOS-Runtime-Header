//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMDUnassociatedMediaAccessory, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDMediaBrowserDataSource, HMDMediaBrowserDelegate, HMFLocking, OS_dispatch_queue;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>
{
    id <HMFLocking> _lock;
    NSMutableSet *_accessoryAdvertisements;
    _Bool _discoverUnassociatedAccessories;
    _Bool _discoverAssociatedAccessories;
    _Bool _updateAvailableOutputDevices;
    id <HMDMediaBrowserDelegate> _delegate;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id <HMDMediaBrowserDataSource> _dataSource;
}

+ (id)logCategory;
+ (id)advertisementsFromOutputDevices:(struct __CFArray *)arg1;
+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly) id <HMDMediaBrowserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableSet *mediaEndpoints; // @synthesize mediaEndpoints=_mediaEndpoints;
@property(retain, nonatomic) NSMutableSet *identifiersOfAssociatedMediaAccessories; // @synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories;
@property(nonatomic) _Bool updateAvailableOutputDevices; // @synthesize updateAvailableOutputDevices=_updateAvailableOutputDevices;
@property(retain, nonatomic) HMFTimer *discoveryPollTimer; // @synthesize discoveryPollTimer=_discoveryPollTimer;
@property(nonatomic) void *discoverySessionCallbackToken; // @synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken;
@property(readonly, nonatomic) void *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDMediaBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;
- (void)deregisterAccessories:(id)arg1;
- (void)_updateSessionsForAccessories:(id)arg1;
- (void)updateSessionsForAccessories:(id)arg1;
- (void)registerAccessories:(id)arg1;
- (void)_updateSessionForAccessory:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)_handleAvailableOutputDevices:(struct __CFArray *)arg1;
- (void)checkForUpdatedAvailableOutputDevices:(struct __CFArray *)arg1;
- (id)dumpDescription;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)startDiscoveringAssociatedAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_startDiscoveringAccessories;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (void)_removeAdvertisements:(id)arg1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)_addAdvertisements:(id)arg1;
@property(readonly, copy) NSArray *accessoryAdvertisements;
@property(readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property(readonly) HMFMessageDispatcher *messageDispatcher;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1 dataSource:(id)arg2;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
