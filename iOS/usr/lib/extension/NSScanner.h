//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSCharacterSet, NSString;

@interface NSScanner : NSObject <NSCopying>
{
}

+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) id locale;
@property _Bool caseSensitive;
@property(copy) NSCharacterSet *charactersToBeSkipped;
@property unsigned long long scanLocation;
@property(readonly, copy) NSString *string;
- (_Bool)isAtEnd;
- (_Bool)scanUpToString:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanString:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanCharactersFromSet:(id)arg1 intoString:(id *)arg2;
- (_Bool)scanHexInt:(unsigned int *)arg1;
- (_Bool)scanHexLongLong:(unsigned long long *)arg1;
- (_Bool)scanUnsignedInteger:(unsigned long long *)arg1;
- (_Bool)scanInteger:(long long *)arg1;
- (_Bool)scanInt:(int *)arg1;
- (_Bool)scanLongLong:(long long *)arg1;
- (_Bool)scanUnsignedLongLong:(unsigned long long *)arg1;
- (_Bool)scanHexFloat:(float *)arg1;
- (_Bool)scanHexDouble:(double *)arg1;
- (_Bool)scanFloat:(float *)arg1;
- (_Bool)scanDouble:(double *)arg1;
- (id)_invertedSkipSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)_scanDecimal:(unsigned long long)arg1 into:(long long *)arg2;
- (id)_remainingString;
- (_Bool)scanDecimal:(CDStruct_5fe7aead *)arg1;

@end

