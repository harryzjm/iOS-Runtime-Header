//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI23NSSwiftAttributedString : NSAttributedString
{
    MISSING_TYPE *_storage;
}

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)init;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) NSString *string;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithCoder:(id)arg1;

@end

