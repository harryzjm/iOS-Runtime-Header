//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PPContactDiskCacheHistoryRecordSet : NSObject
{
    NSString *_filename;
    NSMutableArray *_adds;
    NSMutableArray *_updates;
    NSMutableArray *_deletes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) NSMutableArray *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSMutableArray *adds; // @synthesize adds=_adds;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (unsigned long long)hash;
- (id)initWithFilename:(id)arg1;

@end
