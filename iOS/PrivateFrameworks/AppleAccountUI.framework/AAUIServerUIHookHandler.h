//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHookDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, RemoteUIController, UIViewController;

@interface AAUIServerUIHookHandler : NSObject <AAUIServerHookDelegate>
{
    NSMutableArray *_hookIdentifiers;
    RemoteUIController *_remoteUIController;
    UIViewController *_presentingControllerOverride;
    NSArray *_serverHooks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *serverHooks; // @synthesize serverHooks=_serverHooks;
@property(retain, nonatomic) UIViewController *presentingControllerOverride; // @synthesize presentingControllerOverride=_presentingControllerOverride;
- (id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3;
- (void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_responseDataForResult:(_Bool)arg1 withError:(id)arg2;
- (void)dismissObjectModelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)presentationContextForHook:(id)arg1;
- (id)currentPresenter;
- (void)processServerResponse:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleResponseForHook:(id)arg1 success:(_Bool)arg2 error:(id)arg3 attributes:(id)arg4 objectModel:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;
- (void)_rebuildServerHookHandlers;
- (id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2;
- (id)initWithRemoteUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
