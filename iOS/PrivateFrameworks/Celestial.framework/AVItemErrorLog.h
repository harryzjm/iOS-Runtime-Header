//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Celestial/NSCopying-Protocol.h>

@class AVItemErrorLogInternal, NSArray;

@interface AVItemErrorLog : NSObject <NSCopying>
{
    AVItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly, nonatomic) NSArray *events;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;

@end
