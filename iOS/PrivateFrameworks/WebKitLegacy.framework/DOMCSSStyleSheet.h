//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet
{
}

- (void)removeRule:(unsigned int)arg1;
- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
@property(readonly) DOMCSSRuleList *rules;
@property(readonly) DOMCSSRuleList *cssRules;
@property(readonly) DOMCSSRule *ownerRule;
- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;

@end
