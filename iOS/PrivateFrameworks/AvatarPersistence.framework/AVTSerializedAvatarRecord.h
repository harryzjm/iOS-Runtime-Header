//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/NSCopying-Protocol.h>
#import <AvatarPersistence/NSSecureCoding-Protocol.h>

@protocol AVTAvatarRecord;

@interface AVTSerializedAvatarRecord : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isPuppet;
    id <AVTAvatarRecord> _avatarRecord;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPuppet; // @synthesize isPuppet=_isPuppet;
@property(readonly, copy, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1;

@end
