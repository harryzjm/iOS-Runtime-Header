//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PHImportTimer : NSObject
{
    unsigned char _type;
    unsigned char _subtype;
    id _uuid;
    NSDate *_startTime;
    NSDate *_endTime;
    unsigned long long _signpostId;
}

- (void).cxx_destruct;
@property unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property unsigned char subtype; // @synthesize subtype=_subtype;
@property unsigned char type; // @synthesize type=_type;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) id uuid; // @synthesize uuid=_uuid;
- (id)description;
- (double)duration;
- (void)stop;
- (void)start;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2;

@end
