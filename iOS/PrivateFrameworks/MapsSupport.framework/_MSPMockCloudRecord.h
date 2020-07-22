//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudRecord-Protocol.h>
#import <MapsSupport/NSCoding-Protocol.h>
#import <MapsSupport/NSMutableCopying-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MSPMockCloudRecord : NSObject <MSPCloudRecord, NSMutableCopying, NSCoding>
{
    NSMutableDictionary *_values;
    NSDate *_cloudRecordModificationDate;
    NSString *_name;
    NSString *_type;
}

@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *cloudRecordModificationDate; // @synthesize cloudRecordModificationDate=_cloudRecordModificationDate;
- (void).cxx_destruct;
- (void)updateModificationDate;
@property(readonly, nonatomic) NSString *cloudRecordName;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
