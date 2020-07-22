//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMBalloonPlugin, UIImageView;

@interface CKBrowserPluginCell
{
    IMBalloonPlugin *_plugin;
    UIImageView *_browserImage;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *browserImage; // @synthesize browserImage=_browserImage;
@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_updateShinyStatus;
- (void)_setImageForPlugin:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)iconView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
