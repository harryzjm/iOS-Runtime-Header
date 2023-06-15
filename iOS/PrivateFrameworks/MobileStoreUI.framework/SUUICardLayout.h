//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUUICardViewElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUICardLayout : NSObject
{
    SUUICardViewElement *_cardViewElement;
    SUUIViewElementLayoutContext *_layoutContext;
    _Bool _hasBackground;
}

+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)allowsViewElement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SUUICardViewElement *cardViewElement; // @synthesize cardViewElement=_cardViewElement;
@property(readonly, nonatomic) SUUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
@property(readonly, nonatomic) long long layoutStyle;
@property(readonly, nonatomic) double horizontalContentInset;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (id)attributedStringForLabel:(id)arg1;
- (id)attributedStringForButton:(id)arg1;

@end

