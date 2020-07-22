//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderServiceSource-Protocol.h>

@class FPXExtensionContext, NSFileProviderExtension, NSString;

__attribute__((visibility("hidden")))
@interface FPXDeprecatedMethodsServiceSource : NSObject <NSFileProviderServiceSource>
{
    NSString *_serviceName;
    NSString *_itemIdentifier;
    NSFileProviderExtension *_instance;
    FPXExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
- (id)makeListenerEndpointAndReturnError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *serviceName;
- (id)initWithServiceName:(id)arg1 itemIdentifier:(id)arg2 instance:(id)arg3 extensionContext:(id)arg4;

@end

