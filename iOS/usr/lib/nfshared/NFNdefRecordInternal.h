//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <nfshared/NFNdefRecord-Protocol.h>
#import <nfshared/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface NFNdefRecordInternal : NSObject <NFNdefRecord, NSSecureCoding>
{
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

+ (id)dataFromRecord:(id)arg1;
+ (id)decodeFromRecord:(id)arg1;
+ (id)_decodeURIRecord:(id)arg1;
+ (id)_decodeTextRecord:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)recordsFromBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (_Bool)parseRecordUsingScanner:(struct _NFDataScanner *)arg1 header:(char *)arg2 type:(id *)arg3 identifier:(id *)arg4 payload:(id *)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isURIRecord;
- (id)decode;
- (id)asData;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *payload;
@property(retain, nonatomic) NSData *identifier;
- (void)_setIdLengthPresent:(_Bool)arg1;
- (_Bool)_idLengthPresent;
@property(retain, nonatomic) NSData *type;
@property(nonatomic) unsigned char typeNameFormat;
@property(nonatomic) _Bool shortRecord;
@property(nonatomic) _Bool chunked;
@property(nonatomic) _Bool messageEnd;
@property(nonatomic) _Bool messageBegin;
@property(nonatomic) unsigned char header;
- (void)dealloc;
- (id)initWithHeader:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithNDEFRecord:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

