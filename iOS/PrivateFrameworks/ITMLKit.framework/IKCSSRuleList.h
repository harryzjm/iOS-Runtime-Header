//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IKCSSRuleList : NSObject
{
    NSMutableArray *rules;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)lastRule;
- (id)firstRule;
- (void)addRule:(id)arg1;
- (id)init;

@end
