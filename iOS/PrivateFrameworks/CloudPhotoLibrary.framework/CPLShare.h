//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLShareParticipant, NSArray, NSURL;

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>
{
    long long _publicPermission;
    NSURL *_URL;
    NSArray *_participants;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic) _Bool ownerIsCurrentUser;
@property(readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property(readonly, nonatomic) CPLShareParticipant *owner;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
