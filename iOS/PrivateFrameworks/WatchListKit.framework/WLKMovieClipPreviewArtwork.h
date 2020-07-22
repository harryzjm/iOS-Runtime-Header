//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WLKArtworkVariant;

@interface WLKMovieClipPreviewArtwork : NSObject
{
    _Bool _supportsLayeredImage;
    NSString *_bgColor;
    NSString *_textColor1;
    NSString *_textColor2;
    NSString *_textColor3;
    NSString *_textColor4;
    NSString *_url;
    struct CGSize _artworkSize;
}

@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *textColor4; // @synthesize textColor4=_textColor4;
@property(readonly, copy, nonatomic) NSString *textColor3; // @synthesize textColor3=_textColor3;
@property(readonly, copy, nonatomic) NSString *textColor2; // @synthesize textColor2=_textColor2;
@property(readonly, copy, nonatomic) NSString *textColor1; // @synthesize textColor1=_textColor1;
@property(readonly, copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) _Bool supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) WLKArtworkVariant *artworkVariant;
- (id)init;
- (id)_init;
- (id)initWithDictionary:(id)arg1;

@end
