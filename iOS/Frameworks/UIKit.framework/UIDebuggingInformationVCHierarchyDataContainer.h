//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject
{
    UIViewController *_viewController;
    long long _level;
}

@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 atLevel:(long long)arg2;

@end

