//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, WBSParsecImageRepresentation;

@interface WBSParsecMovieCardSection
{
    WBSParsecImageRepresentation *_imageRepresentation;
    WBSParsecImageRepresentation *_rottenTomatoesGlyphRepresentation;
    NSString *_rottenTomatoesText;
    NSArray *_sections;
    NSArray *_buyButtonSections;
}

+ (id)_specializedCardSectionSchema;
@property(readonly, copy, nonatomic) NSArray *buyButtonSections; // @synthesize buyButtonSections=_buyButtonSections;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSString *rottenTomatoesText; // @synthesize rottenTomatoesText=_rottenTomatoesText;
@property(readonly, nonatomic) WBSParsecImageRepresentation *rottenTomatoesGlyphRepresentation; // @synthesize rottenTomatoesGlyphRepresentation=_rottenTomatoesGlyphRepresentation;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end

