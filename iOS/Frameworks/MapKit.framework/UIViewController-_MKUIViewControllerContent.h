//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKInfoCardThemeListener-Protocol.h>

@class NSString;
@protocol MKInfoCardTheme;

@interface UIViewController (_MKUIViewControllerContent) <MKInfoCardThemeListener>
@property(nonatomic) long long contentVisibility;
@property(nonatomic) double contentAlpha;
- (void)infoCardThemeChanged;
@property(readonly, nonatomic) id <MKInfoCardTheme> mk_theme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
