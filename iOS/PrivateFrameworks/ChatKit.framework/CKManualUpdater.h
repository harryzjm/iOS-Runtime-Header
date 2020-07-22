//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CKManualUpdater : NSObject
{
    _Bool _needsUpdate;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;

@end

