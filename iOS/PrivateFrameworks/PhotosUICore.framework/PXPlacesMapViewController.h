//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerAccess-Protocol.h>

@class NSString, PKExtendedTraitCollection, PXPlacesMapController;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess>
{
    PXPlacesMapController *_mapController;
}

@property(retain, nonatomic) PXPlacesMapController *mapController; // @synthesize mapController=_mapController;
- (void).cxx_destruct;
- (void)sendTraitNotification;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

