//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DRange : NSObject
{
    _Bool _above;
    tvec2_84d5962d _range;
}

+ (id)rangeWithIntercept:(float)arg1 begin:(float)arg2 end:(float)arg3;
@property(readonly, nonatomic) _Bool above; // @synthesize above=_above;
@property(readonly, nonatomic) tvec2_84d5962d range; // @synthesize range=_range;
- (id).cxx_construct;
@property(readonly, nonatomic) float offset;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) float signedScale;
- (id)initWithIntercept:(float)arg1 begin:(float)arg2 end:(float)arg3;

@end
