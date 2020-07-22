//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DKDGLDataArrayBuffer, DKDGLDataBuffer, NSString;

@interface DKDGLDataBufferAttribute : NSObject
{
    _Bool _isNormalized;
    unsigned int _bufferUsage;
    int _dataType;
    int _componentCount;
    int _locationInShader;
    NSString *_name;
    unsigned long long _bufferOffset;
    DKDGLDataArrayBuffer *_dataArrayBuffer;
    DKDGLDataBuffer *_dataBuffer;
}

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;
@property(nonatomic) DKDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) DKDGLDataArrayBuffer *dataArrayBuffer; // @synthesize dataArrayBuffer=_dataArrayBuffer;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(nonatomic) int locationInShader; // @synthesize locationInShader=_locationInShader;
@property(readonly, nonatomic) _Bool isNormalized; // @synthesize isNormalized=_isNormalized;
@property(readonly, nonatomic) int componentCount; // @synthesize componentCount=_componentCount;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int bufferUsage; // @synthesize bufferUsage=_bufferUsage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)setComponentCount:(int)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;

@end

