//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordKeyValueSetting-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, NSMutableDictionary, NSMutableSet, NSString;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding>
{
    _Bool _trackChanges;
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    CKRecord *_record;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(nonatomic) _Bool trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) NSMutableSet *changedKeysSet; // @synthesize changedKeysSet=_changedKeysSet;
@property(retain, nonatomic) NSMutableDictionary *originalValues; // @synthesize originalValues=_originalValues;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_validateRecordValue:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateKeyUniquenessForKey:(id)arg1;
- (_Bool)checkProperties:(_Bool)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;
- (void)resetChangedKeys;
- (id)changedKeys;
- (id)allKeys;
- (void)_sanitizeRecordValue:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)recordID;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

