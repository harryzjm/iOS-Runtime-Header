//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKImage;

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_credentialIdentifier;
    NSString *_cardConfigurationIdentifier;
    NSString *_sharingInstanceIdentifier;
    NSString *_localizedDescription;
    NSString *_ownerDisplayName;
    PKImage *_pkPassThumbnailImage;
    NSString *_nonce;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) PKImage *pkPassThumbnailImage; // @synthesize pkPassThumbnailImage=_pkPassThumbnailImage;
@property(retain, nonatomic) NSString *ownerDisplayName; // @synthesize ownerDisplayName=_ownerDisplayName;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *sharingInstanceIdentifier; // @synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier;
@property(retain, nonatomic) NSString *cardConfigurationIdentifier; // @synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier;
@property(retain, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) struct CGImage *passThumbnailImage; // @dynamic passThumbnailImage;
- (id)initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3 passThumbnailImage:(struct CGImage *)arg4 ownerDisplayName:(id)arg5 localizedDescription:(id)arg6;

@end
