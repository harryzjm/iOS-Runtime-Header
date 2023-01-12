//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>
#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isCommunicationSafetySendingRestricted;
    _Bool _isCommunicationSafetyReceivingRestricted;
    _Bool _isCommunicationSafetyNotificationEnabled;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) _Bool isCommunicationSafetyNotificationEnabled; // @synthesize isCommunicationSafetyNotificationEnabled=_isCommunicationSafetyNotificationEnabled;
@property(readonly) _Bool isCommunicationSafetyReceivingRestricted; // @synthesize isCommunicationSafetyReceivingRestricted=_isCommunicationSafetyReceivingRestricted;
@property(readonly) _Bool isCommunicationSafetySendingRestricted; // @synthesize isCommunicationSafetySendingRestricted=_isCommunicationSafetySendingRestricted;
- (unsigned long long)hash;
- (_Bool)isEqualToCommunicationConfiguration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommunicationSafetySendingRestricted:(_Bool)arg1 communicationSafetyReceivingRestricted:(_Bool)arg2 communicationSafetyNotificationEnabled:(_Bool)arg3;

@end
