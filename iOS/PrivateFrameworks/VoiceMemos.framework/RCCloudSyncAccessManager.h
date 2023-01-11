//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>
#import <VoiceMemos/RCManagedConfigurationHelperDelegate-Protocol.h>

@class ACMonitoredAccountStore, NSString, RCManagedConfigurationHelper;
@protocol RCCloudSyncAccessManagerDelegate;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate>
{
    ACMonitoredAccountStore *_accountStore;
    long long _startMonitoringOnceToken;
    RCManagedConfigurationHelper *_managedConfigurationHelper;
    int _tccNotifyToken;
    id <RCCloudSyncAccessManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RCCloudSyncAccessManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_availabilityChanged;
- (void)managedConfigurationUpdated:(_Bool)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)accountWasAdded:(id)arg1;
@property(nonatomic) int tccCloudAccess;
@property(readonly, nonatomic) _Bool cloudSyncIsAvailable;
- (void)dealloc;
- (void)startMonitoringAccountChanges;
@property(readonly) ACMonitoredAccountStore *accountStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
