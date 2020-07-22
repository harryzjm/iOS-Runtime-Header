//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityValueProviding-Protocol.h>

@class MusicProductDescription, NSMutableDictionary, NSString, UIImage;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    NSMutableDictionary *_properties;
    UIImage *_artworkImage;
}

@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) MusicProductDescription *productDescription;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

