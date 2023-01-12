//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInferenceIntents/NSObject-Protocol.h>

@class ExecuteSuggestionIntent;

@protocol ExecuteSuggestionIntentHandling <NSObject>
- (void)handleExecuteSuggestion:(ExecuteSuggestionIntent *)arg1 completion:(void (^)(ExecuteSuggestionIntentResponse *))arg2;

@optional
- (void)confirmExecuteSuggestion:(ExecuteSuggestionIntent *)arg1 completion:(void (^)(ExecuteSuggestionIntentResponse *))arg2;
@end

