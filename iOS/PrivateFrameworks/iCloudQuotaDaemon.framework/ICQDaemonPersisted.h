//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ICQDaemonPersisted : NSObject
{
    _Bool _failedToFetchFromServer;
    NSDate *_retrievalDate;
    double _callbackInterval;
    NSString *_accountAltDSID;
    NSDictionary *_serverDictionary;
    NSDictionary *_failureDetails;
}

+ (id)_mutablePlaceholderPersistanceDictionary;
+ (double)defaultCallbackInterval;
+ (id)persistenceKey;
+ (id)persistenceDomain;
+ (void)clearPersistedObjectWithCompletion:(CDUnknownBlockType)arg1;
+ (void)clearPersistedObject;
+ (id)persistedObject;
+ (id)_placeholderObject;
+ (id)_placeholderPersistenceDictionary;
@property(retain, nonatomic) NSDictionary *failureDetails; // @synthesize failureDetails=_failureDetails;
@property(nonatomic) _Bool failedToFetchFromServer; // @synthesize failedToFetchFromServer=_failedToFetchFromServer;
@property(retain, nonatomic) NSDictionary *serverDictionary; // @synthesize serverDictionary=_serverDictionary;
@property(retain, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property(nonatomic) double callbackInterval; // @synthesize callbackInterval=_callbackInterval;
@property(retain, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *_cachedQuotaAvailable;
- (double)_callbackIntervalFromServerObject:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_mutablePersistenceDictionary;
- (id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isValidForAccount:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)persistWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistObject;
@property(readonly, nonatomic) NSDictionary *_persistenceDictionary;

@end
