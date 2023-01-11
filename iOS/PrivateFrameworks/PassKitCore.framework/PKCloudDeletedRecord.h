//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>
{
    CKRecordID *_recordID;
    NSString *_recordType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;

@end
