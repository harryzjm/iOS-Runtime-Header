//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXFocusTimelineEvent : NSObject
{
    _Bool _shouldAnimate;
    unsigned long long _type;
    struct CGPoint _location;
    CDStruct_1b6d18a9 _time;
}

@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 type:(unsigned long long)arg2;

@end
