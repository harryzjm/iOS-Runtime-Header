//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSendMessageIntentExport-Protocol.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@interface INSendMessageIntent <INSendMessageIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (_Bool)_isUserConfirmationRequired;
- (_Bool)_supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)_redactedDictionaryRepresentation;
@property(copy, nonatomic) NSArray *attachments;
- (void)setSender:(id)arg1;
@property(readonly, copy, nonatomic) INPerson *sender;
- (void)setServiceName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *serviceName;
- (void)setConversationIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *conversationIdentifier;
- (void)setSpeakableGroupName:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
- (void)setContent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *content;
- (void)setRecipients:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *recipients;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (void)setGroupName:(id)arg1;
- (id)groupName;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (_Bool)_isValidSubProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

