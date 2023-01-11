//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTPairedDeviceObserver-Protocol.h>
#import <MobileTimer/MTSyncStatusProvider-Protocol.h>

@class NSString;
@protocol MTSyncStatusProviderDelegate;

@interface MTCompanionSyncStatusProvider : NSObject <MTPairedDeviceObserver, MTSyncStatusProvider>
{
    id <MTSyncStatusProviderDelegate> _syncStatusProviderDelegate;
}

+ (_Bool)deviceSupportsSyncing;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MTSyncStatusProviderDelegate> syncStatusProviderDelegate; // @synthesize syncStatusProviderDelegate=_syncStatusProviderDelegate;
- (void)activePairedDeviceDidChange;
- (unsigned long long)syncStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
