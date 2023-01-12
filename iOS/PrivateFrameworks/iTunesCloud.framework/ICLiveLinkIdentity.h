//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>
#import <iTunesCloud/_ICMutableLiveLinkIdentityPrivate-Protocol.h>

@class NSPersonNameComponents, NSString, NSURL, NSUUID;

@interface ICLiveLinkIdentity : NSObject <_ICMutableLiveLinkIdentityPrivate, NSCopying, NSSecureCoding>
{
    long long _serverID;
    NSUUID *_identifier;
    NSString *_externalIdentifier;
    NSPersonNameComponents *_nameComponents;
    NSURL *_imageURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)identityWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long serverID; // @synthesize serverID=_serverID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
