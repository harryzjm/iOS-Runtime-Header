//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@interface HUCCPageItemManager : HFItemManager
{
    _Bool _homeAppRemoved;
}

@property(nonatomic, getter=isHomeAppRemoved) _Bool homeAppRemoved; // @synthesize homeAppRemoved=_homeAppRemoved;
@property(readonly, nonatomic) _Bool shouldShowServicesPage;
@property(readonly, nonatomic) _Bool shouldShowScenesPage;
- (id)_buildItemProvidersForHome:(id)arg1;

@end
