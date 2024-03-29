//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID;

__attribute__((visibility("hidden")))
@interface BRCShareDeleteInfo : NSObject
{
    CKRecordID *_shareID;
    CKRecord *_emptyRecord;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecord *emptyRecord; // @synthesize emptyRecord=_emptyRecord;
@property(readonly, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithShareID:(id)arg1 emptyRecord:(id)arg2;

@end

