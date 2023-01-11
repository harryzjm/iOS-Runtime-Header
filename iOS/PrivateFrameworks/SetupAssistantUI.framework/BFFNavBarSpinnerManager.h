//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject
{
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}

+ (id)sharedSpinnerManager;
- (void).cxx_destruct;
- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (id)init;

@end
