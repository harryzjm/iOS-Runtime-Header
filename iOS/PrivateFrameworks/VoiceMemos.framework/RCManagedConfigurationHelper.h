//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/MCProfileConnectionObserver-Protocol.h>

@class NSString;
@protocol RCManagedConfigurationHelperDelegate;

@interface RCManagedConfigurationHelper : NSObject <MCProfileConnectionObserver>
{
    _Bool _observing;
    id <RCManagedConfigurationHelperDelegate> _delegate;
}

+ (_Bool)cloudSyncIsAllowed;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RCManagedConfigurationHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_stopObserving;
- (void)_startObserving;
- (void)_notifyDelegateOfChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
