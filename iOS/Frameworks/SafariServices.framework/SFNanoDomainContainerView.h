//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _SFBrowserView;

__attribute__((visibility("hidden")))
@interface SFNanoDomainContainerView : UIView
{
    double _maximumHeight;
    _SFBrowserView *_browserView;
    CDUnknownBlockType _platterTapAction;
}

+ (double)defaultHeightInsideQuickboard;
+ (double)defaultHeight;
+ (double)defaultTopOffset;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType platterTapAction; // @synthesize platterTapAction=_platterTapAction;
@property(nonatomic) __weak _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
- (void)updateWithDomain:(id)arg1 isSecure:(_Bool)arg2 showsNotSecureAnnotation:(_Bool)arg3;

@end

