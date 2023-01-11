//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SiriRoutePickerAlertController, UIWindow;
@protocol SiriUIAudioRoutePickerControllerDelegate;

@interface SiriUIAudioRoutePickerController : NSObject
{
    id <SiriUIAudioRoutePickerControllerDelegate> _delegate;
    NSString *_audioCategory;
    NSString *_audioMode;
    UIWindow *_window;
    _Bool _hasRoutesToPick;
    _Bool _bluetoothIsPicked;
    SiriRoutePickerAlertController *_pickerAlertController;
}

+ (id)_nameForRouteInfo:(id)arg1 isSelected:(_Bool *)arg2 isBluetooth:(_Bool *)arg3 isOverride:(_Bool *)arg4 audioRouteName:(id *)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) SiriRoutePickerAlertController *pickerAlertController; // @synthesize pickerAlertController=_pickerAlertController;
@property(nonatomic) __weak id <SiriUIAudioRoutePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_pickableRoutesChanged:(id)arg1;
- (void)_routeChanged:(id)arg1;
- (void)refreshRoutes;
- (_Bool)isShowingPicker;
- (void)_removeWindow;
- (void)_dismissAlertController:(_Bool)arg1;
- (void)cancelPickerAnimated:(_Bool)arg1;
- (void)_selectRouteWithInfo:(id)arg1;
- (void)_showAlertControllerFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showPickerFromViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)bluetoothIsPicked;
- (_Bool)hasRoutesToPick;
- (void)_fetchPickableRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCategory:(id)arg1 mode:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end
