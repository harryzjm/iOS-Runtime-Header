//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData;

@interface HMDBackingStoreLogRecord : NSObject
{
    long long _rowID;
    long long _xactID;
    long long _pushed;
    NSData *_data;
    long long _type;
    long long _encoding;
    CKRecordID *_root;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(readonly, nonatomic) long long encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long pushed; // @synthesize pushed=_pushed;
@property(readonly, nonatomic) long long xactID; // @synthesize xactID=_xactID;
@property(readonly, nonatomic) long long rowID; // @synthesize rowID=_rowID;
- (id)description;
- (id)initWithArray:(id)arg1;

@end
