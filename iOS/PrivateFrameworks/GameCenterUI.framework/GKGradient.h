//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKGradient : NSObject
{
    struct CGGradient *_CGGradient;
}

+ (id)gradientWithColors:(id)arg1 atLocations:(const double *)arg2;
- (struct CGGradient *)CGGradient;
- (void)dealloc;
- (id)initWithColors:(id)arg1 atLocations:(const double *)arg2;

@end

