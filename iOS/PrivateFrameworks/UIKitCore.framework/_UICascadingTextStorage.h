//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSConcreteTextStorage.h"

@class NSDictionary, NSMutableDictionary, UIColor, UIFont;
@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UICascadingTextStorage : NSConcreteTextStorage
{
    NSMutableDictionary *_defaultAttributes;
    id <_UITextAttributeDefaults> _defaults;
}

+ (id)defaultFont;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setDefaults:) id <_UITextAttributeDefaults> _defaults; // @synthesize _defaults;
- (void)_restoreOriginalFontAttribute;
- (_Bool)_shouldSetOriginalFontAttribute;
- (id)_defaultAttributes;
@property(nonatomic) long long defaultBaseWritingDirection;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)initWithDefaults:(id)arg1;
- (id)init;
- (long long)_ui_resolvedTextAlignment;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double shadowBlur;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
- (id)_shadow;
- (void)_setShadow:(id)arg1;
@property(retain, nonatomic) UIFont *font;

@end

