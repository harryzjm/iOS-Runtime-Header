//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMDMessagePTask : NSObject
{
    NSString *_guid;
    unsigned long long _taskFlags;
}

@property(readonly, nonatomic) unsigned long long taskFlags; // @synthesize taskFlags=_taskFlags;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)compeletedTask:(unsigned long long)arg1;
- (_Bool)needsProccesingFor:(unsigned long long)arg1;
- (void)setTaskFlag:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithStoreDictionary:(id)arg1;
- (id)initWithGUID:(id)arg1;

@end

