//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCTransferFailureReport : NSObject
{
    NSMutableDictionary *_privateDBErrorCountByPCSState;
    NSMutableDictionary *_shareDBErrorCountByPCSState;
    NSError *_error;
    NSDate *_lastFailureDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *shareDBErrorCountByPCSState; // @synthesize shareDBErrorCountByPCSState=_shareDBErrorCountByPCSState;
@property(readonly, nonatomic) NSDictionary *privateDBErrorCountByPCSState; // @synthesize privateDBErrorCountByPCSState=_privateDBErrorCountByPCSState;
@property(readonly, nonatomic) NSDate *lastFailureDate; // @synthesize lastFailureDate=_lastFailureDate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isEqualToTransferFailureReport:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encounteredErrors:(unsigned long long)arg1 atDate:(id)arg2;
- (void)encounteredErrorWithPCSState:(unsigned int)arg1 privateDB:(_Bool)arg2 atDate:(id)arg3;
- (void)setLastFailureDate:(id)arg1;
- (id)initWithError:(id)arg1;

@end

