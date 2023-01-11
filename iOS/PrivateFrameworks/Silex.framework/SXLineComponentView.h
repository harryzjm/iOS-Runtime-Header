//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView
{
    CALayer *_strokeLayer;
    SXSolidBorderView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SXSolidBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) CALayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
- (_Bool)userInteractable;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;
- (void)loadComponent:(id)arg1;

@end
