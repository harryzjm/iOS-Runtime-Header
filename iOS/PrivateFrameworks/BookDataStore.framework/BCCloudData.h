//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <BookDataStore/BCCloudData-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject <BCCloudData>
{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;
}

+ (id)localIdentifierFromRecord:(id)arg1;
+ (id)propertyIDKey;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (id)zoneName;
- (id)identifier;
- (id)recordType;
- (id)configuredRecordFromAttributes;
- (void)incrementEditGeneration;
@property(copy, nonatomic) CKRecord *systemFields; // @dynamic systemFields;
- (_Bool)hasValidSalt;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (_Bool)isEqualExceptForDate:(id)arg1;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)mutableCopy;

// Remaining properties
@property(copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long editGeneration; // @dynamic editGeneration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSString *saltedHashedID; // @dynamic saltedHashedID;
@property(readonly) Class superclass;
@property(nonatomic) long long syncGeneration; // @dynamic syncGeneration;

@end
