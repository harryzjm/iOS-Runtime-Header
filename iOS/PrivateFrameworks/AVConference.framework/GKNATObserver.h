//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol GKNATObserverDelegate;

@interface GKNATObserver : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)shouldTryNATCheck;
- (int)currentNATType;
@property NSObject<GKNATObserverDelegate> *delegate;
- (id)initWithOptions:(id)arg1;

@end
