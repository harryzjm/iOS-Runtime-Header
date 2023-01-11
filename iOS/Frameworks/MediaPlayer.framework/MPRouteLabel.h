//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPAVRoute, NSMutableSet, NSString, UIColor, UIFont, UILabel;

@interface MPRouteLabel : UIView
{
    NSString *_designatedGroupLeaderName;
    NSString *_previousDesignatedGroupLeaderName;
    struct CGRect _previousBounds;
    UIFont *_previousFont;
    NSMutableSet *_previousRouteNames;
    _Bool _previousForcesUppercaseText;
    _Bool _previousDisplayAsSiriSuggestion;
    long long _previousTruncationMode;
    NSMutableSet *_routeNames;
    UILabel *_sizingLabel;
    _Bool _forcesUppercaseText;
    _Bool _displayAsSiriSuggestion;
    long long _minimumEndCharacterCount;
    NSString *_text;
    long long _truncationMode;
    MPAVRoute *_route;
    UILabel *_titleLabel;
    UIColor *_textColor;
    UIFont *_font;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(nonatomic) _Bool displayAsSiriSuggestion; // @synthesize displayAsSiriSuggestion=_displayAsSiriSuggestion;
@property(nonatomic) _Bool forcesUppercaseText; // @synthesize forcesUppercaseText=_forcesUppercaseText;
@property(nonatomic) long long truncationMode; // @synthesize truncationMode=_truncationMode;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long minimumEndCharacterCount; // @synthesize minimumEndCharacterCount=_minimumEndCharacterCount;
- (void).cxx_destruct;
- (long long)_compareLength:(id)arg1 with:(id)arg2;
- (void)_routeDidChangeNotification:(id)arg1;
- (id)_marketingNames;
- (id)_bestStringThatFitsSize:(struct CGSize)arg1;
- (void)_updateTitleIfNeeded;
- (id)_truncateText:(id)arg1 by:(long long)arg2;
- (void)_updateRouteLabel;
- (_Bool)_labelFitsText:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)_labelSizeForText:(id)arg1;
- (id)_plusSeparatedRouteNames:(id)arg1;
- (id)_routeNamesSortedLength:(id)arg1;
- (id)_routeNamesSortedAlphanumeric:(id)arg1;
- (id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2;
- (void)removeRouteNamesFromArray:(id)arg1;
- (void)removeRouteName:(id)arg1;
- (void)addRouteNamesFromArray:(id)arg1;
- (void)addRouteName:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, setter=_setTextColorFollowsTintColor:) _Bool _textColorFollowsTintColor;
@property(readonly, nonatomic) double _baselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

