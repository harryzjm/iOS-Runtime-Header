//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>
#import <MPUFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableSet, NSString;

@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_emphasisRangesSet;
    NSString *_string;
}

+ (void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisDelimiter:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_enumerateEmphasisRangesInString:(id)arg1 withEmphasisSubstring:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)emphasizedTextUsingString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3;
+ (id)emphasizedTextUsingString:(id)arg1 emphasisDelimiter:(id)arg2;
+ (id)emphasizedTextWithString:(id)arg1;
+ (id)attributedStringWithString:(id)arg1 emphasisSubstring:(id)arg2 options:(unsigned long long)arg3 regularTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)attributedStringWithString:(id)arg1 emphasisDelimiter:(id)arg2 regularTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
- (void).cxx_destruct;
- (id)newAttributedStringWithTextAttributes:(id)arg1;
- (id)newAttributedStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (void)enumerateEmphasisRangesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *string;
@property(readonly, copy, nonatomic) NSArray *emphasisRanges;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithString:(id)arg1 emphasisRanges:(id)arg2;
- (id)init;

@end

