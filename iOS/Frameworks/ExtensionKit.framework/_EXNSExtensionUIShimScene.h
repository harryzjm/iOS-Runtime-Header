//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/_EXNSExtensionShimScene.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface _EXNSExtensionUIShimScene : _EXNSExtensionShimScene
{
    UIViewController *viewController;
}

- (void).cxx_destruct;
@property(retain) UIViewController *viewController; // @synthesize viewController;
- (_Bool)shouldAcceptConnection:(id)arg1;
- (void)connectToSession:(id)arg1;
- (id)makePrincipalObjectForExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain) id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

