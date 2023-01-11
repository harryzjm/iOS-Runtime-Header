//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLAttributedStringJSExports-Protocol.h>

@class NSAttributedString, NSMutableAttributedString, NSString;

@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports>
{
    NSMutableAttributedString *_attributedString;
}

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;
+ (void)initializeJSContext:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (struct CGSize)size;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)NSAttributedString;
@property(retain, nonatomic) NSString *string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringWithAttachment:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)init;

@end
