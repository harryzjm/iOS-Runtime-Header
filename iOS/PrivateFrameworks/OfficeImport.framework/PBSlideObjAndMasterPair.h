//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : NSObject
{
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;
- (void)dealloc;
- (int)masterId;
- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;

@end
