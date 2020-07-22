//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreExtensionServiceInterface-Protocol.h>

@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>
{
}

+ (id)serviceInterface;
+ (id)clientInterface;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)setRequestedIdentifier:(id)arg1;
- (void)setTabIdentifier:(id)arg1;
- (void)setupWithParameters:(id)arg1;
- (_Bool)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

