//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSSet;

@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject
{
    NSSet *_activeRestrictionUUIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *activeRestrictionUUIDs; // @synthesize activeRestrictionUUIDs=_activeRestrictionUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
