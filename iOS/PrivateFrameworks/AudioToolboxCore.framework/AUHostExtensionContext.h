//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class AUHostDelegate, NSExtension, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext
{
    NSExtension *_extension;
    AUHostDelegate *_delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) AUHostDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) __weak NSXPCConnection *xpcConnection;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
