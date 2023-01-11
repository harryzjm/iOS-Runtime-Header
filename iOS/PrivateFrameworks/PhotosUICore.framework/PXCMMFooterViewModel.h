//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXMomentShareStatusPresentation;
@protocol PXCMMFooterViewModelActionDelegate;

@interface PXCMMFooterViewModel <PXChangeObserver>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMFooterViewModelActionDelegate> _actionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXCMMFooterViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateAllProperties;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
