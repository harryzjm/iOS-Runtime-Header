//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class UIViewController;
@protocol SBUISystemApertureElement;

@protocol SBUISystemApertureElementProviding <NSObject>
@property(readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;

@optional
@property(readonly, nonatomic) __weak id <SBUISystemApertureElement> systemApertureElement;
@end

