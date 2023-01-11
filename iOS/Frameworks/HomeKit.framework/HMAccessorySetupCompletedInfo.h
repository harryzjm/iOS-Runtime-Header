//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding>
{
    NSArray *_addedAccessoryUUIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *addedAccessoryUUIDs; // @synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryList:(id)arg1;

@end
