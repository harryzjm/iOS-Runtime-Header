//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSData *_encryptedData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool needsDecryption;
@property(readonly, nonatomic) _Bool needsEncryption;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly) unsigned long long hash;
- (id)value;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithEncryptedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
