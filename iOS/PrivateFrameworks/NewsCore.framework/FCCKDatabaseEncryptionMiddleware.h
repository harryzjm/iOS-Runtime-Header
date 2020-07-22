//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseRecordMiddleware-Protocol.h>

@class FCCKPrivateDatabaseSchema, NSString;
@protocol FCCKRecordNameCipher;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware>
{
    FCCKPrivateDatabaseSchema *_encryptionSchema;
    id <FCCKRecordNameCipher> _recordNameCipher;
}

@property(retain, nonatomic) id <FCCKRecordNameCipher> recordNameCipher; // @synthesize recordNameCipher=_recordNameCipher;
@property(retain, nonatomic) FCCKPrivateDatabaseSchema *encryptionSchema; // @synthesize encryptionSchema=_encryptionSchema;
- (void).cxx_destruct;
- (_Bool)_isEnabledForDatabase:(id)arg1;
- (id)_encryptionKeyForServerRecordID:(id)arg1 inDatabase:(id)arg2;
- (id)_encryptionKeyForClientRecordID:(id)arg1 inDatabase:(id)arg2;
- (_Bool)_decryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id *)arg3;
- (_Bool)_decryptField:(id)arg1 inRecord:(id)arg2 error:(id *)arg3;
- (_Bool)_decryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (_Bool)_encryptField:(id)arg1 inRecord:(id)arg2 error:(id *)arg3;
- (id)_clientZoneIDFromServerZoneID:(id)arg1 error:(id *)arg2;
- (id)_serverZoneIDFromClientZoneID:(id)arg1 error:(id *)arg2;
- (_Bool)_encryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id *)arg3;
- (_Bool)_encryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)clientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (id)serverRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (id)clientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)initWithEncryptionSchema:(id)arg1;
- (id)initWithEncryptionSchema:(id)arg1 recordNameCipher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
