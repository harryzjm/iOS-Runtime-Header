//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject
{
    CLLocation *_location;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1;

@end

