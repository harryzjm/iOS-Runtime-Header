//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject
{
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

+ (id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3;
@property(readonly, copy, nonatomic) NSString *serverRecordType; // @synthesize serverRecordType=_serverRecordType;
@property(readonly, copy, nonatomic) NSString *clientRecordType; // @synthesize clientRecordType=_clientRecordType;
- (void).cxx_destruct;
- (_Bool)isFieldEncrypted:(id)arg1;
- (_Bool)isFieldKnown:(id)arg1;
@property(readonly, nonatomic) _Bool hasEncryptedFields;
- (id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3;
- (id)init;

@end

