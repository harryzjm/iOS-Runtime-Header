//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <NetworkExtension/NEExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionProviderProtocol-Protocol.h>

@class NEUserNotification, NSString;
@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>
{
    id <NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
    id <NEExtensionProviderHostDelegate> _delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property __weak id <NEExtensionProviderHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyValueForEntitlement:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startedWithError:(id)arg1;
- (void)dispose;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
@property(readonly) int pid;
- (id)vendorContext;
- (void)setDescription:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
