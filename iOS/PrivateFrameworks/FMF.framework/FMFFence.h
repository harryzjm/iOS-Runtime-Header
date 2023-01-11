//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, FMFPlacemark, NSArray, NSDate, NSString;

@interface FMFFence : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _active;
    _Bool _recurring;
    _Bool _fromMe;
    _Bool _pending;
    NSString *_identifier;
    NSString *_label;
    CLLocation *_location;
    FMFPlacemark *_placemark;
    NSArray *_recipients;
    NSString *_trigger;
    NSString *_type;
    unsigned long long _locationType;
    NSDate *_timestamp;
    NSArray *_followerIds;
    NSString *_friendIdentifier;
    NSString *_createdByIdentifier;
    NSString *_pendingIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSString *pendingIdentifier; // @synthesize pendingIdentifier=_pendingIdentifier;
@property(retain, nonatomic) NSString *createdByIdentifier; // @synthesize createdByIdentifier=_createdByIdentifier;
@property(retain, nonatomic) NSString *friendIdentifier; // @synthesize friendIdentifier=_friendIdentifier;
@property(retain, nonatomic) NSArray *followerIds; // @synthesize followerIds=_followerIds;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=isFromMe) _Bool fromMe; // @synthesize fromMe=_fromMe;
@property(nonatomic, getter=isRecurring) _Bool recurring; // @synthesize recurring=_recurring;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) FMFPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)handlesForArray:(id)arg1;
- (id)locationForDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateFenceLocation:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(unsigned long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(_Bool)arg8;

@end
