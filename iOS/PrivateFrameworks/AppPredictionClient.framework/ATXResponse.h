//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSError, NSUUID;

@interface ATXResponse : NSObject <NSSecureCoding>
{
    NSData *_cacheFileData;
    NSUUID *_uuid;
    NSError *_error;
    NSArray *_predictions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *cacheFileData; // @synthesize cacheFileData=_cacheFileData;
@property(readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateAtxSearchResults:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)jsonDescription;
- (id)json;
- (id)jsonRawData;
- (id)description;
@property(readonly, nonatomic) NSArray *predictedApps;
- (id)init;
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;

@end

