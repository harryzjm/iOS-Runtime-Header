//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, CAStateController, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUVolumeGlyphView : UIView
{
    CALayer *_glyphLayer;
    CAStateController *_stateController;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSString *_stateName;
}

+ (id)classSubstitions;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)layoutSubviews;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

