//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VKMapView;

__attribute__((visibility("hidden")))
@interface _MKLookAroundLayerHostingView : UIView
{
    VKMapView *_lookAroundView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) VKMapView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

