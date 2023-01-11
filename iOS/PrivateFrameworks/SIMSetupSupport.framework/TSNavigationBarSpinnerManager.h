//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject
{
    NSMutableDictionary *_navigationItems;
    NSMutableDictionary *_previousLeftBarButtonItems;
    NSMutableDictionary *_previousRightBarButtonItems;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *previousRightBarButtonItems; // @synthesize previousRightBarButtonItems=_previousRightBarButtonItems;
@property(retain) NSMutableDictionary *previousLeftBarButtonItems; // @synthesize previousLeftBarButtonItems=_previousLeftBarButtonItems;
@property(retain) NSMutableDictionary *navigationItems; // @synthesize navigationItems=_navigationItems;
- (void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;
- (void)stopSpinnerForIdentifier:(id)arg1;
- (void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2;
- (id)init;

@end
