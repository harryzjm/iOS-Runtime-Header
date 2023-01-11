//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXOneUpSettings
{
    double _maximumWhitespaceWidthForInitialZoomToFill;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double maximumWhitespaceWidthForInitialZoomToFill; // @synthesize maximumWhitespaceWidthForInitialZoomToFill=_maximumWhitespaceWidthForInitialZoomToFill;
- (double)zoomFactorForContentWithSize:(struct CGSize)arg1 toFillViewWithSize:(struct CGSize)arg2;
- (_Bool)shouldInitiallyZoomContentWithSize:(struct CGSize)arg1 toFillViewWithSize:(struct CGSize)arg2;
- (void)setDefaultValues;
- (id)parentSettings;

@end
