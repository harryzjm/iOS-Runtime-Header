//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class PBCodable;

@interface AWDMetricContainer : NSObject
{
    PBCodable *_metric;
    unsigned int _metricId;
}

@property(readonly, nonatomic) unsigned int metricId; // @synthesize metricId=_metricId;
@property(retain, nonatomic) PBCodable *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (id)initWithMetricId:(unsigned int)arg1;

@end

