//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GKPeerPickerViewController;
@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : NSObject
{
    id _picker;
}

+ (void)initialize;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (void)_createPicker;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(nonatomic) unsigned long long connectionTypesMask;
@property(readonly, nonatomic) GKPeerPickerViewController *pickerViewController; // @dynamic pickerViewController;
- (void)dismiss;
- (void)show;
@property(nonatomic) id <GKPeerPickerControllerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end
