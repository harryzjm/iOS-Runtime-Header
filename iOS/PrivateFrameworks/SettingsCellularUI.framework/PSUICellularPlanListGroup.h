//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanListGroup : NSObject
{
}

- (id)getLogger;
- (void)danglingPlanPressed:(id)arg1;
- (id)danglingPlanSpecifierDetailText:(id)arg1;
- (id)planSpecifierDetailText:(id)arg1;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

