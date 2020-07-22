//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDUserPresenceUpdateReason : NSObject
{
    unsigned long long _value;
}

+ (id)reasonWithCoder:(id)arg1;
+ (id)reasonWithDict:(id)arg1;
+ (id)reasonWithMessage:(id)arg1;
+ (id)reasonWithNumber:(id)arg1;
+ (id)reasonWithValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end
