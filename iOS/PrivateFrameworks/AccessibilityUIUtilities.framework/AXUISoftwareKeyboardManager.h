//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol AXUISoftwareKeyboardManagerDelegate;

@interface AXUISoftwareKeyboardManager : NSObject
{
    NSMutableSet *_reasonsToDisableSoftwareKeyboard;
    NSMutableSet *_reasonsToEnableSoftwareKeyboard;
    id <AXUISoftwareKeyboardManagerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AXUISoftwareKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeReasonToDisableSoftwareKeyboard:(id)arg1;
- (void)addReasonToDisableSoftwareKeyboard:(id)arg1;
- (void)removeReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)addReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)_updateHardwareKeyboardState;
- (void)_setIsHardwareKeyboardAttached:(_Bool)arg1;
- (void)_wst_setIsHardwareKeyboardAttached:(id)arg1;
- (void)_overrideSetHardwareKeyboardAttached:(_Bool)arg1;
- (_Bool)isHardwareKeyboardAttached;
- (void)updateKeyboardHardwareState;
- (void)dealloc;
- (id)init;

@end
