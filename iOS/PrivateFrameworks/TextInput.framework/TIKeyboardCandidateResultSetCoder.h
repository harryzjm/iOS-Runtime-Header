//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface TIKeyboardCandidateResultSetCoder : NSObject
{
    NSMutableData *_mutableData;
    NSData *_data;
    unsigned long long _offset;
}

+ (id)decodeWithData:(id)arg1;
+ (id)encodeWithCandidateResultSet:(id)arg1;
+ (Class)classFromCandidateType:(int)arg1;
+ (id)candidateTypeToClassNameMap;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
- (void).cxx_destruct;
- (id)candidateResultSet;
- (id)dataFromCandidateResultSet:(id)arg1;
- (id)decodePointerValueArray;
- (void)encodePointerValueArray:(id)arg1;
- (id)decodeStringArray;
- (void)encodeStringArray:(id)arg1;
- (id)decodeString;
- (void)encodeString:(id)arg1;
- (unsigned long long)decodeUInt64;
- (void)encodeUInt64:(unsigned long long)arg1;
- (unsigned int)decodeUInt32;
- (void)encodeUInt32:(unsigned int)arg1;
- (unsigned short)decodeShort;
- (void)encodeShort:(unsigned short)arg1;
- (unsigned char)decodeByte;
- (void)encodeByte:(unsigned char)arg1;
- (_Bool)decodeBool;
- (void)encodeBool:(_Bool)arg1;
- (id)decodeCandidate;
@property(readonly, nonatomic) const char *currentPosition;
@property(readonly, nonatomic) const char *bytes;
- (id)initWithData:(id)arg1 mutableData:(id)arg2;
- (id)initForDecodingWithData:(id)arg1;
- (id)initForEncoding;

@end

