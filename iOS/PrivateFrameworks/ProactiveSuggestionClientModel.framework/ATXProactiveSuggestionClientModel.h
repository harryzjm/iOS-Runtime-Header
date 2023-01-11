//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProactiveSuggestionClientModelProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol ATXProactiveSuggestionClientModelXPCInterface;

@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol>
{
    NSString *_clientModelId;
    NSString *_notificationId;
    id <ATXProactiveSuggestionClientModelXPCInterface> _suggestionReceiver;
    NSXPCConnection *_xpcConnection;
}

+ (long long)actionConversionTypeForClientModelType:(long long)arg1;
+ (_Bool)clientModelTypeIsEligibleForShortcutConversion:(long long)arg1;
+ (long long)clientModelTypeFromClientModelId:(id)arg1;
+ (id)clientModelIdsFromClientModelTypesArray:(id)arg1;
+ (id)clientModelIdFromClientModelType:(long long)arg1;
+ (void)refreshBlendingLayer;
- (void).cxx_destruct;
- (void)retrieveCurrentSuggestionsWithReply:(CDUnknownBlockType)arg1;
- (void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateSuggestions:(id)arg1 feedbackMetadata:(id)arg2;
- (void)updateSuggestions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSuggestions:(id)arg1;
- (void)transmitSuggestionsToReceiver:(id)arg1 feedbackMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transmitNotificationIdToSuggestionReceiver:(id)arg1;
@property(readonly, nonatomic) NSString *clientModelId;
@property(readonly, nonatomic) id <ATXProactiveSuggestionClientModelXPCInterface> suggestionReceiver;
- (id)remoteAsyncSuggestionReceiver;
- (void)setupRemoteClientXPCConnection;
- (void)dealloc;
- (id)initWithClientModelId:(id)arg1 notificationId:(id)arg2 suggestionReceiver:(id)arg3;
- (id)initWithClientModelId:(id)arg1 notificationId:(id)arg2;
- (void)retrieveAvailableCriterionIdentifiersWithReply:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
