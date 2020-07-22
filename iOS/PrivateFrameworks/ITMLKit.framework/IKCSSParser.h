//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IKCSSParser : NSObject
{
}

+ (id)consumeDeclaration:(id)arg1;
+ (id)consumeDeclarationList:(id)arg1;
+ (id)consumeFunction:(id)arg1 fromToken:(id)arg2;
+ (id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2;
+ (id)consumeComponentValue:(id)arg1;
+ (id)consumeAtRule:(id)arg1;
+ (id)consumeQualifiedRule:(id)arg1;
+ (id)consumeRules:(id)arg1 topLevel:(_Bool)arg2;
+ (id)parseStylesheet:(id)arg1;
+ (id)parseRulesList:(id)arg1;
+ (id)parse:(id)arg1;

@end

