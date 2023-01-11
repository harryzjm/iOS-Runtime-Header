//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject
{
    _Bool _canGroup;
    _Bool _hasPendingPickedRoutes;
    _Bool _shouldReload;
    NSArray *_pickedRoutes;
    NSArray *_pendingPickedRoutes;
    NSArray *_displayableAvailableRoutes;
    NSArray *_displayAsPickedRoutes;
    NSArray *_volumeCapableRoutes;
}

@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(nonatomic) _Bool canGroup; // @synthesize canGroup=_canGroup;
@property(copy, nonatomic) NSArray *volumeCapableRoutes; // @synthesize volumeCapableRoutes=_volumeCapableRoutes;
@property(copy, nonatomic) NSArray *displayAsPickedRoutes; // @synthesize displayAsPickedRoutes=_displayAsPickedRoutes;
@property(copy, nonatomic) NSArray *displayableAvailableRoutes; // @synthesize displayableAvailableRoutes=_displayableAvailableRoutes;
@property(copy, nonatomic) NSArray *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property(copy, nonatomic) NSArray *pickedRoutes; // @synthesize pickedRoutes=_pickedRoutes;
- (void).cxx_destruct;

@end

