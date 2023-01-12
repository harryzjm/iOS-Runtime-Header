//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <RemoteManagementStore/RMStoreConfigurationSubscriberExtensionHostContext-Protocol.h>
#import <RemoteManagementStore/RMStoreConfigurationSubscriberExtensionVendorContext-Protocol.h>

@class NSString;

@interface RMConfigurationSubscriberExtensionContext : NSExtensionContext <RMStoreConfigurationSubscriberExtensionHostContext, RMStoreConfigurationSubscriberExtensionVendorContext>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_plistAndErrorClasses;
+ (id)_plistClasses;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
