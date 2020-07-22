//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents <NSCopying>
{
    struct __CFURLComponents *_components;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)setPercentEncodedQueryItems:(id)arg1;
- (id)percentEncodedQueryItems;
- (void)setQueryItems:(id)arg1;
- (id)queryItems;
- (struct _NSRange)rangeOfFragment;
- (struct _NSRange)rangeOfQuery;
- (struct _NSRange)rangeOfPath;
- (struct _NSRange)rangeOfPort;
- (struct _NSRange)rangeOfHost;
- (struct _NSRange)rangeOfPassword;
- (struct _NSRange)rangeOfUser;
- (struct _NSRange)rangeOfScheme;
- (void)setPercentEncodedFragment:(id)arg1;
- (id)percentEncodedFragment;
- (void)setPercentEncodedQuery:(id)arg1;
- (id)percentEncodedQuery;
- (void)setPercentEncodedPath:(id)arg1;
- (id)percentEncodedPath;
- (void)setPercentEncodedHost:(id)arg1;
- (id)percentEncodedHost;
- (void)setPercentEncodedPassword:(id)arg1;
- (id)percentEncodedPassword;
- (void)setPercentEncodedUser:(id)arg1;
- (id)percentEncodedUser;
- (void)setFragment:(id)arg1;
- (id)fragment;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setPort:(id)arg1;
- (id)port;
- (void)setHost:(id)arg1;
- (id)host;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUser:(id)arg1;
- (id)user;
- (void)setScheme:(id)arg1;
- (id)scheme;
- (id)string;
- (id)URLRelativeToURL:(id)arg1;
- (id)URL;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct __CFURLComponents *)__cfComponents;

@end

