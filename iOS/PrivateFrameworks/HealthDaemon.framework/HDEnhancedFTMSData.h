//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class NSDate, NSNumber;

@interface HDEnhancedFTMSData <HDDatumRendering>
{
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
@property(retain, nonatomic) NSNumber *averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(retain, nonatomic) NSNumber *instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
- (void).cxx_destruct;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end
