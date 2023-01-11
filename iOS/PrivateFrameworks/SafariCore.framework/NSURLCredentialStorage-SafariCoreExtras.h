//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLCredentialStorage.h>

@class NSDictionary;

@interface NSURLCredentialStorage (SafariCoreExtras)
@property(readonly, nonatomic) NSDictionary *safari_allSafariCredentials;
- (void)safari_deleteSynchronizableCredentialWithEmptyServerHost:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
- (void)safari_setSynchronizableCredential:(id)arg1 forHTMLFormProtectionSpace:(id)arg2;
@end
