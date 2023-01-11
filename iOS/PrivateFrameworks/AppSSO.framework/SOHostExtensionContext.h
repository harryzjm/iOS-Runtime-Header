//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <AppSSO/SOHostExtensionContextProtocol-Protocol.h>

@class NSString, SOExtension;

__attribute__((visibility("hidden")))
@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol>
{
    SOExtension *_contextExtension;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property __weak SOExtension *contextExtension; // @synthesize contextExtension=_contextExtension;
- (void).cxx_destruct;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteContextWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
