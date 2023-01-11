//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INGenericIntentResponse-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentResponseExport-Protocol.h>
#import <Intents/INIntentSlotComposing-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INIntentResponseCodableCode, INIntentResponseDescription, NSDictionary, NSString, NSUserActivity, PBCodable, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding>
{
    _Bool __userConfirmationRequired;
    long long _code;
    _INPBIntentResponse *_backingStore;
    PBCodable *_responseMessagePBRepresentation;
    NSUserActivity *_userActivity;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromIntentResponseCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(readonly, nonatomic) _Bool _userConfirmationRequired; // @synthesize _userConfirmationRequired=__userConfirmationRequired;
@property(copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)_inCodable;
@property(retain, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation; // @synthesize _responseMessagePBRepresentation;
@property(copy, nonatomic) NSDictionary *propertiesByName;
- (id)initWithPropertiesByName:(id)arg1;
- (id)protoData;
- (id)_impl;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic, setter=_setRequiresProtectedData:) _Bool _requiresProtectedData;
@property(nonatomic, setter=_setRequiresAuthentication:) _Bool _requiresAuthentication;
@property(readonly, nonatomic) long long _type;
@property(readonly, nonatomic) NSString *_className;
@property(readonly, nonatomic) _Bool _shouldForwardIntentToApp;
@property(readonly, nonatomic) INIntentResponseDescription *_instanceDescription;
@property(readonly, nonatomic) INIntentResponseCodableCode *_intentResponseCodableCode;
@property(readonly, nonatomic) long long _intentResponseCode;
- (long long)_intentHandlingStatus;
@property(retain, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)_payloadResponseMessageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool shouldOpenContainingApplication;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
- (long long)_code;
- (void)_setCode:(long long)arg1;
- (_Bool)_commonInit;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)intentSlotDescriptions;
@property(readonly) long long _intents_toggleState;
- (id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(_Bool)arg2;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(_Bool)arg2;
- (id)_responseTemplateForLanguage:(id)arg1;
@property(readonly, nonatomic, getter=_isSuccess) _Bool _success;
- (id)_originatingBundleIdentifier;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

