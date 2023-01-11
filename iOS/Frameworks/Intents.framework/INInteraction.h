//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INEnumerable-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INInteractionExport-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CSSearchableItem, INImage, INIntent, INIntentResponse, NSDate, NSDateInterval, NSString, NSUUID, SAUISnippet;

@interface INInteraction : NSObject <INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>
{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    _Bool _donatedBySiri;
    SAUISnippet *_snippet;
    NSUUID *_contextExtensionUUID;
    long long _intentHandlingStatus;
    long long _direction;
    NSDateInterval *_dateInterval;
    NSString *_identifier;
    NSString *_groupIdentifier;
}

+ (unsigned long long)_searchableItemVersion;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteAllInteractionsWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long intentHandlingStatus; // @synthesize intentHandlingStatus=_intentHandlingStatus;
@property(copy, nonatomic, setter=_setIntentResponse:) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(copy, nonatomic, setter=_setIntent:) INIntent *intent; // @synthesize intent=_intent;
@property(copy, nonatomic, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID; // @synthesize _contextExtensionUUID;
@property(nonatomic, setter=_setDonatedBySiri:) _Bool _donatedBySiri; // @synthesize _donatedBySiri;
@property(retain, nonatomic, setter=_setSnippet:) SAUISnippet *_snippet; // @synthesize _snippet;
- (id)parameterValueForParameter:(id)arg1;
@property(readonly) long long _indexingHash;
- (id)_searchableItemIncludingData:(_Bool)arg1;
@property(readonly, copy) CSSearchableItem *_searchableItem;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_donateInteractionWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donateInteractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
- (id)_initWithIntent:(id)arg1 response:(id)arg2;
- (id)_init;
@property(copy, nonatomic) NSString *domainIdentifier;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *date;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
