//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINavigationController;

@interface VUICurrentSiriNavControllerContainer : NSObject
{
    UINavigationController *_currentSiriNavController;
}

+ (_Bool)isRunningInSiriPluggin;
+ (id)sharedInstance;
@property(nonatomic) __weak UINavigationController *currentSiriNavController; // @synthesize currentSiriNavController=_currentSiriNavController;
- (void).cxx_destruct;
- (id)init;

@end
