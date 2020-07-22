//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface TVImageOutlineDecorator
{
    UIColor *_outlineColor;
    struct UIEdgeInsets _outlineWidths;
}

+ (id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets outlineWidths; // @synthesize outlineWidths=_outlineWidths;
@property(readonly, copy, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
- (void).cxx_destruct;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;
- (id)initWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets)arg2;

@end

