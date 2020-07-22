//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecRichTitleCardSection
{
    _Bool _centered;
    _Bool _includesSeparateLineForRottenTomatoes;
    NSString *_titleText;
    NSString *_subtitle;
    NSArray *_moreGlyphs;
    WBSParsecImageRepresentation *_rottenTomatoesGlyph;
    NSString *_rottenTomatoesText;
    NSNumber *_rating;
    NSString *_ratingText;
    WBSParsecImageRepresentation *_image;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, nonatomic) WBSParsecImageRepresentation *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(readonly, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(readonly, nonatomic) _Bool includesSeparateLineForRottenTomatoes; // @synthesize includesSeparateLineForRottenTomatoes=_includesSeparateLineForRottenTomatoes;
@property(readonly, copy, nonatomic) NSString *rottenTomatoesText; // @synthesize rottenTomatoesText=_rottenTomatoesText;
@property(readonly, nonatomic) WBSParsecImageRepresentation *rottenTomatoesGlyph; // @synthesize rottenTomatoesGlyph=_rottenTomatoesGlyph;
@property(readonly, nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(readonly, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end

