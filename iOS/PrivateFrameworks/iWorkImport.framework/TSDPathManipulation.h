//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDPathManipulation : NSObject
{
    TSDPathManipulation *mPrecedingManipulation;
}

- (_Bool)canDecomposeRectIntoParts;
- (struct CGPath *)manipulatePath:(struct CGPath *)arg1 withLineWidth:(double)arg2;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingManipulation:(id)arg4;

@end

