//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface CUWriteRequest : NSObject
{
    NSError *_error;
    struct iovec _iov[16];
    struct iovec *_iop;
    int _ion;
    unsigned long long _offset;
    _Bool _endOfData;
    struct iovec *_bytesIOArray;
    unsigned long long _bytesIOCount;
    unsigned long long _bytesIOMaxCount;
    CDUnknownBlockType _completion;
    NSArray *_dataArray;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool endOfData; // @synthesize endOfData=_endOfData;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long bytesIOMaxCount; // @synthesize bytesIOMaxCount=_bytesIOMaxCount;
@property(nonatomic) unsigned long long bytesIOCount; // @synthesize bytesIOCount=_bytesIOCount;
@property(readonly, nonatomic) struct iovec *bytesIOArray; // @synthesize bytesIOArray=_bytesIOArray;
- (void).cxx_destruct;
- (id)init;

@end

