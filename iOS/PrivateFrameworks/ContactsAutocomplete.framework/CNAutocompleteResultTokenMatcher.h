//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject
{
    NSArray *_tokens;
    NSString *_countryCode;
}

+ (id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2;
+ (id)tokenizePhoneNumber:(id)arg1;
+ (id)indexTokensFromPhoneNumber:(id)arg1;
+ (id)searchTokensFromString:(id)arg1;
- (void).cxx_destruct;
- (id)representationsOfPhoneNumber:(id)arg1;
- (id)tokensForResultValue:(id)arg1;
- (id)tokensForResultName:(id)arg1;
- (id)nameTokensForResult:(id)arg1;
- (_Bool)evaluateTopLevelGroupResult:(id)arg1;
- (_Bool)evaluateSingleResult:(id)arg1;
- (_Bool)evaluateResult:(id)arg1;
- (CDUnknownBlockType)filterAdapter;
- (id)initWithSearchString:(id)arg1 countryCode:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)init;

@end

