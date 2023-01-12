//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDLBufferViewAllocator;

@interface MDLBufferView : NSObject
{
    const void *_data;
    unsigned long long _length;
    unsigned long long _offset;
    long long _regionIndex;
    MDLBufferViewAllocator *_allocator;
    _Bool _writable;
}

- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 regionIndex:(long long)arg4 allocator:(id)arg5;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) const void *data;

@end
