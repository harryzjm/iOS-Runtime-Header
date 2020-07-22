//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface EQKitAdjustableSpace : NSObject
{
    double mAscent;
    double mDescent;
    double mWidth;
}

+ (void)appendSpaceToAttributedString:(id)arg1 ascent:(double)arg2 descent:(double)arg3 width:(double)arg4;
+ (struct __CTRunDelegate *)newRunDelegateWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) double descent; // @synthesize descent=mDescent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=mAscent;
- (id)initWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3;

@end

