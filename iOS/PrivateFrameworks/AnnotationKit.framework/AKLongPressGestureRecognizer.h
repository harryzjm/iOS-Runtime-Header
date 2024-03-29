//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSString;

@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    _Bool _penGestureDetected;
}

@property(nonatomic) _Bool penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_checkTouchesForStylus:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

