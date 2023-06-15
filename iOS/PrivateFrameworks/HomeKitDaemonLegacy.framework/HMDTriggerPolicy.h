//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDTriggerPolicy : HMFObject
{
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyPolicy:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

