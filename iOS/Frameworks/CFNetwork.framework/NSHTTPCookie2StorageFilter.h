//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject
{
    _Bool _isTrusted;
    _Bool _isTrustedCached;
    NSString *_urlScheme;
    _Bool _isTopLevelNavigation;
    _Bool _isSafe;
    _Bool _overwriteHTTPOnlyCookies;
    NSURL *_url;
    NSURL *_mainDocumentURL;
    NSURL *_siteForCookies;
    NSString *_partition;
    unsigned long long _acceptPolicy;
}

- (void).cxx_destruct;
@property unsigned long long acceptPolicy; // @synthesize acceptPolicy=_acceptPolicy;
@property _Bool overwriteHTTPOnlyCookies; // @synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies;
@property _Bool isSafe; // @synthesize isSafe=_isSafe;
@property _Bool isTopLevelNavigation; // @synthesize isTopLevelNavigation=_isTopLevelNavigation;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSURL *siteForCookies; // @synthesize siteForCookies=_siteForCookies;
@property(retain, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isTrusted;
- (id)init;

@end

