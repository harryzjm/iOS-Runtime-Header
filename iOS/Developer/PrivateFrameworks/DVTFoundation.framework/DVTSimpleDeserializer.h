//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTByteBuffer, NSData, NSError;

@interface DVTSimpleDeserializer : NSObject
{
    NSData *_inputData;
    DVTByteBuffer *_buffer;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (unsigned long long)streamFormatVersion;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

