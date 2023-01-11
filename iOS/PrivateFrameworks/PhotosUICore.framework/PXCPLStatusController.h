//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCPLUIStatusProvider, PXStatusViewModel;

@interface PXCPLStatusController : NSObject <PXChangeObserver>
{
    PXCPLUIStatusProvider *_statusProvider;
    PXStatusViewModel *_viewModel;
    NSString *_fallbackTitle;
    NSString *_fallbackMessage;
    NSString *_fallbackActionTitle;
    CDUnknownBlockType _fallbackAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fallbackAction; // @synthesize fallbackAction=_fallbackAction;
@property(copy, nonatomic) NSString *fallbackActionTitle; // @synthesize fallbackActionTitle=_fallbackActionTitle;
@property(copy, nonatomic) NSString *fallbackMessage; // @synthesize fallbackMessage=_fallbackMessage;
@property(copy, nonatomic) NSString *fallbackTitle; // @synthesize fallbackTitle=_fallbackTitle;
@property(retain, nonatomic) PXCPLUIStatusProvider *statusProvider; // @synthesize statusProvider=_statusProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_statusProviderDidChange;
- (id)initWithViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
