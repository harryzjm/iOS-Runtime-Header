//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSMutableDictionary, UIImage;

@interface SUTabBarAppearance : NSObject <NSCopying>
{
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    double _tabBarButtonSpacing;
    double _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(nonatomic) double tabBarButtonWidth; // @synthesize tabBarButtonWidth=_tabBarButtonWidth;
@property(nonatomic) double tabBarButtonSpacing; // @synthesize tabBarButtonSpacing=_tabBarButtonSpacing;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(retain, nonatomic) UIImage *selectedDividerImage; // @synthesize selectedDividerImage=_selectedDividerImage;
@property(retain, nonatomic) UIImage *dividerImage; // @synthesize dividerImage=_dividerImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)enumerateTitleTextAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
