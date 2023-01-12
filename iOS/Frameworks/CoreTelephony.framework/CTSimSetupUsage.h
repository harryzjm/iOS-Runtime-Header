//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTSimSetupUsage : NSObject <NSSecureCoding>
{
    _Bool _inBuddy;
    unsigned long long _transferablePlans;
    unsigned long long _selectedTransferablePlans;
    unsigned long long _alsPlans;
    unsigned long long _selectedAlsPlans;
    unsigned long long _odaPlans;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long odaPlans; // @synthesize odaPlans=_odaPlans;
@property unsigned long long selectedAlsPlans; // @synthesize selectedAlsPlans=_selectedAlsPlans;
@property unsigned long long alsPlans; // @synthesize alsPlans=_alsPlans;
@property unsigned long long selectedTransferablePlans; // @synthesize selectedTransferablePlans=_selectedTransferablePlans;
@property unsigned long long transferablePlans; // @synthesize transferablePlans=_transferablePlans;
@property _Bool inBuddy; // @synthesize inBuddy=_inBuddy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithInBuddy:(_Bool)arg1 transferablePlans:(unsigned long long)arg2 selectedTransferablePlans:(unsigned long long)arg3 alsPlans:(unsigned long long)arg4 selectedAlsPlans:(unsigned long long)arg5 odaPlans:(unsigned long long)arg6;

@end
