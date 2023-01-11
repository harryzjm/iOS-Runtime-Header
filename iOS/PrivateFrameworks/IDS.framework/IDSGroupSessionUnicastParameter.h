//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding>
{
    NSString *_groupSessionID;
    unsigned long long _participantID;
    unsigned long long _connectionIndex;
    long long _dataMode;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(readonly, nonatomic) unsigned long long connectionIndex; // @synthesize connectionIndex=_connectionIndex;
@property(readonly, nonatomic) unsigned long long participantID; // @synthesize participantID=_participantID;
@property(readonly, nonatomic) NSString *groupSessionID; // @synthesize groupSessionID=_groupSessionID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4;

@end
