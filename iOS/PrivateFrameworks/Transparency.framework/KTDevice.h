//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSSecureCoding-Protocol.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>
{
    NSData *_deviceID;
    NSData *_deviceIDVRFOutput;
    NSMutableArray *_clientDatas;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSMutableArray *clientDatas; // @synthesize clientDatas=_clientDatas;
@property(retain) NSData *deviceIDVRFOutput; // @synthesize deviceIDVRFOutput=_deviceIDVRFOutput;
@property(retain) NSData *deviceID; // @synthesize deviceID=_deviceID;
- (_Bool)updateWithMutation:(id)arg1 error:(id *)arg2;
- (void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2;
- (void)addClientDatasObject:(id)arg1;
- (void)removeClientDatasObject:(id)arg1;
- (id)clientRecordsForVRFOutput:(id)arg1;
- (id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataVRFOutput:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;

@end
