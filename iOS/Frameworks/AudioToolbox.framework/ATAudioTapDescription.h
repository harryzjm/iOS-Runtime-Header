//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AVAudioFormat, NSArray, NSString, NSUUID;

@interface ATAudioTapDescription : NSObject <NSSecureCoding>
{
    int _processIdentifier;
    long long _tapType;
    NSArray *_excludedPIDs;
    NSString *_name;
    NSUUID *_UUID;
    AVAudioFormat *_format;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *excludedPIDs; // @synthesize excludedPIDs=_excludedPIDs;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) long long tapType; // @synthesize tapType=_tapType;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initSystemTapWithFormat:(id)arg1 excludePIDs:(id)arg2;
- (id)initSystemTapWithFormat:(id)arg1;
- (id)initProcessTapWithFormat:(id)arg1 PID:(int)arg2;
- (id)initProcessTapInternalWithFormat:(id)arg1 PID:(int)arg2;

@end
