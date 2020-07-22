//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Social/NSSecureCoding-Protocol.h>

@class NSNumber, NSURL;

@interface SLWeiboUserRecord <NSSecureCoding>
{
    NSNumber *_uid;
    NSURL *_objectID;
}

+ (_Bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property(copy, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)setValuesWithUserDictionary:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
