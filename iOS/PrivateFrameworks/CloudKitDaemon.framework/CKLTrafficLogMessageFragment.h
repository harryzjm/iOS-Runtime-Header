//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject
{
    unsigned long long _type;
    NSString *_uuid;
    long long _seqNum;
    NSString *_dataString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property(readonly, nonatomic) long long seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithMessage:(id)arg1;

@end

