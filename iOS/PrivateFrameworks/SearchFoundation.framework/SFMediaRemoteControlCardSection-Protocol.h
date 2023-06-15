//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFMediaRemoteControlCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *playbackBundleIdentifier;
@property(nonatomic) _Bool playbackRouteUniqueIdentifierIsEncrypted;
@property(copy, nonatomic) NSString *playbackRouteUniqueIdentifier;
@property(copy, nonatomic) NSString *type;
@end

