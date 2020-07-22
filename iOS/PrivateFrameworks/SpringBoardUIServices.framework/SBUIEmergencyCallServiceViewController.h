//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIEmergencyCallServiceInterface-Protocol.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>
{
    long long _backgroundStyle;
    UIColor *_tintColor;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void).cxx_destruct;
- (void)noteViewMovedOffscreenTemporarily;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)backgroundStyle:(CDUnknownBlockType)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

