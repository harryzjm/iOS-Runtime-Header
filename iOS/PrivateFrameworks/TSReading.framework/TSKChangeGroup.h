//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *mChangesArray;
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=mChangesArray;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

