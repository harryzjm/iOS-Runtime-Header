//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject
{
    NSNumber *_numberOfUpdates;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
