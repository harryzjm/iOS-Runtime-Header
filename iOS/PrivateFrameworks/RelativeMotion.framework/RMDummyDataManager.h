//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RMConnectionClient;
@protocol OS_dispatch_queue;

@interface RMDummyDataManager : NSObject
{
    _Bool _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _relativeDataCallback;
    RMConnectionClient *_connectionClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RMConnectionClient *connectionClient; // @synthesize connectionClient=_connectionClient;
@property(copy, nonatomic) CDUnknownBlockType relativeDataCallback; // @synthesize relativeDataCallback=_relativeDataCallback;
@property(nonatomic) _Bool isReceivingRelatveData; // @synthesize isReceivingRelatveData=_isReceivingRelatveData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)stopReceivingDummyDataUpdates;
- (void)startReceivingDummyDataUpdates:(CDUnknownBlockType)arg1;
- (id)dummyDataConfiguration;
- (void)invalidate;
- (id)initWithQueue:(id)arg1;

@end
