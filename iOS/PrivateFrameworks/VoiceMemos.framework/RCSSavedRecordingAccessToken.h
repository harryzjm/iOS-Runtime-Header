//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCoding-Protocol.h>
#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    _Bool _exclusive;
    long long _accessIntent;
    NSURL *_compositionAVURL;
    NSString *_accessName;
    NSDictionary *_userInfo;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *accessName; // @synthesize accessName=_accessName;
@property(readonly, nonatomic) NSURL *compositionAVURL; // @synthesize compositionAVURL=_compositionAVURL;
@property(readonly, nonatomic, getter=isExclusive) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(readonly, nonatomic) long long accessIntent; // @synthesize accessIntent=_accessIntent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;

@end
