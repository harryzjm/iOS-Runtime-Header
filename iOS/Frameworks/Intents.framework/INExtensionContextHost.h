//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <Intents/INExtensionContextHosting-Protocol.h>

@class NSBundle, NSString;
@protocol INExtensionContextHostDelegate;

@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting>
{
    id <INExtensionContextHostDelegate> _delegate;
    NSBundle *_extensionBundle;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) NSBundle *extensionBundle; // @synthesize extensionBundle=_extensionBundle;
@property(nonatomic) __weak id <INExtensionContextHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)extensionContextVendorWantsToCacheImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
