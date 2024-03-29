//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLIndexedConstantValue : NSObject
{
    unsigned long long _index;
    unsigned long long _dataType;
    char *_data;
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) unsigned long long index; // @synthesize index=_index;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)describe;
- (void)dealloc;
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3;

@end

