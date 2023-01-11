//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface CKUploadRequestMetadata : NSObject <NSSecureCoding, NSCopying>
{
    long long _databaseScope;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_fieldName;
    CKRecordID *_repairZoneRecordID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *repairZoneRecordID; // @synthesize repairZoneRecordID=_repairZoneRecordID;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;

@end
