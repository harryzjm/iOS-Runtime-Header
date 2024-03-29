//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRCMathMultiscriptsExpression : SCRCMathExpression
{
    SCRCMathExpression *_base;
    NSArray *_postScripts;
    NSArray *_preScripts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *preScripts; // @synthesize preScripts=_preScripts;
@property(retain, nonatomic) NSArray *postScripts; // @synthesize postScripts=_postScripts;
@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
- (void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(long long)arg2 arePausesAllowed:(_Bool)arg3 outSubscripts:(id *)arg4 outSuperscripts:(id *)arg5;
- (id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(_Bool)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)description;
- (id)_subSuperscriptPairFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

