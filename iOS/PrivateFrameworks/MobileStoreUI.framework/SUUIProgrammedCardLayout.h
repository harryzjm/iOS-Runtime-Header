//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SUUIProgrammedCardLayout
{
}

+ (_Bool)allowsViewElement:(id)arg1;
- (id)_stringLayoutForViewElement:(id)arg1 width:(double)arg2;
- (id)_fontForLabel:(id)arg1;
- (id)_fontForButton:(id)arg1;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (long long)layoutStyle;
- (double)horizontalContentInset;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (id)attributedStringForLabel:(id)arg1;
- (id)attributedStringForButton:(id)arg1;

@end

