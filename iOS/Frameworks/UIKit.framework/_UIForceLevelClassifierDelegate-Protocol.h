//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIForceLevelClassifier;

@protocol _UIForceLevelClassifierDelegate <NSObject>
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(long long)arg2;

@optional
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;
@end
