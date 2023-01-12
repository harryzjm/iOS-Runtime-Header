//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOPDTemplateData, GEOPlaceLineTemplate, NSMapTable, NSString, NSTimeZone;
@protocol GEOMapItemPhoto;

@interface GEOPlaceTemplate : NSObject
{
    GEOPDTemplateData *_templateData;
    NSTimeZone *_timeZone;
    NSMapTable *_attributionMap;
    _Bool _hasRichData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasRichData; // @synthesize hasRichData=_hasRichData;
@property(readonly, nonatomic) id <GEOMapItemPhoto> heroImage;
@property(readonly, nonatomic) GEOPlaceLineTemplate *footerLine;
@property(readonly, nonatomic) GEOPlaceLineTemplate *subtitleLine;
@property(readonly, nonatomic) NSString *placeName;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool supportsAreaHighlight;
@property(readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier;
- (id)initWithPlaceTemplate:(id)arg1 attributionMap:(id)arg2;
- (id)initWithIdentifier:(id)arg1 supportsAreaHighlight:(_Bool)arg2;

@end
