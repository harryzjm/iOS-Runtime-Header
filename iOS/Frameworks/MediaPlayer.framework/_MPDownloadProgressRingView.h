//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _MPDownloadProgressRingView : UIView
{
    double _progress;
}

+ (Class)layerClass;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateShapePath;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

