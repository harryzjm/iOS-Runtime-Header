//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaUnresolvedMetadata-Protocol.h>

@class LPiTunesMediaAsset, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaPlaylistUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_curator;
    LPiTunesMediaAsset *_artwork;
}

@property(retain, nonatomic) LPiTunesMediaAsset *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *curator; // @synthesize curator=_curator;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void).cxx_destruct;
- (id)assetsToResolve;
- (id)resolve;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

