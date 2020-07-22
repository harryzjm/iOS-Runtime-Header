//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPiOSCanvasViewController.h>

@class NSArray;

@interface STTextTangierCanvasViewController : TSWPiOSCanvasViewController
{
    NSArray *_installedGestureRecognizers;
}

@property(readonly, nonatomic) NSArray *installedGestureRecognizers; // @synthesize installedGestureRecognizers=_installedGestureRecognizers;
- (void).cxx_destruct;
- (void)dealloc;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)backgroundColorForMagnifier;
- (void)setUpGestureRecognizers;
- (void)setUpGestureDependenciesWithScrollView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;

@end
