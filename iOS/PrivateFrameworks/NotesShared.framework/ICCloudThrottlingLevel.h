//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICCloudThrottlingLevel : NSObject
{
    double _batchInterval;
    unsigned long long _numberOfBatches;
}

@property(nonatomic) unsigned long long numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
- (id)debugDescription;
- (id)description;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2;
- (id)init;

@end
