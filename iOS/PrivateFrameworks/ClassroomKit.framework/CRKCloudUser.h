//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CRKCloudUser : NSObject <NSSecureCoding>
{
    _Bool _managedAppleID;
    _Bool _HSA2;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isHSA2) _Bool HSA2; // @synthesize HSA2=_HSA2;
@property(nonatomic, getter=isManagedAppleID) _Bool managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)representsSameUserAsUser:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToCloudUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isManagedAppleID:(_Bool)arg2 isHSA2:(_Bool)arg3;
- (id)init;

@end

