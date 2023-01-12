//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextualActionsClient/ATXProtoBufWrapper-Protocol.h>
#import <ContextualActionsClient/BMStoreData-Protocol.h>
#import <ContextualActionsClient/NSSecureCoding-Protocol.h>

@class CAXContextualAction, CAXPredictionContext, CAXSuggestion, NSString;

@interface CAXContextualActionsFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>
{
    CAXContextualAction *_selectedAction;
    CAXSuggestion *_suggestion;
    CAXPredictionContext *_deviceContext;
    NSString *_sessionIdentifier;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(copy, nonatomic) CAXPredictionContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(copy, nonatomic) CAXSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) CAXContextualAction *selectedAction; // @synthesize selectedAction=_selectedAction;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)json;
- (id)jsonRawData;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)initWithSelectedAction:(id)arg1 suggestion:(id)arg2 deviceContext:(id)arg3 sessionIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
