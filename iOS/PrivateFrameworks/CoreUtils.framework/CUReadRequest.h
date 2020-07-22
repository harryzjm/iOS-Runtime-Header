//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableData;

@interface CUReadRequest : NSObject
{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    void *_bufferBytes;
    NSMutableData *_bufferData;
    CDUnknownBlockType _completion;
    unsigned long long _minLength;
    unsigned long long _maxLength;
}

@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) void *bufferBytes; // @synthesize bufferBytes=_bufferBytes;
- (void).cxx_destruct;

@end

