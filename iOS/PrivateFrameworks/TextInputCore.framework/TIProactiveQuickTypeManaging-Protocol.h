//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, TIKeyboardSecureCandidateRenderTraits, TIKeyboardSecureCandidateRenderer;

@protocol TIProactiveQuickTypeManaging <NSObject>
- (void)setCachedRecipientInfo:(NSDictionary *)arg1 forEmailOrPhone:(NSString *)arg2;
- (NSDictionary *)getCachedRecipientInfoForEmailOrPhone:(NSString *)arg1;
- (NSArray *)getMeCardEmailAddresses;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;
- (_Bool)isAutoCompleteEnabled;
- (_Bool)isAutoPopupEnabled;
- (_Bool)isEnabled;
- (void)reset;
- (NSArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4 async:(_Bool)arg5 completion:(void (^)(NSArray *))arg6;
- (NSArray *)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11 async:(_Bool)arg12 completion:(void (^)(NSArray *))arg13;
@end

