//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface _SYInputDataItem : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned long long _length;
    NSMutableData *_data;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lengthRemaining;
- (id)initWithLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;

@end

