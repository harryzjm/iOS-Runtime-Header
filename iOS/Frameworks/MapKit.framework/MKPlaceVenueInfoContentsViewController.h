//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol GEOMapItemVenueContents;

__attribute__((visibility("hidden")))
@interface MKPlaceVenueInfoContentsViewController <MKModuleViewControllerProtocol>
{
    id <GEOMapItemVenueContents> _venueContents;
    NSArray *_labels;
}

+ (_Bool)isVisibleWithMapItem:(id)arg1;
+ (id)venueInfoContentsViewControllerWithMapItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) id <GEOMapItemVenueContents> venueContents; // @synthesize venueContents=_venueContents;
- (void)infoCardThemeChanged;
- (id)_labelFont;
- (void)_contentSizeDidChange;
- (void)_addPaddingRowToRows:(id)arg1;
- (void)updateLabelsProperties;
- (id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2;
- (id)labelWithTitle:(id)arg1;
- (void)_updateRows;
- (void)viewDidLoad;
- (id)initWithVenueContents:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
