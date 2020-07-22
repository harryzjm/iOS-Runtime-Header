//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, RWIProtocolCSSRuleId, RWIProtocolCSSSelectorList, RWIProtocolCSSStyle;

@interface RWIProtocolCSSRule
{
}

@property(copy, nonatomic) NSArray *media;
@property(retain, nonatomic) RWIProtocolCSSStyle *style;
@property(nonatomic) long long origin;
@property(nonatomic) int sourceLine;
@property(copy, nonatomic) NSString *sourceURL;
@property(retain, nonatomic) RWIProtocolCSSSelectorList *selectorList;
@property(retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
- (id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;

@end

