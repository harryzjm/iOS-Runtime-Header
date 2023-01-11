//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface WBUGeneratedPasswordCredentialUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_urlsScheduledForUpdating;
    NSMutableDictionary *_urlsToUpdateRequests;
}

+ (id)sharedUpdater;
- (void).cxx_destruct;
- (void)_performRequest:(id)arg1;
- (void)updateCredentialWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(_Bool)arg6;
- (id)init;

@end
