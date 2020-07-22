//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPSVectorDescriptor : NSObject
{
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned int _dataType;
}

+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (id)vectorDescriptorWithLength:(unsigned long long)arg1 vectors:(unsigned long long)arg2 vectorBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (unsigned long long)vectorBytesForLength:(unsigned long long)arg1 dataType:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long vectorBytes; // @synthesize vectorBytes=_vectorBytes;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long vectors; // @synthesize vectors=_vectors;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)init;

@end

