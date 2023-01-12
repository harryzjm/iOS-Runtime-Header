//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserAlerts/NSSecureCoding-Protocol.h>

@class NSArray, NSString, URTAlertAction;

@interface URTAlert : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_message;
    URTAlertAction *_defaultAction;
    URTAlertAction *_otherAction;
    URTAlertAction *_cancelAction;
    NSArray *_allowedApplicationBundleIDs;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *allowedApplicationBundleIDs; // @synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs;
@property(retain, nonatomic) URTAlertAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) URTAlertAction *otherAction; // @synthesize otherAction=_otherAction;
@property(retain, nonatomic) URTAlertAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)userNotificationRepresentation;

@end
