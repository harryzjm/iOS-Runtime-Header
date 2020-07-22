//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiometricKit/NSCopying-Protocol.h>
#import <BiometricKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _userID;
    int _type;
    int _attribute;
    int _entity;
    NSUUID *_uuid;
    NSString *_name;
    NSDate *_creationTime;
    long long _matchCount;
    long long _updateCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)biometricKitIdentity;
@property(nonatomic) long long updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) long long matchCount; // @synthesize matchCount=_matchCount;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int entity; // @synthesize entity=_entity;
@property(nonatomic) int attribute; // @synthesize attribute=_attribute;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
