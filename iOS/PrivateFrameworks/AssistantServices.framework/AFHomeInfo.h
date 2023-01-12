//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AFHomeInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _activityNotificationsEnabledForPersonalRequests;
    NSUUID *_homeIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool activityNotificationsEnabledForPersonalRequests; // @synthesize activityNotificationsEnabledForPersonalRequests=_activityNotificationsEnabledForPersonalRequests;
@property(readonly, copy, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (id)buildDictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithHomeIdentifier:(id)arg1 activityNotificationsEnabledForPersonalRequests:(_Bool)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
