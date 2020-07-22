//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_problems;
    _Bool _needsSyncUp;
    int _state;
    NSNumber *_pendingRequestID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool needsSyncUp; // @synthesize needsSyncUp=_needsSyncUp;
@property(retain, nonatomic) NSNumber *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;
- (void)_addProblem:(id)arg1;
@property(readonly, nonatomic) NSSet *effectedRecordNames;
@property(readonly, nonatomic) NSString *effectiveProblemMessage;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)arg1;
- (int)_zoneStateForProblemType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProblemReport:(id)arg1;
- (id)init;

@end

