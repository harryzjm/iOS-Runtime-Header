//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_subscriptions;
    NSUUID *_dataPreferred;
    NSUUID *_voicePreferred;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *voicePreferred; // @synthesize voicePreferred=_voicePreferred;
@property(retain, nonatomic) NSUUID *dataPreferred; // @synthesize dataPreferred=_dataPreferred;
@property(retain, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (id)findForAccount:(id)arg1;
- (id)findForUuid:(id)arg1;
- (id)findForSlot:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
