//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENGroupID, IDSDestinationPushToken, NSData, NSDictionary, NSString;

@interface IDSCloudKitTransportLogMessage : NSObject
{
    NSDictionary *_payload;
    NSString *_secondaryID;
    NSString *_deviceID;
    NSString *_encryptionType;
}

@property(retain, nonatomic) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cypherIdentifier;
@property(readonly, nonatomic) NSData *encryptedPayload;
@property(readonly, nonatomic) IDSDestinationPushToken *destination;
@property(readonly, nonatomic) NSString *senderAlias;
@property(readonly, nonatomic) NSString *recipientAlias;
@property(readonly, nonatomic) ENGroupID *groupID;

@end
