//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (OFNSStringCryptoExtensions)
+ (id)upperBoundString:(id)arg1;
+ (id)normalizeString:(id)arg1;
+ (id)shortTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (id)fullTimeCodeStringWithDuration:(unsigned long long)arg1;
+ (unsigned long long)durationFromFullTimeCodeString:(id)arg1;
+ (id)generateUUID;
+ (id)mimeCloser;
+ (id)mimePart:(id)arg1 forName:(id)arg2;
+ (id)multipartMIMEContentType;
+ (id)mimeBoundary;
- (id)hmacSha1Hash:(id)arg1;
- (id)sha1HashString;
- (id)sha1HashData;
- (id)md5HashString;
- (id)md5Hash;
- (id)stringByCapitalizingFirstCharacter;
- (id)stringByAddingPercentEscapesForURLPath;
- (id)stringByAddingPercentEscapes;
- (id)stringByReplacingPercentEscapes;
- (id)stringByDeletingTrailingSlash;
- (id)javaScriptEscapedString;
- (id)pathRelativeTo:(id)arg1;
- (id)firstline;
@end

