//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKValueHistogramCollectionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    NSArray *_quantityRanges;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *quantityRanges; // @synthesize quantityRanges=_quantityRanges;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

