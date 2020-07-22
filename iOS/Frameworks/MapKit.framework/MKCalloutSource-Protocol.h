//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString, UIView;

@protocol MKCalloutSource <NSObject>
- (NSString *)debugAnchorPointString;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(_Bool)arg3;
- (NSString *)title;

@optional
@property(readonly, retain, nonatomic) UIView *detailCalloutAccessoryView;
@property(readonly, retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(readonly, retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(readonly, copy, nonatomic) NSString *subtitle;
@end

