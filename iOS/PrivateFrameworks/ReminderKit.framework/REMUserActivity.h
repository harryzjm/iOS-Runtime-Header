//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSData *_storage;
}

+ (id)stringForActivityType:(long long)arg1;
+ (id)dataFromUserActivity:(id)arg1;
+ (id)userActivityWithDictionaryData:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)userActivityWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)debugDescriptionDetails;
- (id)debugDescription;
- (id)siriIntent;
- (id)userActivityData;
- (id)userActivity;
- (id)universalLink;
- (id)archivedDictionaryData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSiriIntent:(id)arg1;
- (id)initWithUserActivityData:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUniversalLink:(id)arg1;
- (id)initWithType:(long long)arg1 storage:(id)arg2;

@end
