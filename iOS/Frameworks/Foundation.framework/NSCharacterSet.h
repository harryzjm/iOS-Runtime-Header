//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)newlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)illegalCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)letterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)controlCharacterSet;
+ (void)initialize;
+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSData *bitmapRepresentation;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (_Bool)longCharacterIsMember:(unsigned int)arg1;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (void)makeImmutable;
- (_Bool)isMutable;
- (unsigned long long)count;
- (_Bool)isEmpty;
@property(readonly, copy) NSCharacterSet *invertedSet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (unsigned long long)_cfTypeID;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
