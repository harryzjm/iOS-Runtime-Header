//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CXProviderExtensionHostContext, NSExtension;
@protocol NSCopying;

@interface CXExtensionCallSource
{
    CXProviderExtensionHostContext *_extensionContext;
    NSExtension *_extension;
    id <NSCopying> _requestIdentifier;
}

@property(copy, nonatomic) id <NSCopying> requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) CXProviderExtensionHostContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)processIdentifier;
- (id)bundle;
- (id)displayName;
- (id)identifier;
- (id)vendorProtocolDelegate;
- (id)init;
- (id)initWithExtensionIdentifier:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end
