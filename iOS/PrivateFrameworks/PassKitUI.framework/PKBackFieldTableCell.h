//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPassField, UITextView;

@interface PKBackFieldTableCell
{
    PKPassField *_field;
    UITextView *_valueTextView;
    _Bool _showLinks;
}

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (id)valueFont;
+ (id)titleFont;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool showLinks; // @synthesize showLinks=_showLinks;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (struct CGSize)_sizeForValueTextWithWidth:(double)arg1;
- (void)_setupTextAttributes;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_detectLinks;
- (void)dealloc;
- (id)initWithField:(id)arg1 showLinks:(_Bool)arg2;

@end

