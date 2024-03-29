//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIButtonViewElement, SUUIViewElementText;

__attribute__((visibility("hidden")))
@interface SUUIDividerViewElement : SUUIViewElement
{
    SUUIButtonViewElement *_button;
    long long _dividerType;
    _Bool _dividerTypeWasInitialized;
    SUUIViewElementText *_text;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIViewElementText *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long dividerType;
@property(readonly, nonatomic) SUUIButtonViewElement *button;
- (long long)pageComponentType;
- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

