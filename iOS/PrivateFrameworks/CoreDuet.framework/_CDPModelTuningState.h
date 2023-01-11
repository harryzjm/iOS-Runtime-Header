//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _CDPModelTuningState : NSObject <NSSecureCoding>
{
    int _i;
    int _j;
    float _bestLogLambda;
    float _bestW0;
    float _bestScore;
    float _bestThreshold;
}

+ (_Bool)supportsSecureCoding;
+ (id)initialTuningState;
@property(nonatomic) float bestThreshold; // @synthesize bestThreshold=_bestThreshold;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) float bestW0; // @synthesize bestW0=_bestW0;
@property(nonatomic) float bestLogLambda; // @synthesize bestLogLambda=_bestLogLambda;
@property(nonatomic) int j; // @synthesize j=_j;
@property(nonatomic) int i; // @synthesize i=_i;
@property(readonly, nonatomic) float progress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;

@end
