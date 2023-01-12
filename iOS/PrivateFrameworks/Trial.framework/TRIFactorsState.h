//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class TRIFactorsStateExperimentIdentifiers, TRIFactorsStateRolloutIdentifiers;

@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) TRIFactorsStateRolloutIdentifiers *rolloutIdentifiers;
@property(readonly, nonatomic) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persisted;
- (id)initWithPersisted:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
