//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLConversationExtensionHostContext : NSExtensionContext
{
    CDUnknownBlockType _dismissalRequestHandler;
    NSString *_messageGUID;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(copy, nonatomic) CDUnknownBlockType dismissalRequestHandler; // @synthesize dismissalRequestHandler=_dismissalRequestHandler;
- (id)createURLWithMessageGUIDForCurrentURL:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestDismissal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

