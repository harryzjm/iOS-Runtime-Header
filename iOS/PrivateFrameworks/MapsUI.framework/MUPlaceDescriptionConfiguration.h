//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, NSString;

__attribute__((visibility("hidden")))
@interface MUPlaceDescriptionConfiguration : NSObject
{
    _Bool _showSectionTitle;
    NSString *_titleText;
    NSString *_textBlockText;
    GEOMapItemAttribution *_attribution;
}

+ (id)configurationWithEncyclopedicInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showSectionTitle; // @synthesize showSectionTitle=_showSectionTitle;
@property(readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSString *textBlockText; // @synthesize textBlockText=_textBlockText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 attribution:(id)arg3;

@end

