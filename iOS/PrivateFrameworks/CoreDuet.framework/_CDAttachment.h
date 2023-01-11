//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_creationDate;
    NSString *_uti;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSNumber *_size;
}

+ (_Bool)supportsSecureCoding;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
@property(retain) NSNumber *size; // @synthesize size=_size;
@property(retain) NSUUID *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *uti; // @synthesize uti=_uti;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;

@end

