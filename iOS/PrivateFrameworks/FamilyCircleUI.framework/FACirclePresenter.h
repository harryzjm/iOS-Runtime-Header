//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/FACircleRemoteUIDelegateDelegate-Protocol.h>

@class FACircleRemoteUIDelegate, NSString, RemoteUIController, UIViewController;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate>
{
    RemoteUIController *_remoteUIController;
    FACircleRemoteUIDelegate *_remoteUIDelegate;
    CDUnknownBlockType _completion;
    UIViewController *_presenter;
}

@property(retain, nonatomic) UIViewController *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)FACircleRemoteUIDelegate:(id)arg1 completedWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_serverHookHandlerWithRemoteUIController:(id)arg1;
- (id)initWithPresenter:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
