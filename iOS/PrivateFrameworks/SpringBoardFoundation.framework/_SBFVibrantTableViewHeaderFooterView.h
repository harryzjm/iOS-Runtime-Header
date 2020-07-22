//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UIView, _UIBackdropView;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    _UIBackdropView *_backdrop;
    UIView *_plusDView;
    _Bool _wantsPlusDLayer;
    long long _graphicsQuality;
    NSString *_backdropGroupName;
}

+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;
@property(nonatomic) _Bool wantsPlusDLayer; // @synthesize wantsPlusDLayer=_wantsPlusDLayer;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
- (void).cxx_destruct;
- (void)setFloating:(_Bool)arg1;
- (long long)initialGraphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

