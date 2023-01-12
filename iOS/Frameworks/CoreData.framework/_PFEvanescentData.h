//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _PFEvanescentData : NSData
{
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

+ (Class)classForKeyedUnarchiver;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (Class)classForCoder;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (void)invalidate;
- (unsigned long long)length;
- (id)description;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
