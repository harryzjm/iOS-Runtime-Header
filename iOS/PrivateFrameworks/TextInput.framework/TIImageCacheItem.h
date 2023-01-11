//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding>
{
    unsigned char _format;
    double _scale;
    struct CGColor *_formatColor;
    NSData *_data;
    CDUnknownBlockType _dataReleaseHandler;
    struct CGSize _size;
}

+ (_Bool)supportsSecureCoding;
+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5 dataReleaseHandler:(CDUnknownBlockType)arg6;
+ (id)cacheItemWithSize:(struct CGSize)arg1 format:(unsigned char)arg2 formatColor:(struct CGColor *)arg3 scale:(double)arg4 data:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dataReleaseHandler; // @synthesize dataReleaseHandler=_dataReleaseHandler;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct CGColor *formatColor; // @synthesize formatColor=_formatColor;
@property(nonatomic) unsigned char format; // @synthesize format=_format;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_callDataReleaseHandler;
- (void)dealloc;

@end
