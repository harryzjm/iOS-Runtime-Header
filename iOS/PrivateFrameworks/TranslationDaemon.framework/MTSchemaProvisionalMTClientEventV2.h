//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class MTSchemaProvisionalMTASRStateUpdated, MTSchemaProvisionalMTAppBackgroundedTier1, MTSchemaProvisionalMTAppNextButtonTappedTier1, MTSchemaProvisionalMTAppTextBoxDismissedTier1, MTSchemaProvisionalMTAppTextClearedTier1, MTSchemaProvisionalMTAppTimedOutTier1, MTSchemaProvisionalMTBatchRequestContext, MTSchemaProvisionalMTClientEventMetadata, MTSchemaProvisionalMTFrameworkRequestResponseReceived, MTSchemaProvisionalMTFrameworkRequestSent, MTSchemaProvisionalMTInvocationContext, MTSchemaProvisionalMTInvocationStartedTier1, MTSchemaProvisionalMTLocalePairResolved, NSData;

__attribute__((visibility("hidden")))
@interface MTSchemaProvisionalMTClientEventV2 : SISchemaTopLevelUnionType
{
    MTSchemaProvisionalMTClientEventMetadata *_eventMetadata;
    MTSchemaProvisionalMTBatchRequestContext *_batchRequestContext;
    MTSchemaProvisionalMTInvocationContext *_invocationContext;
    MTSchemaProvisionalMTASRStateUpdated *_asrStateUpdated;
    MTSchemaProvisionalMTLocalePairResolved *_localePairResolved;
    MTSchemaProvisionalMTInvocationStartedTier1 *_invocationStartedTier1;
    MTSchemaProvisionalMTAppNextButtonTappedTier1 *_appNextButtonTapped;
    MTSchemaProvisionalMTAppTextClearedTier1 *_appTextCleared;
    MTSchemaProvisionalMTAppTextBoxDismissedTier1 *_appTextBoxDismissed;
    MTSchemaProvisionalMTAppTimedOutTier1 *_appTimedOut;
    MTSchemaProvisionalMTFrameworkRequestSent *_frameworkRequestSent;
    MTSchemaProvisionalMTFrameworkRequestResponseReceived *_frameworkRequestResponseReceived;
    MTSchemaProvisionalMTAppBackgroundedTier1 *_appBackgrounded;
    _Bool _hasBatchRequestContext;
    _Bool _hasInvocationContext;
    _Bool _hasAsrStateUpdated;
    _Bool _hasLocalePairResolved;
    _Bool _hasInvocationStartedTier1;
    _Bool _hasAppNextButtonTapped;
    _Bool _hasAppTextCleared;
    _Bool _hasAppTextBoxDismissed;
    _Bool _hasAppTimedOut;
    _Bool _hasFrameworkRequestSent;
    _Bool _hasFrameworkRequestResponseReceived;
    _Bool _hasAppBackgrounded;
    unsigned long long _whichEvent_Type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAppBackgrounded; // @synthesize hasAppBackgrounded=_hasAppBackgrounded;
@property(nonatomic) _Bool hasFrameworkRequestResponseReceived; // @synthesize hasFrameworkRequestResponseReceived=_hasFrameworkRequestResponseReceived;
@property(nonatomic) _Bool hasFrameworkRequestSent; // @synthesize hasFrameworkRequestSent=_hasFrameworkRequestSent;
@property(nonatomic) _Bool hasAppTimedOut; // @synthesize hasAppTimedOut=_hasAppTimedOut;
@property(nonatomic) _Bool hasAppTextBoxDismissed; // @synthesize hasAppTextBoxDismissed=_hasAppTextBoxDismissed;
@property(nonatomic) _Bool hasAppTextCleared; // @synthesize hasAppTextCleared=_hasAppTextCleared;
@property(nonatomic) _Bool hasAppNextButtonTapped; // @synthesize hasAppNextButtonTapped=_hasAppNextButtonTapped;
@property(nonatomic) _Bool hasInvocationStartedTier1; // @synthesize hasInvocationStartedTier1=_hasInvocationStartedTier1;
@property(nonatomic) _Bool hasLocalePairResolved; // @synthesize hasLocalePairResolved=_hasLocalePairResolved;
@property(nonatomic) _Bool hasAsrStateUpdated; // @synthesize hasAsrStateUpdated=_hasAsrStateUpdated;
@property(nonatomic) _Bool hasInvocationContext; // @synthesize hasInvocationContext=_hasInvocationContext;
@property(nonatomic) _Bool hasBatchRequestContext; // @synthesize hasBatchRequestContext=_hasBatchRequestContext;
@property(retain, nonatomic) MTSchemaProvisionalMTClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)deleteAppBackgrounded;
@property(retain, nonatomic) MTSchemaProvisionalMTAppBackgroundedTier1 *appBackgrounded; // @synthesize appBackgrounded=_appBackgrounded;
- (void)deleteFrameworkRequestResponseReceived;
@property(retain, nonatomic) MTSchemaProvisionalMTFrameworkRequestResponseReceived *frameworkRequestResponseReceived; // @synthesize frameworkRequestResponseReceived=_frameworkRequestResponseReceived;
- (void)deleteFrameworkRequestSent;
@property(retain, nonatomic) MTSchemaProvisionalMTFrameworkRequestSent *frameworkRequestSent; // @synthesize frameworkRequestSent=_frameworkRequestSent;
- (void)deleteAppTimedOut;
@property(retain, nonatomic) MTSchemaProvisionalMTAppTimedOutTier1 *appTimedOut; // @synthesize appTimedOut=_appTimedOut;
- (void)deleteAppTextBoxDismissed;
@property(retain, nonatomic) MTSchemaProvisionalMTAppTextBoxDismissedTier1 *appTextBoxDismissed; // @synthesize appTextBoxDismissed=_appTextBoxDismissed;
- (void)deleteAppTextCleared;
@property(retain, nonatomic) MTSchemaProvisionalMTAppTextClearedTier1 *appTextCleared; // @synthesize appTextCleared=_appTextCleared;
- (void)deleteAppNextButtonTapped;
@property(retain, nonatomic) MTSchemaProvisionalMTAppNextButtonTappedTier1 *appNextButtonTapped; // @synthesize appNextButtonTapped=_appNextButtonTapped;
- (void)deleteInvocationStartedTier1;
@property(retain, nonatomic) MTSchemaProvisionalMTInvocationStartedTier1 *invocationStartedTier1; // @synthesize invocationStartedTier1=_invocationStartedTier1;
- (void)deleteLocalePairResolved;
@property(retain, nonatomic) MTSchemaProvisionalMTLocalePairResolved *localePairResolved; // @synthesize localePairResolved=_localePairResolved;
- (void)deleteAsrStateUpdated;
@property(retain, nonatomic) MTSchemaProvisionalMTASRStateUpdated *asrStateUpdated; // @synthesize asrStateUpdated=_asrStateUpdated;
- (void)deleteInvocationContext;
@property(retain, nonatomic) MTSchemaProvisionalMTInvocationContext *invocationContext; // @synthesize invocationContext=_invocationContext;
- (void)deleteBatchRequestContext;
@property(retain, nonatomic) MTSchemaProvisionalMTBatchRequestContext *batchRequestContext; // @synthesize batchRequestContext=_batchRequestContext;
- (void)deleteEventMetadata;
- (_Bool)hasEventMetadata;
- (id)qualifiedMessageName;
- (id)getVersion;
- (id)getTypeId;
- (_Bool)isProvisional;
- (int)getAnyEventType;

@end

