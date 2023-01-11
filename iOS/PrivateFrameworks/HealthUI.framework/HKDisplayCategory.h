//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKFillStyle, HKGradient, NSString, UIColor, UIImage;

@interface HKDisplayCategory : NSObject
{
    HKGradient *_gradient;
    UIColor *_topColor;
    UIColor *_bottomColor;
    UIColor *_keyColor;
    long long _categoryID;
    NSString *_categoryName;
    NSString *_displayName;
    NSString *_listIconName;
    UIImage *_listIcon;
    UIImage *_healthDataIcon;
    UIImage *_shareIcon;
}

+ (id)topLevelCategoryIdentifiers;
@property(readonly, nonatomic) HKGradient *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) UIImage *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(readonly, nonatomic) UIImage *healthDataIcon; // @synthesize healthDataIcon=_healthDataIcon;
@property(readonly, nonatomic) UIImage *listIcon; // @synthesize listIcon=_listIcon;
@property(readonly, nonatomic) NSString *listIconName; // @synthesize listIconName=_listIconName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTopLevelCategory;
@property(readonly, nonatomic) _Bool isMeCategory;
@property(readonly, nonatomic) HKFillStyle *fillStyle;
@property(readonly, nonatomic) UIColor *seriesColor;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

