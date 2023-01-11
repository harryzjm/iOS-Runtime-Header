//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage
{
    unsigned long long _acceptPolicy;
    _Bool _behavesLikeNS;
    NSHTTPCookie2Storage *_store;
}

- (void).cxx_destruct;
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;
- (unsigned long long)cookieAcceptPolicy;
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)removeCookiesSinceDate:(id)arg1;
- (void)deleteCookie:(id)arg1;
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cookiesForURL:(id)arg1;
- (id)cookies;
- (void)_saveCookies;
- (void)_saveCookies:(CDUnknownBlockType)arg1;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;
- (void)_testingOfStoringOfCookie:(id)arg1;
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)setCookie:(id)arg1;
- (void)dealloc;
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;
- (id)init;

@end
