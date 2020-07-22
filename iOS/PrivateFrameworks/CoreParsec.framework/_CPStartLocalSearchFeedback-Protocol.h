//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPStartLocalSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasIndexType;
@property(nonatomic) int indexType;
@property(readonly, nonatomic) _Bool hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) _Bool hasTriggerEvent;
@property(nonatomic) int triggerEvent;
@property(readonly, nonatomic) _Bool hasUuid;
@property(copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool hasInput;
@property(copy, nonatomic) NSString *input;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

