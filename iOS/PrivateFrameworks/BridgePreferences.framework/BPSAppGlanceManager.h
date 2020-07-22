//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSListController;

@interface BPSAppGlanceManager : NSObject
{
    PSListController *_listControllerDelegate;
}

@property(nonatomic) __weak PSListController *listControllerDelegate; // @synthesize listControllerDelegate=_listControllerDelegate;
- (void).cxx_destruct;
- (void)_logGlanceDescriptions;
- (id)showsGlance:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (void)loadSettings;

@end

