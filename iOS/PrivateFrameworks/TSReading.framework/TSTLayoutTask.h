//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSTMasterLayout;

@interface TSTLayoutTask : NSObject
{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

@property(retain, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=mCellStatesToLayout;
- (void)flushToGlobalCaches;
- (void)dealloc;
- (id)initWithMasterLayout:(id)arg1;

@end
