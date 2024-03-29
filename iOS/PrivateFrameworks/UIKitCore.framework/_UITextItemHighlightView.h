//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface _UITextItemHighlightView
{
    NSArray *_textLineRects;
    UIColor *_fillColor;
    double _cornerRadius;
    double _horizontalPadding;
    double _verticalPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) NSArray *textLineRects; // @synthesize textLineRects=_textLineRects;
- (void)_updateShape;
- (struct UIEdgeInsets)_padding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

