//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions;
@protocol UIScrollViewDelegate;

@protocol _MKInfoCardController <NSObject>
+ (double)headerHeightInMinimalMode;
@property(nonatomic) double contentAlpha;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
- (void)hideTitle:(_Bool)arg1;
@end

