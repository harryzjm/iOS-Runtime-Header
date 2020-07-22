//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSVSystemDialogOptions : NSObject
{
    _Bool _showAsTopmost;
    _Bool _forceModalAlertAppearance;
    _Bool _showOnLockscreen;
    _Bool _dismissOverlaysOnLockscreen;
    NSString *_alertHeader;
    NSString *_alertMessage;
    NSArray *_allowedApplicationBundleIDs;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
}

@property(nonatomic) _Bool dismissOverlaysOnLockscreen; // @synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen;
@property(nonatomic) _Bool showOnLockscreen; // @synthesize showOnLockscreen=_showOnLockscreen;
@property(nonatomic) _Bool forceModalAlertAppearance; // @synthesize forceModalAlertAppearance=_forceModalAlertAppearance;
@property(nonatomic) _Bool showAsTopmost; // @synthesize showAsTopmost=_showAsTopmost;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSArray *allowedApplicationBundleIDs; // @synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
- (void).cxx_destruct;

@end

