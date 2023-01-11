//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PHSuggestion, PHSuggestionMessageContext;

@interface PHSuggestionMessageMatchingResult : NSObject
{
    PHSuggestion *_suggestion;
    PHSuggestionMessageContext *_messageContext;
    NSMutableDictionary *_scoreByCMMSuggestionMatchingType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *scoreByCMMSuggestionMatchingType; // @synthesize scoreByCMMSuggestionMatchingType=_scoreByCMMSuggestionMatchingType;
@property(retain, nonatomic) PHSuggestionMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(retain, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (void)registerMatchingType:(long long)arg1 weight:(double)arg2;
- (id)initWithSuggestion:(id)arg1 messageContext:(id)arg2;

@end
