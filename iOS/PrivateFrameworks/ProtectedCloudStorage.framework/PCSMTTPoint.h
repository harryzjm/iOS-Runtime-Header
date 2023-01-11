//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProtectedCloudStorage/NSSecureCoding-Protocol.h>

@class NSDate, NSString, PCSMTT;

@interface PCSMTTPoint : NSObject <NSSecureCoding>
{
    _Bool _success;
    NSString *_name;
    double _time;
    PCSMTT *_mtt;
    NSDate *_start;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDate *start; // @synthesize start=_start;
@property __weak PCSMTT *mtt; // @synthesize mtt=_mtt;
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) double time; // @synthesize time=_time;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)complete:(_Bool)arg1 time:(double)arg2;
- (void)complete:(_Bool)arg1;
- (id)jsonDict;
- (id)description;
- (id)initWithMTT:(id)arg1 name:(id)arg2;

@end
