//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject
{
    DMFOSUpdate *_update;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) DMFOSUpdate *update; // @synthesize update=_update;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;
- (id)init;

@end
