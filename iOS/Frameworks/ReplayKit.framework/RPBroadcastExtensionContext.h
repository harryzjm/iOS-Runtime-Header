//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <ReplayKit/RPBroadcastExtensionHostProtocol-Protocol.h>
#import <ReplayKit/RPBroadcastExtensionInitProtocol-Protocol.h>

@class NSString;

@interface RPBroadcastExtensionContext : NSExtensionContext <RPBroadcastExtensionInitProtocol, RPBroadcastExtensionHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (oneway void)updateBroadcastHandlerListenerEndpoint:(CDUnknownBlockType)arg1;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (id)extensionObjectProxy;
- (id)broadcastExtensionViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
