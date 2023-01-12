//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityProtocol-Protocol.h>

@class ATXModeEntityScore, NSString;

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>
{
    ATXModeEntityScore *scoreMetadata;
    NSString *_displayName;
    NSString *_rawIdentifier;
    NSString *_cnContactId;
    NSString *_stableContactIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)vipContactEmailAddresses;
+ (id)cnContactIdsOfFavoriteContacts;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *stableContactIdentifier; // @synthesize stableContactIdentifier=_stableContactIdentifier;
@property(retain, nonatomic) NSString *cnContactId; // @synthesize cnContactId=_cnContactId;
@property(retain, nonatomic) NSString *rawIdentifier; // @synthesize rawIdentifier=_rawIdentifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) ATXModeEntityScore *scoreMetadata; // @synthesize scoreMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isVIPContactGivenVIPs:(id)arg1;
- (_Bool)isFavoriteContactGivenCNContactIdsOfFavorites:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)jsonDict;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3 stableContactIdentifier:(id)arg4;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
