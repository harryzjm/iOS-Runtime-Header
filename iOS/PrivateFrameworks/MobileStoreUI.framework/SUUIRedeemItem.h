//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIItem.h"

@class NSString;
@protocol SUUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SUUIRedeemItem : SUUIItem
{
    id <SUUIArtworkProviding> _artworks;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SUUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)largestArtworkURL;
- (id)artworkURLForSize:(long long)arg1;
- (struct _NSRange)ageBandRange;

// Remaining properties
@property(nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property(nonatomic) long long itemKind; // @dynamic itemKind;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

