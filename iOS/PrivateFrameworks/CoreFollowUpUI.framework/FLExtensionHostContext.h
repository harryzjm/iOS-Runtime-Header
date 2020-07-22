//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <CoreFollowUpUI/FLExtensionHostContextInterface-Protocol.h>

@class NSString;
@protocol FLExtensionHostContextInterface;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface>
{
    id <FLExtensionHostContextInterface> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) __weak id <FLExtensionHostContextInterface> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)extensionDidFinish;
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

