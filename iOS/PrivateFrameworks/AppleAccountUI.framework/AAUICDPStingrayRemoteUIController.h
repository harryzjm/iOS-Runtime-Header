//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject
{
    AAUIServerUIHookHandler *_serverHookHandler;
    ACAccount *_account;
}

- (void).cxx_destruct;
- (void)setPresentingController:(id)arg1;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;
- (void)attachAuthHandler:(CDUnknownBlockType)arg1;
- (void)attachRepairHandler:(CDUnknownBlockType)arg1;
- (void)attachPasscodeHandler:(CDUnknownBlockType)arg1;
- (void)attachRecoveryKeyHandler:(CDUnknownBlockType)arg1;
- (void)attachAllHandlers;
- (id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2;
- (id)initWithRemoteUIController:(id)arg1;

@end

