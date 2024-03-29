//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDPath, GQDWPLayoutFrame, NSString;

@interface GQDShape
{
    GQDPath *mPath;
    GQDWPLayoutFrame *mLayoutFrame;
}

+ (const struct StateSpec *)stateForReading;
- (struct CGPath *)createBezierPath;
- (id)path;
- (_Bool)isRectangularAndAxisAlignedToAngle:(float)arg1;
- (_Bool)isBlank;
- (id)layoutFrame;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

