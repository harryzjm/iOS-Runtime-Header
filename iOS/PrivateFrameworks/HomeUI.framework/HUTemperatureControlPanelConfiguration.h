//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelConfiguration-Protocol.h>

@class NSString;
@protocol HUControlPanelRule;

@interface HUTemperatureControlPanelConfiguration : NSObject <HUControlPanelConfiguration>
{
}

+ (id)_temperatureFormatter;
- (_Bool)shouldShowSectionTitleForItem:(id)arg1;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

