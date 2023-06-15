//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@protocol NTKMovingStatistic <NSObject>
@property(nonatomic) unsigned long long sampleSize;
@property(nonatomic) double currentValue;
- (void)addNewValue:(double)arg1;
- (id)initWithSampleSize:(unsigned long long)arg1;
@end

