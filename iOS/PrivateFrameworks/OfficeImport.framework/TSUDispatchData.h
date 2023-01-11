//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSUDispatchData : NSObject
{
    NSObject<OS_dispatch_data> *_data;
    _Bool _alwaysDefragmentData;
    unsigned long long _size;
    unsigned long long _maxFragmentsCount;
    NSObject<OS_dispatch_data> *_fragmentedData;
    NSObject<OS_dispatch_data> *_defragmentedData;
    unsigned long long _fragmentsCount;
}

@property(readonly, nonatomic) unsigned long long fragmentsCount; // @synthesize fragmentsCount=_fragmentsCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData; // @synthesize defragmentedData=_defragmentedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData; // @synthesize fragmentedData=_fragmentedData;
@property(nonatomic) unsigned long long maxFragmentsCount; // @synthesize maxFragmentsCount=_maxFragmentsCount;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) _Bool alwaysDefragmentData; // @synthesize alwaysDefragmentData=_alwaysDefragmentData;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *data;
- (void)defragmentData;
- (void)append:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

