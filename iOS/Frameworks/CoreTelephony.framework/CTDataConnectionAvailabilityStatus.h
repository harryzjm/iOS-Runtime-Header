//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _available;
    int _csiError;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int csiError; // @synthesize csiError=_csiError;
@property(nonatomic) _Bool available; // @synthesize available=_available;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

