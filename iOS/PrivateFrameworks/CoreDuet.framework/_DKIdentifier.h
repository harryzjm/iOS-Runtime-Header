//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    NSString *_stringValue;
    _DKIdentifierType *_identifierType;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithString:(id)arg1 type:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)_identifierFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)entityName;
@property(retain) _DKIdentifierType *identifierType; // @synthesize identifierType=_identifierType;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (long long)integerValue;
- (double)doubleValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
- (id)objectType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 type:(id)arg2;
- (id)toPBCodable;
- (_Bool)copyToManagedObject:(id)arg1;
- (long long)typeCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

