//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject
{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSNotificationAuthorizationAlertController *_authorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (_Bool)_queue_isAuthorizationModificationRestrictedForApplication:(id)arg1;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataProviderFactory:(id)arg1;

@end

