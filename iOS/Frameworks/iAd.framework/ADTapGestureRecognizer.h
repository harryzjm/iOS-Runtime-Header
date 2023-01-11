//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@interface ADTapGestureRecognizer : UIGestureRecognizer
{
    long long _finalTrackingID;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchMovedHandler;
    CDUnknownBlockType _touchUpHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType touchUpHandler; // @synthesize touchUpHandler=_touchUpHandler;
@property(copy, nonatomic) CDUnknownBlockType touchMovedHandler; // @synthesize touchMovedHandler=_touchMovedHandler;
@property(copy, nonatomic) CDUnknownBlockType touchDownHandler; // @synthesize touchDownHandler=_touchDownHandler;
@property(nonatomic) long long finalTrackingID; // @synthesize finalTrackingID=_finalTrackingID;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
