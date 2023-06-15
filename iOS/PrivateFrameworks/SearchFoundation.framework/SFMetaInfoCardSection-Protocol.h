//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFImage;

@protocol SFMetaInfoCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *badge;
@property(copy, nonatomic) NSURL *hostPageURL;
@property(copy, nonatomic) NSURL *contentURL;
@property(nonatomic) _Bool trending;
@property(copy, nonatomic) NSString *type;
@end

