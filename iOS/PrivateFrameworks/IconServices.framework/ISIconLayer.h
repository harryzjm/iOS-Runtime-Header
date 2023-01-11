//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <IconServices/ISIconManagerObserver-Protocol.h>

@class ISIcon;

@interface ISIconLayer : CALayer <ISIconManagerObserver>
{
    ISIcon *_icon;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
    unsigned long long _shape;
    _Bool _shouldApplyMask;
    _Bool _drawBorder;
    unsigned long long _iconShape;
}

@property(nonatomic) _Bool drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) _Bool shouldApplyMask; // @synthesize shouldApplyMask=_shouldApplyMask;
@property(nonatomic) unsigned long long iconShape; // @synthesize iconShape=_iconShape;
@property(retain, nonatomic) ISIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) unsigned long long badgeOptions; // @synthesize badgeOptions=_badgeOptions;
- (void).cxx_destruct;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;
- (id)initWithIcon:(id)arg1;
- (id)init;

@end

