//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NFAssembly-Protocol.h>

@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>
{
    id <NUExtensionContextProvider> _extensionContextProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <NUExtensionContextProvider> extensionContextProvider; // @synthesize extensionContextProvider=_extensionContextProvider;
- (void)loadInRegistry:(id)arg1;
- (id)initWithExtensionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
