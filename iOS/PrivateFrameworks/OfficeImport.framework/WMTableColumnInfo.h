//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : NSObject
{
    NSMutableArray *mStopArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (void)mergeStopArray:(id)arg1;
- (float)stopAt:(unsigned int)arg1;
- (id)initWithStopArray:(id)arg1;

@end

