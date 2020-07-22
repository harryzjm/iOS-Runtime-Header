//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor;

@interface SKLabelNode
{
    struct SKCLabelNode *_skcLabelNode;
}

+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithAttributedText:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)_labelNodeWithFontNamed:(id)arg1;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;
- (id)debugHierarchyPropertyDescriptions;
- (id)description;
- (id)attributedString;
@property(copy, nonatomic) NSString *text;
- (struct CGRect)frame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(nonatomic) long long blendMode;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) UIColor *color;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(retain, nonatomic) UIColor *fontColor;
@property(nonatomic) double fontSize;
@property(copy, nonatomic) NSString *fontName;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long horizontalAlignmentMode;
@property(nonatomic) long long verticalAlignmentMode;
- (id)initWithFontNamed:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_initialize;
- (id)init;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (void)setUIFont:(id)arg1;
- (void)setFont:(struct __CTFont *)arg1;
- (id)_getTextSprites;

@end

