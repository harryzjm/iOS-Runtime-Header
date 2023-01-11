//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject
{
    NSPointerArray *_constraintsToUpdate;
}

+ (id)sharedController;
@property(retain, nonatomic) NSPointerArray *constraintsToUpdate; // @synthesize constraintsToUpdate=_constraintsToUpdate;
- (void)registerConstraint:(id)arg1 leading:(double)arg2 forFontTextStyle:(id)arg3;
- (void)_updateConstraints;
- (void)updateConstraint:(id)arg1;
- (void)dealloc;

@end

