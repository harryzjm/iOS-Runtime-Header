//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SUUITracklistColumn : NSObject
{
    long long _columnIdentifier;
    long long _contentAlignment;
    long long _headerAlignment;
    double _maximumWidthFraction;
    double _preferredWidth;
    _Bool _showsPreviewControl;
    _Bool _sizesToFit;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool sizesToFit; // @synthesize sizesToFit=_sizesToFit;
@property(nonatomic) _Bool showsPreviewControl; // @synthesize showsPreviewControl=_showsPreviewControl;
@property(nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(nonatomic) double maximumWidthFraction; // @synthesize maximumWidthFraction=_maximumWidthFraction;
@property(nonatomic) long long headerAlignment; // @synthesize headerAlignment=_headerAlignment;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long columnIdentifier; // @synthesize columnIdentifier=_columnIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setPreferredWidthForAttributedStrings:(id)arg1;

@end

