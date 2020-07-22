//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFColorCollection, NSString, UIColor;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>
{
    HFColorCollection *_colorCollection;
}

@property(readonly, nonatomic) HFColorCollection *colorCollection; // @synthesize colorCollection=_colorCollection;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1 ignoreTemperature:(_Bool)arg2;
- (id)colorByAdjustingToColorProfile:(id)arg1;
@property(readonly, nonatomic) UIColor *UIColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithColorCollection:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

