//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>

@class CCUIButtonModuleView, CCUICAPackageDescription, NSString, UIColor, UIImage;

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController>
{
    CCUIButtonModuleView *_buttonModuleView;
    _Bool _expanded;
}

@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)viewDidLoad;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
@property(readonly, nonatomic) CCUIButtonModuleView *buttonView;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(copy, nonatomic) NSString *glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property(retain, nonatomic) UIColor *selectedGlyphColor;
@property(retain, nonatomic) UIImage *selectedGlyphImage;
@property(retain, nonatomic) UIColor *glyphColor;
@property(retain, nonatomic) UIImage *glyphImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly) Class superclass;

@end

