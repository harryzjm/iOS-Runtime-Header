//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapGestureRecognizer, UIWindow;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate>
{
    UIWindow *__window;
    NSArray *__diagnosticsServicesClasses;
    UITapGestureRecognizer *__gestureRecognizer;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer; // @synthesize _gestureRecognizer=__gestureRecognizer;
@property(readonly, nonatomic) NSArray *_diagnosticsServicesClasses; // @synthesize _diagnosticsServicesClasses=__diagnosticsServicesClasses;
@property(readonly, nonatomic) UIWindow *_window; // @synthesize _window=__window;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_executeService:(id)arg1;
- (id)_currentRootViewController;
- (void)_presentContextualViewControllerFromPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)presentContextualDiagnostics;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_updateGestureRecognizer;
- (void)_loadDiagnosticsServicesClasses;
- (void)presentContextualViewControllerForServices:(id)arg1;
- (id)consoleDescriptionForServices:(id)arg1;
- (id)servicesWithItemProviders:(id)arg1;
- (id)currentItemProviders;
- (void)setupOnInternalDevicesWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
