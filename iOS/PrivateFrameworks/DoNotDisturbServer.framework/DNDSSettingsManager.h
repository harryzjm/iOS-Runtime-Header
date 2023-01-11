//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSyncSettingsProviderDelegate-Protocol.h>

@class CNContactStore, DNDSSyncSettingsProvider, NSString;
@protocol DNDSBackingStore, DNDSSettingsManagerDelegate, OS_dispatch_queue;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSBackingStore> _backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
    id <DNDSSettingsManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSSettingsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (unsigned long long)_saveBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 error:(id *)arg4;
- (id)_readSettingsReturningError:(id *)arg1;
- (id)syncSettingsWithError:(id *)arg1;
- (_Bool)setScheduleSettings:(id)arg1 withError:(id *)arg2;
- (id)scheduleSettingsWithError:(id *)arg1;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 withError:(id *)arg2;
- (id)phoneCallBypassSettingsWithError:(id *)arg1;
- (_Bool)setBehaviorSettings:(id)arg1 withError:(id *)arg2;
- (id)behaviorSettingsWithError:(id *)arg1;
- (id)initWithBackingStore:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

