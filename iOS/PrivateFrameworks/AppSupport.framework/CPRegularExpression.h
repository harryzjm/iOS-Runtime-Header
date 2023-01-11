//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSupport/NSCoding-Protocol.h>
#import <AppSupport/NSCopying-Protocol.h>

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void *_reserved;
}

+ (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned long long)arg4;
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned long long)arg4;
- (id)expressionString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (unsigned long long)numberOfSubexpressions;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (void)dealloc;

@end

