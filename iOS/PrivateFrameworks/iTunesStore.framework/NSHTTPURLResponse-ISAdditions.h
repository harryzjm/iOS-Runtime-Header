//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)
- (long long)maxExpectedContentLength;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (double)expirationInterval;
- (id)expirationDate;
- (id)_dateFromExpires;
- (_Bool)_getCacheControlMaxAge:(double *)arg1;
@end
